// Staff.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Employee.h"
#include "Manager.h"
#include <vector>


int main ()
{
    int this_year = 2019;
    int compare_salary = 2000;
   
    //int soNV = 5;
    std::vector<Employee> staff;

    //Employee *staff = ( Employee *)malloc(soNV* sizeof( Employee ));

    staff.push_back ( Employee ( "Hoa", 1990, 1000, 1 ) );
    staff.push_back ( Employee ( "Thuy", 1991, 1500, 2 ) );
    staff.push_back ( Employee ( "An", 1996, 2500, 3 ) );
    staff.push_back ( Employee ( "Minh", 1993, 6000, 1 ) );
    staff.push_back ( Employee ( "Khuong", 1991, 8000, 1 ) );


    Manager boss;

    // search for Khuong and change salary
    for ( int n = 0; n < staff.size (); n++ )
    {
        if ( staff[n].Get_Name () == "Khuong" )
        {
            staff[n].change_Salary ( 1000 );
        }
    }


    //using for
    for ( int n = 0; n < staff.size (); n++ )
    {
        staff[n].sayHello ( this_year, compare_salary );
    }


    //function tinh tong luong
    double totalLuong = boss.totalSalary ( staff);
    std::cout<<"Total salary are: " << totalLuong;

    //boss.suggestBoss ( staff, 1,this_year, soNV);
    boss.callSuggest ( staff, 1, this_year);

  

    return 0;

}

