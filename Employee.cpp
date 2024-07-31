#include<iostream>
using namespace std;

class IEmployee {
	virtual void GivePromotion() = 0;
};

class Employee: IEmployee {
private:
	int ID;
	string Name;
	string Department;
	int Age;
	int Sallary;


public:
	Employee(int prmId, string prmName, string prmDepartment, int prmAge, int prmSallary)
	{
		ID = prmId;
		Name = prmName;
		Department = prmDepartment;
		Age = prmAge;
		Sallary = prmSallary;
	}

	//~Employee(){
	//	cout << "Destructor is Called";
	//}

	void IntroduceEmployee() const
	{
		cout << "Employee ID:   " << ID << endl;
		cout << "Employee Name: " << Name << endl;
		cout << "Department:    " << Department << endl;
		cout << "Employee Age:  " << Age << endl;
		cout << "Sallary Given: " << Sallary << endl;
	}

	void GivePromotion() {
		if (Age > 30)
		{
			cout << Name << " Got Promotion";
		}
		else {
			cout << Name << ", No Promotion yet";
		}
		cout << endl;
	}
};