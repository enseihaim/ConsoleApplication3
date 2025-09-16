#include <iostream>
#include <Windows.h>
#include "Student1.h"
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Ukrainian");
    Student s;
    s.inputStudent();
    /*s.printName();*/
    s.inputData();
    s.printData();
}