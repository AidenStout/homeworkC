

#include <iostream>
#include <string>

struct Account
{
    std::string name;
    int number;
    double balance;
};

void changeBalance(Account& account, double newBalance);

int main()
{
    setlocale(LC_ALL, "Russian");

    Account userAccount;
    std::cout << "Введите номер счёта:\n";
    std::cin >> userAccount.number;
    std::cout << "Введите имя владельца:\n";
    std::cin >> userAccount.name;
    std::cout << "Введите баланс:\n";
    std::cin >> userAccount.balance;

    double newBalance;
    std::cout << "Введите новый баланс:\n";
    std::cin >> newBalance;

    changeBalance(userAccount, newBalance);

    std::cout << "Ваш счёт: " << userAccount.name << "," << userAccount.number << "," << userAccount.balance << std::endl;

    return 0;

}

void changeBalance(Account& account, double newBalance)
{
    account.balance = newBalance;
}