// PrimeNumberGenerator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Test Commit

#include <iostream>
#include <fstream>
using namespace std;


int main()
{
    int low, high, i, flag;

    cout << "Enter two numbers(intervals): ";
    cin >> low >> high;

    ofstream myfile("C:\\MyWorkspace\\Temp\\Prime_Number_Generator.txt");

    if (myfile.is_open())
    {
        myfile << "Prime numbers between " << low << " and " << high << " are: \n";
        while (low < high)
        {
            flag = 0;

            for (i = 2; i <= low / 2; ++i)
            {
                if (low % i == 0)
                {
                    flag = 1;
                    break;
                }
            }

            if (flag == 0)
                myfile << low << " ";

            ++low;
        }

        myfile << "\nPress x to exit the file. \n";
        myfile.close();
    }
    else cout << "Unable to open file";





    return 0;
}