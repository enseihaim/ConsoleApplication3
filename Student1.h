#pragma once
#include <string>

struct Date
{
    int day = 0;
    int month = 0;
    int year = 0;
};

class Student {
private:
    char* name;
    char* lastname;
    char* middlename;

    Date fdate;
    std::string phone;
    std::string city;
    std::string country;
    std::string university;
    std::string universityCity;
    std::string universityCountry;
    int group;

public:
    Student();
    ~Student();
    void setName(char* n);
    void setLastname(char* l);
    void setMiddlename(char* m);
    inline void printName();
    void inputStudent();
    void inputData();
    void printData() const;
};