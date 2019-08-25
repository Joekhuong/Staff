#include "pch.h"
#include "Employee.h"
#include <cstdio>
#include <iostream>



Employee::Employee ( std::string set_name, int set_dob, float set_salary, int set_profession )
{
    name = set_name;
    dob = set_dob;
    salary = set_salary;
    profession = set_profession;

}


Employee::~Employee ()
{
}

void Employee::sayHello ( int current_year, int range )
{
    std::cout <<"Hi Sir, I am " << name << std::endl; //Tell name

    //Tell age
    if ( dob < current_year )
    {
        int age = current_year - dob;
        std::cout<<"My age is: " << age << std::endl;
    }
    //in case error
    else
    {
        std::cout << "Year of Birth has to be less than the current year." << std::endl;
    }

    //compare salary

    if ( salary > range )
    {
        std::cout << "My salary is higher than  " << range << std::endl;
    }
    else
    {
        std::cout << "My salary is lower than  " << range << std::endl;
    }

    /*
    //tell job

    if ( profession == 1 )
    {
        printf ( "\nMy Job is IT" );
    }
    else if ( profession == 2 )
    {
        printf ( "\nMy Job is foreign language" );
    }
    else if ( profession == 3 )
    {
        printf ( "\nMy Job is sale" );
    }
    else
    {
        printf ( "\nThe job title is not available" );
    }
    */

    //try with switch
    switch ( profession )
    {
        case 1:
            std::cout << "My Job is IT" << std::endl;
            break;
        case 2:
            std::cout << "My Job is foreign language" << std::endl;
            break;
        case 3:
            std::cout << "My Job is sale" << std::endl;
            break;
        default:
            std::cout << "I still not have a job title !" << std::endl;
            break;
    }

}

//Bien thanh vien la private nen phai dung ham nay de get ve
float Employee::Get_Salary () 
{
    return salary;
}

void Employee::change_Salary ( float foobar )
{
    salary = foobar; //how it knows whose salary will change????
}

int Employee::Get_DOB ()
{
    return dob;
}


int Employee::Get_Profession ()
{
    return profession;
}

std::string Employee::Get_Name ()
{
    return name;
}

