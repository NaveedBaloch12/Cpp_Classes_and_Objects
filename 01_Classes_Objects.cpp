// 01_Classes_Objects.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "myCarClass.cpp"
#include "Employee.cpp"
using namespace std;

int main()
{
    myCar Car1 = myCar("Honda", "2022", "White", 156);
    Car1.PrintDetails();
    cout << endl;

    myCar* Car2 = new ElectricCar("Tesla", "2024", "White", 2500, 80);
    Car2->PrintDetails();
    delete Car2;
    cout << endl;


    myCar* Car3 = new GassCar("Tesla", "2024", "White", 2500, 30);
    Car3->PrintDetails();
    delete Car3;
    cout << endl;


    Employee Emp1 = Employee(1122343, "Naveed Hassan", "IT Dept", 19, 90000);
    Emp1.IntroduceEmployee();
    Emp1.GivePromotion();
    cout << endl;

    Employee Emp2 = Employee(1122342, "Muhammed Fazil", "HR Dept", 35, 80000);
    Emp2.IntroduceEmployee();
    Emp2.GivePromotion();


    return 0;
}

