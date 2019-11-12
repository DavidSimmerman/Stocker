#include "FStocker.h"

void FStocker::PrintMainMenu()
{
	std::cout << " =================================================\n";
	std::cout << " ||            Hello and Welcome To:            ||\n";
	std::cout << " ||                   Stocker!                  ||\n";
	std::cout << " ||---------------------------------------------||\n";
	std::cout << " || Please enter a the number of your selection ||\n";
	std::cout << " ||             And then hit enter              ||\n";
	std::cout << " ||                                             ||\n";
	std::cout << " ||            1:Easy 2:Medium 3:Hard           ||\n";
	std::cout << " ||           4:Instructions  5:Quit            ||\n";
	std::cout << " ||                                             ||\n";
	std::cout << " ||                      made by David Simmerman||\n";
	std::cout << " =================================================\n";
}

void FStocker::PrintInstructions()
{
	std::cout << " =================================================\n";
	std::cout << " ||                Instructions:                ||\n";
	std::cout << " ||---------------------------------------------||\n";
	std::cout << " ||  At the beginning of the game you are given ||\n";
	std::cout << " || a certain ammount of money depending on your||\n";
	std::cout << " || desired difficulty. You have 20 days to buy ||\n";
	std::cout << " || and sell stocks. Their prices will fluctuate||\n";
	std::cout << " || each day, so buy low and sell high! Your    ||\n";
	std::cout << " || goal is to have the most money at the end of||\n";
	std::cout << " || the 20 days. Good luck and happy investing! ||\n";
	std::cout << " ||---------------------------------------------||\n";
	std::cout << " ||             1: Menu     2: Quit             ||\n";
	std::cout << " =================================================\n";
}

void FStocker::PrintCompanyList()
{
	std::cout << "\n =================================================\n";
	std::cout << " Day: " << day << " Money: $" << GetMoney() << std::endl;
	std::cout << " -------------------------------------------------\n";
	std::cout << "      Type the number of the company you want     \n";
	std::cout << "      1: Google             2: Cheezy Pizza\n";
	std::cout << "      3: Sksk Water         4: Schrute Farms\n";
	std::cout << "      5: Dynamic Duo Dev    6: Bluth Company\n";
	std::cout << "\n";
	std::cout << "            7: Go to next day\n";
	std::cout << " =================================================\n";
}

bool FStocker::isGameLost()
{
	if (money == 0 && totalShares == 0) { return true; }
	else { return false; }
}

int FStocker::navCheckValidInput(int inpt, int opts)
{
	bool pass = false;

	while (!pass)
	{
		if (0 < inpt && inpt <= opts)
		{
			pass = true;
		}
		else
		{
			std::cout << " That is not a valid input!\n";
			std::cout << " Please try again\n >";
			std::cin >> inpt;
		}
	}

	return inpt;
}

// Difficulty ----------------------------------------------------------
void FStocker::SetDifficulty(int diff) { difficulty = diff; }
int FStocker::GetDifficulty(){	return difficulty;}
// ---------------------------------------------------------------------

// Day -----------------------------------------------------------------
void FStocker::SetDay(int NewDay) { day = NewDay; }
void FStocker::AddDay() { day++; }
int FStocker::GetDay() { return day; }
int FStocker::GetMaxDay() { return MAX_DAYS; }
// ---------------------------------------------------------------------

// Money ---------------------------------------------------------------
void FStocker::SetMoney(float NewMoney) { money = (NewMoney * 100); }
void FStocker::AddMoney(float black) { money += black*100; }
void FStocker::SubMoney(float red) { money -= red*100; }
float FStocker::GetMoney() { return float(money) / 100; }
// ---------------------------------------------------------------------

// Shares --------------------------------------------------------------
void FStocker::SetTotalShares(int shares) { totalShares = shares; }
void FStocker::AddTotalShares(int addts) { totalShares += addts; }
int FStocker::GetTotalShares() { return totalShares; }
// ---------------------------------------------------------------------
