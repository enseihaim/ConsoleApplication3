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
    cout << "������ ���� ���������� (���� ����� ��): ";
    cin >> fdate.day >> fdate.month >> fdate.year;

    cout << "������ ���������� �������: ";
    getline(cin, phone);

    cout << "������ ���� ����������: ";
    getline(cin, city);

    cout << "������ ����� ����������: ";
    getline(cin, country);

    cout << "������ ����� ����������� �������: ";
    getline(cin, university);

    cout << "������ ���� ����������� �������: ";
    getline(cin, universityCity);

    cout << "������ ����� ����������� �������: ";
    getline(cin, universityCountry);

    cout << "������ ����� �����: ";
    cin >> group;
}

void Student::printData() const {
    cout << "��� ��������" << endl;
    cout << "���� ����������: " << fdate.day << "." << fdate.month << "." << fdate.year << endl;
    cout << "�������: " << phone << endl;
    cout << "̳���: " << city << endl;
    cout << "�����: " << country << endl;
    cout << "����������: " << university << endl;
    cout << "̳��� �����������: " << universityCity << endl;
    cout << "����� �����������: " << universityCountry << endl;
    cout << "�����: " << group << endl;
};
