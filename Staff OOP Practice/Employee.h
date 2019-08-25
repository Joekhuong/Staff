#pragma once
#include <string>


class Employee
{
public:
    Employee ( std::string set_name, int set_dob, float set_salary, int set_profession );
    ~Employee ();

    void sayHello ( int current_year, int range );

    float Get_Salary ();
    int Get_DOB ();
    int Get_Profession ();
    std::string Get_Name ();
    

    void change_Salary ( float foobar );


private:
    std::string name;
    int dob = 0;
    float salary = 0;
    int profession = 0;

    
};

