#pragma once
#pragma once
#include <iostream>
#include <string>
#include<iomanip>
using namespace std;
class platform
{
private:
	string platformName;
	string platManufacturer;

public:
	platform(string name, string manufacturer, game* games)
	{
		platformName = name;
		platManufacturer = manufacturer;

	}
	string getName()
	{
		return platformName;
	}
	string getManufacturer()
	{
		return platManufacturer;
	}

};