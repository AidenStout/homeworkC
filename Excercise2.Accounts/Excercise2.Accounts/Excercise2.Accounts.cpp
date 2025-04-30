

#include <iostream>
#include <string>

struct Account
{
    std::string name;
    int number;
    int ballance;
};

int main()
{
    setlocale(LC_ALL, "Russian");

    Account userAccount;
    std::cout << "Введите номер счёта:\n";
    std::cin >> userAccount.number;
    std::cout << "Введите имя владельца:\n";
    std::cin >> userAccount.name;
    std::cout << "Введите новый баланс:\n";
    std::cin >> userAccount.ballance;
    std::cout << "Ваш счёт: " << userAccount.name << "," << userAccount.number << "," << userAccount.ballance << std::endl;

    return 0;

}

