#pragma once
#pragma once
#include <iostream>
#include <string>
#include<iomanip>
#include "Achievements.h"
using namespace std;
class game
{
private:
	string gameName;
	string gamePublisher;
	string gameDeveloper;
	Achievement achievements[5];
	int counter = 0;
	int AmountAchievement = 5;
public:
	game(string name, string Publisher, string Developer)
	{
		gameName = name;
		gamePublisher = Publisher;
		gameDeveloper = Developer;
	}
	string getName()
	{
		return gameName;
	}
	string getPublisher()
	{
		return gamePublisher;
	}
	string getDeveloper()
	{
		return gameDeveloper;
	}
	void createAchievements(string t, string d, int s)
	{
		Achievement aaaa(t, d, s);
		if (counter <= 4)
		{
			achievements[counter] = aaaa;
			counter++;
		}
	}
	void getAchievement()
	{
		cout << gameName << "| Publisher: " << gamePublisher << "| Developer: " << gameDeveloper << endl << endl;
		for (int i = 0; i < counter; i++)
		{
			cout << "Title: " << achievements[i].getTitle() << endl << achievements[i].getDescription() << endl << "Score value: " << achievements[i].getScore() << endl << endl;
		}
	}
	void getAmountAchievement(int slot)
	{
		AmountAchievement = slot;
	}
};

