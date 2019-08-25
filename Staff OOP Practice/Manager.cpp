#include "pch.h"
#include <string>
#include "Manager.h"
#include <cstdio>
#include <vector>
#include <iostream>


Manager::Manager ()
{
}


Manager::~Manager ()
{
}

double Manager::totalSalary ( std::vector<Employee> &nv ) //reference &nv
{
    double sum = 0;
    for ( int i = 0; i < nv.size(); i++ )
    {
        sum = sum + nv[i].Get_Salary ();
    }

    return sum;
}

//recommand somebody´to be a new boss
void Manager::callSuggest ( std::vector<Employee> &nv, int prefer_job, int current_year)
{
    suggestBoss ( nv, prefer_job, current_year);
}


    void Manager::suggestBoss ( std::vector<Employee> &nv, int prefer_job, int current_year)
    {
        //int ages[soNV];
        // Dynamic allocate memory
        int *ages = ( int* ) malloc ( nv.size() * sizeof ( int ) );
        int *choose = ( int* ) malloc ( nv.size() * sizeof ( int ) );
        int maxAge = 0;
        int positionMax = 0;

        //tim tuoi cua nhan vien

        for ( int i = 0; i < nv.size(); i++ )
        {
            ages[i] = current_year - nv[i].Get_DOB ();
        }

        //tim chuyen mon cua nhan vien 
        for ( int j = 0; j < nv.size(); j++ )
        {
            if ( nv[j].Get_Profession () == prefer_job )
            {
                choose[j] = 1;
            }
            else
            {
                choose[j] = 0;
            }
        }

        // Matching ages and choose to find the best candidate
        for ( int k = 0; k < nv.size(); k++ )
        {

            if ( choose[k] == 1 )
            {
                if ( ages[k] > maxAge )
                {
                    maxAge = ages[k];
                    positionMax = k;
                }
            }
        }

        // Display information of the best boss candidate
        std::cout<<"Ung Vien Phu Hop la " << nv[positionMax].Get_Name()<<" tuoi " << ages[positionMax] ; //get_Name() returns a string but printf just accepts a character, so we need to add c_str()


        // delete memory of variables
        free ( ages );
        free ( choose );
    }
