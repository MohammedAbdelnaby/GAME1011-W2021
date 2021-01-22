#pragma once
#pragma once
#include <iostream>
#include <string>
#include<iomanip>

using namespace std;

class Achievement
{
private:
	string title;
	string description;
	int scoreValue;
public:
	Achievement(string titleA = "", string descriptionA = "", int score = 0)
	{
		title = titleA;
		description = descriptionA;
		scoreValue = score;
	}
	string getTitle()
	{
		return title;
	}
	string getDescription()
	{
		return description;
	}
	int getScore()
	{
		return scoreValue;
	}
	string setTitle(string titleA)
	{
		title = titleA;
	}
	string setDescription(string descriptionA)
	{
		description = descriptionA;
	}
	int setScoreValue(int score = 0)
	{
		scoreValue = score;
	}
};