#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "FStocker.h"
#include "Companies.h"

// Creates Game
FStocker stkGame;
Companies cmpInfo;

// Enums
enum Difficulty { Null, Easy, Medium, Hard };
enum MMScrnStatus { MMenu, Instructions };
enum CMPScrnStatus { CmpList, CompScrn };
enum CompNames { Google, CheezyPizza, SkskWater, SchruteFarms, DynamicDuoDev, BluthCompany };

// Function Prototyping
void MainMenu();
void PlayGame(int Difficulty);
void SimDay();
void Ending();
bool AskToPlayAgain();

int main()
{
	bool bPlayAgain = false; // Creates Gameplay loop
	do
	{
		MainMenu();
		if (stkGame.GetDifficulty() == Difficulty::Null) { break; };
		PlayGame(stkGame.GetDifficulty());
		Ending();
		bPlayAgain = AskToPlayAgain();
	} while (bPlayAgain);
}

void MainMenu()
{
	int MMStatus = MMScrnStatus::MMenu;
	int UserInpt;
	bool bMenuPass = false;

	stkGame.PrintMainMenu();

	do
	{
		std::cout << " > ";
		std::cin >> UserInpt;

		if (MMStatus == MMScrnStatus::MMenu)
		{
			UserInpt = stkGame.navCheckValidInput(UserInpt, 5);
			switch (UserInpt)
			{
			case 1:
				stkGame.SetDifficulty(Difficulty::Easy);
				stkGame.SetMoney(200);
				bMenuPass = true;
				break;
			case 2:
				stkGame.SetDifficulty(Difficulty::Medium);
				stkGame.SetMoney(100);
				bMenuPass = true;
				break;
			case 3:
				stkGame.SetDifficulty(Difficulty::Hard);
				stkGame.SetMoney(50);
				bMenuPass = true;
				break;
			case 4:
				MMStatus = MMScrnStatus::Instructions;
				stkGame.PrintInstructions();
				break;
			case 5:
				stkGame.SetDifficulty(Difficulty::Null);
				bMenuPass = true;
				break;
			default:
				stkGame.SetDifficulty(Difficulty::Null);
			}
			
		}
		else if (MMStatus == MMScrnStatus::Instructions)
		{
			UserInpt = stkGame.navCheckValidInput(UserInpt, 2);
			switch (UserInpt)
			{
			case 1:
				stkGame.PrintMainMenu();
				MMStatus = MMScrnStatus::MMenu;
				break;
			case 2:
				stkGame.SetDifficulty(Difficulty::Null);
				bMenuPass = true;
				break;
			}
		}
		else
		{
			std::cout << "\n\nERROR: Please close the game ad restart!\n";
		}

	} while (!bMenuPass);

}

void PlayGame(int Difficulty)
{
	cmpInfo.ResetShareCosts();
	int cmpMenuStatus = CMPScrnStatus::CmpList;
	int cmpSelection;
	int cmpViewing;
	int cmpProfSelection;
	int shares;
	bool cmpMenuPass;
	for (stkGame.SetDay(1); stkGame.GetDay() <= stkGame.GetMaxDay(); stkGame.AddDay())
	{
		cmpMenuPass = false;
		
		do
		{
			if (cmpMenuStatus == CMPScrnStatus::CmpList)
			{
				stkGame.PrintCompanyList();
				std::cout << " > ";
				std::cin >> cmpSelection;
				cmpSelection = stkGame.navCheckValidInput(cmpSelection, 7);

				switch(cmpSelection)
				{
				case 1:
					cmpMenuStatus = CMPScrnStatus::CompScrn;
					cmpViewing = CompNames::Google;
					break;
				case 2:
					cmpMenuStatus = CMPScrnStatus::CompScrn;
					cmpViewing = CompNames::CheezyPizza;
					break;
				case 3:
					cmpMenuStatus = CMPScrnStatus::CompScrn;
					cmpViewing = CompNames::SkskWater;
					break;
				case 4:
					cmpMenuStatus = CMPScrnStatus::CompScrn;
					cmpViewing = CompNames::SchruteFarms;
					break;
				case 5:
					cmpMenuStatus = CMPScrnStatus::CompScrn;
					cmpViewing = CompNames::DynamicDuoDev;
					break;
				case 6:
					cmpMenuStatus = CMPScrnStatus::CompScrn;
					cmpViewing = CompNames::BluthCompany;
					break;
				case 7:
					cmpMenuPass = true;
				}
			}
			else if (cmpMenuStatus == CMPScrnStatus::CompScrn)
			{
				cmpInfo.PrintCmpProfile(cmpViewing);
				std::cout << " > ";
				std::cin >> cmpProfSelection;
				cmpProfSelection = stkGame.navCheckValidInput(cmpProfSelection, 3);

				switch (cmpProfSelection)
				{
				case 1:
					std::cout << " How many shares would you like to buy?\n" << " > ";
					std::cin >> shares;
					if (cmpInfo.canBuyShares(cmpViewing, shares, stkGame.GetMoney())) { 
						stkGame.SubMoney(cmpInfo.buyShares(cmpViewing, shares, stkGame.GetMoney())); 
						std::cout << "\n Successfully purchased " << shares << " shares.";
					}
					else { std::cout << "\n You do not have enough money to buy those shares!\n\n"; }
					break;
				case 2:
					std::cout << " How many shares would you like to sell?\n" << " > ";
					std::cin >> shares;
					if (cmpInfo.canSellShares(cmpViewing, shares, stkGame.GetMoney())) { 
						stkGame.AddMoney(cmpInfo.sellShares(cmpViewing, shares, stkGame.GetMoney()));
						std::cout << "\n Successfully sold " << shares << " shares."; 
					}
					else { std::cout << "\n You do not have enough shares to sell!"; }
					break;
				case 3:
					cmpMenuStatus = CMPScrnStatus::CmpList;
					break;
				}
			}
		} while (!cmpMenuPass);

		SimDay();

	}



}

void SimDay()
{
	int dayTrend[6];
	srand(time(0));
	for (int t = 0; t < 6; t++)
	{
		dayTrend[t] = (rand() % 100);

		if (dayTrend[t] != 0 && cmpInfo.getShareCost(t) != 0)
		{
			cmpInfo.addTenDayTrend(t, dayTrend[t] - cmpInfo.getReliability(t));
		}
		else
		{
			cmpInfo.addTenDayTrend(t, -100);
		}
	}
	cmpInfo.PrintDailyReport();
	cmpInfo.changeDailyShares();

}

void Ending()
{
	stkGame.AddMoney(cmpInfo.getTotalShareCost());
	std::cout << " =================================================\n";
	std::cout << " ||               Congratulations!              ||\n";
	std::cout << " =================================================\n";
	std::cout << "    You have completed your 20 days of investing  \n";
	std::cout << "    Over this time you have accumulated a total \n";
	std::cout << "    of: $" << stkGame.GetMoney() << "\n";
	std::cout << " ||---------------------------------------------||\n";
}

bool AskToPlayAgain()
{
	int inptPlayAgain;
	std::cout << "            Would You like to play again? \n";
	std::cout << "                 1: Yes     2: No \n";
	std::cout << " > ";
	std::cin >> inptPlayAgain;
	if (inptPlayAgain == 1)
	{
		std::cout << "\n\n";
		return true;
	}
	else
	{
		std::cout << "\n\n";
		return false;
	}
}