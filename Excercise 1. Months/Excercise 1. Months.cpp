// Excercise 1. Months.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>


enum class seasons 
{
    Январь = 1,
    Февраль,
    Март,
    Апрель,
    Май,
    Июнь,
    Июль,
    Август,
    Сентябрь,
    Октябрь,
    Ноябрь,
    Декабрь
};
int main()
{
    setlocale(LC_ALL, "Russian");
    int monNum;

    do
    {
        // Запрос номера месяца
        std::cout << "Введите номер месяца: ";
        std::cin >> monNum;

        // Обработка ввода (switch-case)
        switch (static_cast<seasons>(monNum))
        {
        case seasons::Январь:    std::cout << "Январь\n"; break;
        case seasons::Февраль:   std::cout << "Февраль\n"; break;
        case seasons::Март:      std::cout << "Март\n"; break;
        case seasons::Апрель:    std::cout << "Апрель\n"; break;
        case seasons::Май:      std::cout << "Май\n"; break;
        case seasons::Июнь:      std::cout << "Июнь\n"; break;
        case seasons::Июль:     std::cout << "Июль\n"; break;
        case seasons::Август:    std::cout << "Август\n"; break;
        case seasons::Сентябрь: std::cout << "Сентябрь\n"; break;
        case seasons::Октябрь:   std::cout << "Октябрь\n"; break;
        case seasons::Ноябрь:    std::cout << "Ноябрь\n"; break;
        case seasons::Декабрь:   std::cout << "Декабрь\n"; break;
        default:
            if (monNum != 0)
            {
                std::cout << "Неправильный номер!\n";
            }

            break;
        }
    } while (monNum != 0);
    {
        std::cout << "До свидания!\n";
    }
}
    
