#include <iostream>
#include <cstring> 
#include <string> 
#include <Windows.h>
using namespace std;

struct Date
{
    int day;
    int month;
    int year;
};

class Student {
    char* name = nullptr;
    char* lastname = nullptr;
    char* middlename = nullptr;

    Date fdate;               
    string phone;            
    string city;              
    string country;           
    string university;        
    string universityCity;    
    string universityCountry; 
    int group;                

public:
    void setName(char* n)
    {
        if (name)
            delete[] name;
        name = new char[strlen(n) + 1];
        strcpy_s(name, strlen(n) + 1, n);
    }
    
    void setLastname(char* l)
    {
        if (lastname)
            delete[] lastname;
        lastname = new char[strlen(l) + 1];
        strcpy_s(lastname, strlen(l) + 1, l);
    }
    
    void setMiddlename(char* m)
    {
        if (middlename)
            delete[] middlename;
        middlename = new char[strlen(m) + 1];
        strcpy_s(middlename, strlen(m) + 1, m);
    }

    void inputStudent() {
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
    void printName();
    
    void inputData() {
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

    void printData() {
        cout << "Дані студента" << endl;
        cout << "Дата народження: " << fdate.day << "." << fdate.month << "." << fdate.year << endl;
        cout << "Телефон: " << phone << endl;
        cout << "Місто: " << city << endl;
        cout << "Країна: " << country << endl;
        cout << "Університет: " << university << endl;
        cout << "Місто університету: " << universityCity << endl;
        cout << "Країна університету: " << universityCountry << endl;
        cout << "Група: " << group << endl;
    }
};





void Student::printName()
{
    cout << "Name: " << name << endl;
    cout << "lName: " << lastname << endl;
    cout << "mName: " << middlename << endl;
}


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Ukrainian");
    Student s;
    s.inputStudent();         
    s.printName();
    s.inputData();
    s.printData();
};
