

#include <iostream>
#include <string>
#include <Windows.h>
class Counter {
private:
    double num1;

public:

    Counter(double set_calc = 1) : num1{ set_calc } {}
    double add() { return num1++; };
    double subtract() { return num1--; };
    void get_num() { std::cout << num1 << std::endl; };
};

void Countercount(Counter count) {
    std::string input;
    std::string comand;
    do {
        std::cout << "Введите команду ('+', '-', '=' или 'x' для выхода): " << std::endl;
        std::cin >> comand;
        if (comand == "+") {
            count.add();
        }
        else if (comand == "-") {
            count.subtract();
        }
        else if (comand == "=") {
            count.get_num();
        }
    } while (comand != "x" && comand != "х");

    std::cout << "До свидания! " << std::endl;
}


int main(int argc, char** argv) {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::string input;
    std::string input_value;
    Counter calc_one;
    std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: " << std::endl;
    std::cin >> input;
    if (input == "да" || input == "ДА" || input == "Да" || input == "дА") {
        double input_value;
        std::cout << "Введите начальное значение счётчика: " << std::endl;
        std::cin >> input_value;
        Counter set_calc(input_value);
        Countercount(set_calc);
    }
    else if (input == "нет" || input == "Нет" || input == "НЕТ" ||
        input == "НеТ" || input == "неТ" || input == "нЕт") {
        Counter calc_one;
        Countercount(calc_one);
    }
    else
        std::cout << "Неверный ввод" << std::endl;

}
