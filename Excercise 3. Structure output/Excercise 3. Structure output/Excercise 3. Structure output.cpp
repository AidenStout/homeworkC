// Excercise 3. Structure output.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>



struct Address
{
    std::string city;
    std::string street;
    int houseNumber;
    int flatNumber;
    int index;
};

void printAddress(const Address& addr);

int main()
{
    setlocale(LC_ALL, "Russian");
    Address person1;
    Address person2;

    person1.city = "Москва";
    person1.street = "Шаболовская";
    person1.houseNumber = 62;
    person1.flatNumber = 134;
    person1.index = 125130;

    person2.city = "Абакан";
    person2.street = "Ленина";
    person2.houseNumber = 32;
    person2.flatNumber = 112;
    person2.index = 456373;
    printAddress(person1);
    printAddress(person2);
    return 0;
}

void printAddress(const Address& addr)
{
    std::cout << "Город: " << addr.city << std::endl;
    std::cout << "Улица: " << addr.street << std::endl;
    std::cout << "Дом: " << addr.houseNumber << std::endl;
    std::cout << "Квартира: " << addr.flatNumber << std::endl;
    std::cout << "Индекс: " << addr.index << std::endl;
    std::cout << "_________________" << std::endl;
}


