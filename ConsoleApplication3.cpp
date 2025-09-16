#include "Student1.h"
#include <iostream>
#include <cstring>
#include <limits>
using namespace std;

Student::Student() : name(nullptr), lastname(nullptr), middlename(nullptr), group(0) {}

Student::~Student() {
    delete[] name;
    delete[] lastname;
    delete[] middlename;
}

inline void Student::setName(char* n)
{
    if (name)
        delete[] name;
    name = new char[strlen(n) + 1];
    strcpy_s(name, strlen(n) + 1, n);
}

void Student::setLastname(char* l)
{
    if (lastname)
        delete[] lastname;
    lastname = new char[strlen(l) + 1];
    strcpy_s(lastname, strlen(l) + 1, l);
}

void Student::setMiddlename(char* m)
{
    if (middlename)
        delete[] middlename;
    middlename = new char[strlen(m) + 1];
    strcpy_s(middlename, strlen(m) + 1, m);
}

//void Student::printName()
//{
//    cout << "Name: " << name << endl;
//    cout << "lName: " << lastname << endl;
//    cout << "mName: " << middlename << endl;
//}

void Student::inputStudent() {
    char temp[100];
    cout << "Enter name: ";
    cin.getline(temp, 100);
    setName(temp);

    cout << "Enter lastname: ";
    cin.getline(temp, 100);
    setLastname(temp);

    cout << "Enter middlename: ";
    cin.getline(temp, 100);
    setMiddlename(temp);
}

void Student::inputData() {
    cout << "Введіть дату народження (день місяць рік): ";
    cin >> fdate.day >> fdate.month >> fdate.year;

    cout << "Введіть контактний телефон: ";
    getline(cin, phone);

    cout << "Введіть місто проживання: ";
    getline(cin, city);

    cout << "Введіть країну проживання: ";
    getline(cin, country);

    cout << "Введіть назву навчального закладу: ";
    getline(cin, university);

    cout << "Введіть місто навчального закладу: ";
    getline(cin, universityCity);

    cout << "Введіть країну навчального закладу: ";
    getline(cin, universityCountry);

    cout << "Введіть номер групи: ";
    cin >> group;
}

void Student::printData() const {
    cout << "Дані студента" << endl;
    cout << "Дата народження: " << fdate.day << "." << fdate.month << "." << fdate.year << endl;
    cout << "Телефон: " << phone << endl;
    cout << "Місто: " << city << endl;
    cout << "Країна: " << country << endl;
    cout << "Університет: " << university << endl;
    cout << "Місто університету: " << universityCity << endl;
    cout << "Країна університету: " << universityCountry << endl;
    cout << "Група: " << group << endl;
};
