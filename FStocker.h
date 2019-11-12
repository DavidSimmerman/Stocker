#pragma once
#include <iostream>
class FStocker
{
public:
	void PrintMainMenu();
	void PrintInstructions();
	void PrintCompanyList();
	bool isGameLost();
	int navCheckValidInput(int inpt, int opts);
	
	// Getters and Setters
		//Difficulty
	void SetDifficulty(int diff);
	int GetDifficulty();
		//Days
	void SetDay(int NewDay);
	void AddDay();
	int GetDay();
	int GetMaxDay();
		//Money
	void SetMoney(float money);
	void AddMoney(float black);
	void SubMoney(float red);
	float GetMoney();
		//Total Shares
	void SetTotalShares(int shares);
	void AddTotalShares(int addts = 1);
	int GetTotalShares();

private:
	int difficulty;
	int money;
	int totalShares;
	int day;
	int const MAX_DAYS = 20;

};

