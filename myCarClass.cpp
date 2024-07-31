#include<iostream>
using namespace std;

class myCar {
protected:
	string Name;
	string Model;
	string Color;
	int Weight;

public:
	myCar(string prmName, string prmModel, string prmColor, int prmWeight)
	{
		Name = prmName;
		Model = prmModel;
		Color = prmColor;
		Weight = prmWeight;
	}

	myCar() {	}

#pragma region Getters And Setters for the Feilds
	void setName(string prmName)
	{
		Name = prmName;
	}
	string getName() {
		return Name;
	}

	void setModel(string prmModel)
	{
		Model = prmModel;
	}
	string getModel() {
		return Model;
	}

	void setColor(string prmColor)
	{
		Color = prmColor;
	}
	string getColor() {
		return Color;
	}

	void setWeight(int prmWeight)
	{
		Weight = prmWeight;
	}
	int getWeight() {
		return Weight;
	}

#pragma endregion


	virtual void PrintDetails() const
	{
		cout << "Car Details: \n";
		cout << "\tName: " << Name << endl;
		cout << "\tModel: " << Model << endl;
		cout << "\tColor: " << Color << endl;
		cout << "\tWeight: " << Weight << endl;
	}

	void Drive()
	{
		cout << "Car in Moving";
	}
};

class ElectricCar : public myCar
{
protected:
	int BattryCharge;


public:
	ElectricCar(string prmName, string prmModel, string prmColor, int prmWeight, int prmCharge)
	{
		Name = prmName;
		Model = prmModel;
		Color = prmColor;
		Weight = prmWeight;
		BattryCharge = prmCharge;
	}

	void PrintDetails() const override {
		myCar::PrintDetails();
		cout << "\tBattery Charge: " << BattryCharge << "%" << endl;
	}
};

class GassCar : public myCar
{
protected:
	int FeulStauts;


public:
	GassCar(string prmName, string prmModel, string prmColor, int prmWeight, int prmCharge)
	{
		Name = prmName;
		Model = prmModel;
		Color = prmColor;
		Weight = prmWeight;
		FeulStauts = prmCharge;
	}

	void PrintDetails() const override {
		myCar::PrintDetails();
		cout << "\tFuel Sattus: " << FeulStauts << "liter" << endl;
	}
};