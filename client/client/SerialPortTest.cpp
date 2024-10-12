#include <gtest/gtest.h>
#include <Windows.h>
#include "SerialPort.h"

// Тест для функції openSerialPort
TEST(SerialPortTests, OpenSerialPort_ValidPortName_ReturnsHandle) {
    HANDLE hSerial = openSerialPort(L"COM1", CBR_9600);
    EXPECT_NE(hSerial, INVALID_HANDLE_VALUE); // Перевіряємо, що хендл не є недійсним

    // Закриваємо серійний порт
    CloseHandle(hSerial);
}

TEST(SerialPortTests, OpenSerialPort_InvalidPortName_ReturnsInvalidHandle) {
    HANDLE hSerial = openSerialPort(L"COM99", CBR_9600); // COM99, ймовірно, недійсний
    EXPECT_EQ(hSerial, INVALID_HANDLE_VALUE); // Перевіряємо, що хендл є недійсним
}

// Тест для sendMessage
TEST(SerialPortTests, SendMessage_ValidHandle_SendsMessage) {
    HANDLE hSerial = openSerialPort(L"COM1", CBR_9600);
    ASSERT_NE(hSerial, INVALID_HANDLE_VALUE); // Переконуємось, що порт відкритий

    // Виклик функції відправки
    sendMessage(hSerial, "Hello, World!");

    // Додаткові перевірки могли б включати перевірку на реальний прийом даних,
    // але для цього потрібно буде налаштувати мок-об'єкт або тестове середовище.

    CloseHandle(hSerial);
}

// Тест для readMessage
TEST(SerialPortTests, ReadMessage_ValidHandle_ReadsMessage) {
    HANDLE hSerial = openSerialPort(L"COM1", CBR_9600);
    ASSERT_NE(hSerial, INVALID_HANDLE_VALUE); // Переконуємось, що порт відкритий

    // Для тестування вам потрібно буде налаштувати відправлення даних до порту,
    // або використовувати мок-об'єкт для моделювання отриманих даних.

    // Виклик функції читання
    String^ message = readMessage(hSerial);

    // Перевірка, що отримане повідомлення не є пустим
    EXPECT_FALSE(String::IsNullOrEmpty(message));

    CloseHandle(hSerial);
}

// Основна функція для запуску тестів
int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}


