#pragma once
#include <string>
#include "Employee.h"

#include <vector>

class Manager
{
public:
    Manager ();
    ~Manager ();
    

    double totalSalary ( std::vector<Employee> &nv); 
    void callSuggest ( std::vector<Employee> &nv, int prefer_job, int current_year );

private:
    
    char name[30];
    int dob = 0;
    float salary = 0;
    int profession = 0;
    int bossYear;

    void suggestBoss ( std::vector<Employee> &nv, int prefer_job, int current_year);

};

