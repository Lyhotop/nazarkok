#pragma once
#include <windows.h>
#include <iostream>
#include <string>
#include <msclr/marshal_cppstd.h>

using namespace System;
using namespace System::Windows::Forms;
using namespace msclr::interop;

HANDLE openSerialPort(const std::wstring& portName, DWORD baudRate);

void sendMessage(HANDLE hSerial, String^ message);

String^ readMessage(HANDLE hSerial);