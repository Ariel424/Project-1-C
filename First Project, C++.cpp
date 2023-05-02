#include <iostream>
#include <math.h>
#include<cmath>
#include<iomanip>
#include<ctime>
#include<string>
#include<fstream>

using namespace std;

void task1() //Task 1 - The program receives a sum of money and separates it into coins and bills

{
    cout << "enter sum money" << endl;
    int sum; //changes to the amount
    cin >> sum;// receiving an amount
    int help = sum;//An auxiliary variable that will hold the entered value
    int n100 = 0; //Changes to the number of 100 bills
    int n50 = 0;// Changes to the number of 50 bills
    int n20 = 0;// Changes to the number of 20 bills
    int n10 = 0;// Changes to the number of 10 bills
    int n5 = 0;//Changes to the number of 5 bills
    int n2 = 0;//Changes to the number of 2 bills
    if (sum / 100 != 0)
    {
        n100 += sum / 100;
        sum = sum % 100;
    }
    if (sum >= 50)
    {
        n50++;
        sum -= 50;
    }
    if (sum / 20 >= 0)
    {
        n20 = sum / 20;
        sum = sum % 20;
    }
    if (sum >= 10)
    {
        n10++;
        sum -= 10;
    }
    if (sum >= 5)
    {
        n5++;
        sum -= 5;
    }
    if (sum / 2 >= 0)
    {
        n2 = sum / 2;
        sum = sum % 2;
    }
    //In the variable into which the entered number can be at this stage of the program 1 or 0 so that it represents the shekel currency
    cout << help << " = 100*" << n100 << " + 50*" << n50 << " + 20*" << n20;
    cout << " + 10*" << n10 << " + 5*" << n5 << " + 2*" << n2 << " + 1*" << sum << " NIS" << endl;
    return;
}
void task2()//Task 2 - The program receives a character number of an invoice operation and another number and prints the invoice operation and its result
{
    cout << "Get a: " << endl;
    int a;//Output changes to the first number
    cin >> a;// Receiving a value for the first number
    cout << "Get operation: " << endl;
    char operation;//Creating a character type variable for an invoice operation
    cin >> operation;//Receipt of character for invoice operation
    cout << "Get b: " << endl;
    int b;//Creating a variable for the second number
    cin >> b;//Accepting a value for the second number
    if (operation == '+')
    {
        cout << a << operation << b << "=" << a + b;
    }
    else if (operation == '-')
    {
        cout << a << operation << b << "=" << a - b;
    }
    else if (operation == '*')
    {
        cout << a << operation << b << "=" << a * b;
    }
    else if (operation == '/')
    {
        cout << a << operation << b << "=" << (double)a / b;
    }
    else
    {
        cout << "error input" << endl;
    }
    return;
}
void task3()//Task 3 - The program receives an amount of money and prints the income tax that needs to be paid according to the tax bracket
{
    cout << "enter salary: " << endl;
    double salary;//Variable who will receive the salary
    cin >> salary;
    double tax = 0;//A variable in which the value of the tax that needs to be paid according to the amount of the salary is applied
    if (salary > 0 && salary <= 10000)
    {
        tax = salary * 0.1;
    }
    if (salary > 10000 && salary <= 20000)
    {
        tax = salary * 0.2;
    }
    if (salary > 20000 && salary <= 30000)
    {
        tax = salary * 0.3;
    }
    if (salary > 30000 && salary <= 40000)
    {
        tax = salary * 0.4;
    }
    if (salary > 50000)
    {
        tax = salary * 0.5;
    }
    cout << "incom tax for this salary: " << tax << endl;
    return;
}

void main()
{

    //Opening messages
    cout << "Matala_01 by Ariel Topaz\n\n";
    cout << "Choose opertion from the menu below\n\n";

    int opCod = 0;
    do
    {
        //menu
        cout << endl
            << "Menu:\n"
            << "0. for  exit\n"
            << "1. for change money\n"
            << "2. for calculator\n"
            << "3. for income tax\n"
            << "Enter your choice:\n";
        cin >> opCod; // Using functions to define the four exercises for convenience and using the menu
        switch (opCod)
        {
        case 1:
            task1();
            break;

        case 2:
            task2();
            break;

        case 3:
            task3();
            break;

        case 0:
            cout << "Exiting The Progtam, have a nice day." << endl << endl << endl << endl;//exit messeg
            break;

        default:
            cout << "Invloid opertion cod" << endl << endl;//eror messeg for invalid input
        }
    } while (opCod != 0);

    return;

}