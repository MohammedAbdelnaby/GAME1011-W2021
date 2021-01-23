#include <iostream>
#include <string>
#include "Achievements.h"
#include "Games.h"
#include "Platforms.h"
using namespace std;
void menuPlatform(platform* platform);
void menuGame(game* game, platform* platforms, int slot);
void achievementsMenu(game* games, platform* platforms, int userInput);
int main()
{
	game pcGames[4] = { game("league of legends","Riot games","Riot games"), game("factorio","Wube Software","Wube Software"), game("genshin impact","miHoYo","miHoYo"),game("Rocket League","Psyonix","Panic Button Games") };
	game ps5Games[4] = { game("Demon's Souls","FromSoftware","Atlus, Sony"), game("Last Of Us","Sony","Naughty Dog"), game("Spider-Man","Sony","Insomniac Games"),game("Uncharted","Sony","Naughty Dog") };
	game xboxGames[4] = { game("Halo","Xbox Game Studios"," Bungie Inc"), game("Gears of wars","Xbox Game Studios","Epic Games"), game("Sea of Thieves","Xbox Game Studios","Rare"),game("Forza Horizon","Xbox Game Studios","Turn 10 Studios") };
	game switchGames[4] = { game("Super Smash Bros","Nintendo","Nintendo"), game("Super Mario Odyssey","Nintendo","Nintendo"), game("The Legend of Zelda","Nintendo","Nintendo"),game("splatoon 2"," Nintendo"," Nintendo") };
	platform platforms[4] = { platform("PC","N/A",pcGames),platform("PS5","Sony",ps5Games),platform("XBOX","Microsoft",xboxGames), platform("Switch","Nintendo",switchGames) };
	int userinput = 2;
	while (userinput == 2)
	{
		system("CLS");
		cout << "choose one of the platform of your choosing:" << endl;
		menuPlatform(platforms);
		cin >> userinput;
		system("CLS");
		switch (userinput)
		{
		case 1:
			achievementsMenu(pcGames, platforms, userinput);
			cout << "Want to quit?" << endl << "1) yes\n2) no" << endl;
			cin >> userinput;
			break;
		case 2:
			achievementsMenu(ps5Games, platforms, userinput);
			cout << "Want to quit?" << endl << "1) yes\n2) no" << endl;
			cin >> userinput;
			break;
		case 3:
			achievementsMenu(xboxGames, platforms, userinput);
			cout << "Want to quit?" << endl << "1) yes\n2) no" << endl;
			cin >> userinput;
			break;
		case 4:
			achievementsMenu(switchGames, platforms, userinput);
			cout << "Want to quit?" << endl << "1) yes\n2) no" << endl;
			cin >> userinput;
			break;
		default:
			break;
		}
	}
	return 0;
}
void menuPlatform(platform* platform)
{
	for (int i = 0; i < 4; i++)
	{
		cout << i + 1 << ")" << platform[i].getName() << endl;
	}
}
void menuGame(game* game, platform* platforms, int slot)
{
	cout << platforms[slot].getName() << " Manufacturer: " << platforms[slot].getManufacturer() << endl << endl;
	for (int i = 0; i < 4; i++)
	{
		cout << i + 1 << ")" << game[i].getName() << endl;
	}
}
void achievementsMenu(game* games, platform* platforms, int userInput)
{
	string title;
	string description;
	int score;
	string a;
	menuGame(games, platforms, userInput - 1);
	cin >> userInput;
	system("CLS");
	cout << "Title: ";
	getline(cin, a);
	getline(cin, title);
	cout << "description: ";
	getline(cin, description);
	cout << "Score value: ";
	cin >> score;
	system("CLS");
	games[userInput - 1].createAchievements(title, description, score);
	games[userInput - 1].getAchievement();
}
