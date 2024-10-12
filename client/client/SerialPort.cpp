#include "SerialPort.h"

using namespace msclr::interop;

HANDLE openSerialPort(const std::wstring& portName, DWORD baudRate) {
    HANDLE hSerial = CreateFile(portName.c_str(),
        GENERIC_READ | GENERIC_WRITE,
        0,
        NULL,
        OPEN_EXISTING,
        FILE_ATTRIBUTE_NORMAL,
        NULL);

    if (hSerial == INVALID_HANDLE_VALUE) {

        //MessageBox::Show("Error opening serial port!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        return INVALID_HANDLE_VALUE;
    }

    DCB dcbSerialParams = { 0 };
    dcbSerialParams.DCBlength = sizeof(dcbSerialParams);

    if (!GetCommState(hSerial, &dcbSerialParams)) {
        MessageBox::Show("Error setting state!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        CloseHandle(hSerial);
        return INVALID_HANDLE_VALUE;
    }

    dcbSerialParams.BaudRate = baudRate;
    dcbSerialParams.ByteSize = 8;
    dcbSerialParams.StopBits = ONESTOPBIT;
    dcbSerialParams.Parity = NOPARITY;

    if (!SetCommState(hSerial, &dcbSerialParams)) {
        MessageBox::Show("Error setting state!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        CloseHandle(hSerial);
        return INVALID_HANDLE_VALUE;
    }

    COMMTIMEOUTS timeouts = { 0 };
    timeouts.ReadIntervalTimeout = 50;
    timeouts.ReadTotalTimeoutConstant = 50;
    timeouts.ReadTotalTimeoutMultiplier = 10;
    timeouts.WriteTotalTimeoutConstant = 50;
    timeouts.WriteTotalTimeoutMultiplier = 10;

    SetCommTimeouts(hSerial, &timeouts);

    return hSerial;
}

void sendMessage(HANDLE hSerial, String^ message) {
    // Конвертуємо System::String^ в std::string
    std::string stdMessage = marshal_as<std::string>(message);

    DWORD bytesWritten;
    WriteFile(hSerial, stdMessage.c_str(), stdMessage.size(), &bytesWritten, NULL);
}

String^ readMessage(HANDLE hSerial) {
    char buffer[256];
    DWORD bytesRead;
    std::string result;

    while (true) {
        if (ReadFile(hSerial, buffer, sizeof(buffer) - 1, &bytesRead, NULL)) {
            buffer[bytesRead] = '\0';
            result += buffer;

            if (result.find('\n') != std::string::npos) {
                break;
            }
        }
    }

    // Конвертуємо std::string у System::String^
    return gcnew String(result.c_str());
}



