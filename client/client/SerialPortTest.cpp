#include <gtest/gtest.h>
#include <Windows.h>
#include "SerialPort.h"

// ���� ��� ������� openSerialPort
TEST(SerialPortTests, OpenSerialPort_ValidPortName_ReturnsHandle) {
    HANDLE hSerial = openSerialPort(L"COM1", CBR_9600);
    EXPECT_NE(hSerial, INVALID_HANDLE_VALUE); // ����������, �� ����� �� � ��������

    // ��������� ������� ����
    CloseHandle(hSerial);
}

TEST(SerialPortTests, OpenSerialPort_InvalidPortName_ReturnsInvalidHandle) {
    HANDLE hSerial = openSerialPort(L"COM99", CBR_9600); // COM99, �������, ��������
    EXPECT_EQ(hSerial, INVALID_HANDLE_VALUE); // ����������, �� ����� � ��������
}

// ���� ��� sendMessage
TEST(SerialPortTests, SendMessage_ValidHandle_SendsMessage) {
    HANDLE hSerial = openSerialPort(L"COM1", CBR_9600);
    ASSERT_NE(hSerial, INVALID_HANDLE_VALUE); // ������������, �� ���� ��������

    // ������ ������� ��������
    sendMessage(hSerial, "Hello, World!");

    // �������� �������� ����� � �������� �������� �� �������� ������ �����,
    // ��� ��� ����� ������� ���� ����������� ���-��'��� ��� ������� ����������.

    CloseHandle(hSerial);
}

// ���� ��� readMessage
TEST(SerialPortTests, ReadMessage_ValidHandle_ReadsMessage) {
    HANDLE hSerial = openSerialPort(L"COM1", CBR_9600);
    ASSERT_NE(hSerial, INVALID_HANDLE_VALUE); // ������������, �� ���� ��������

    // ��� ���������� ��� ������� ���� ����������� ����������� ����� �� �����,
    // ��� ��������������� ���-��'��� ��� ����������� ��������� �����.

    // ������ ������� �������
    String^ message = readMessage(hSerial);

    // ��������, �� �������� ����������� �� � ������
    EXPECT_FALSE(String::IsNullOrEmpty(message));

    CloseHandle(hSerial);
}

// ������� ������� ��� ������� �����
int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}


