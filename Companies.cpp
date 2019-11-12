#include "Companies.h"

enum CompNames { Google, CheezyPizza, SkskWater, SchruteFarms, DynamicDuoDev, BluthCompany };

void Companies::PrintCmpProfile(int cmp)
{
	int TrendPlusOne;
	switch (cmp)
	{
	case CompNames::Google:
		std::cout << "\n =================================================\n";
		std::cout << " Share cost: $" << googleShareCost << "   Shares: " << googleShares << std::endl;
		std::cout << " Google is one of the biggest tech companies in \n";
		std::cout << " the world. They are constantly expanding and they\n";
		std::cout << " are known for being very reliable.\n\n";
		std::cout << " Last 10 days: \n";
		for (int i = 0; i <= 9; i++)
		{
			TrendPlusOne = i + 1;
			if (TrendPlusOne == 1)
			{
				std::cout << " " << TrendPlusOne << " day ago: " << getDayTrend(Google, i) << std::endl;
			}
			else
			{
				std::cout << " " << TrendPlusOne << " days ago: " << getDayTrend(Google, i) << std::endl;
			}
		}
		std::cout << "\n      1:Buy Shares 2:Sell Shares 3: Go Back\n";
		std::cout << " =================================================\n";
		break;
	case CompNames::CheezyPizza:
		std::cout << "\n =================================================\n";
		std::cout << " Share cost: $" << cheezypizzaShareCost << "   Shares: " << cheezypizzaShares << std::endl;
		std::cout << " Cheezy Pizza is breaking the internet as a new up \n";
		std::cout << " and coming pizza place; however any startup company\n";
		std::cout << " is a risky investment!\n\n";
		std::cout << " Last 10 days: \n";
		for (int i = 0; i <= 9; i++)
		{
			TrendPlusOne = i + 1;
			if (TrendPlusOne == 1)
			{
				std::cout << " " << TrendPlusOne << " day ago: " << getDayTrend(CheezyPizza, i) << std::endl;
			}
			else
			{
				std::cout << " " << TrendPlusOne << " days ago: " << getDayTrend(CheezyPizza, i) << std::endl;
			}
		}
		std::cout << "\n      1:Buy Shares 2:Sell Shares 3: Go Back\n";
		std::cout << " =================================================\n";
		break;
	case CompNames::SkskWater:
		std::cout << "\n =================================================\n";
		std::cout << " Share cost: $" << skskwaterShareCost << "   Shares: " << skskwaterShares << std::endl;
		std::cout << " SkSk Water was created by the same company that created \n";
		std::cout << " thy Hydroflask. Although vsco girls are obsessed, the \n";
		std::cout << " water is expensive, so it has a smaller audience.\n\n";
		std::cout << " Last 10 days: \n";
		for (int i = 0; i <= 9; i++)
		{
			TrendPlusOne = i + 1;
			if (TrendPlusOne == 1)
			{
				std::cout << " " << TrendPlusOne << " day ago: " << getDayTrend(SkskWater, i) << std::endl;
			}
			else
			{
				std::cout << " " << TrendPlusOne << " days ago: " << getDayTrend(SkskWater, i) << std::endl;
			}
		}
		std::cout << "\n      1:Buy Shares 2:Sell Shares 3: Go Back\n";
		std::cout << " =================================================\n";
		break;
	case CompNames::SchruteFarms:
		std::cout << "\n =================================================\n";
		std::cout << " Share cost: $" << schrutefarmsShareCost << "   Shares: " << schrutefarmsShares << std::endl;
		std::cout << " Schrute Farms is a family run business located in \n";
		std::cout << " Pennsylvania. Not a lot is known about the business.\n";
		std::cout << " Sales seem to be good, but many people have reported\n";
		std::cout << " that the farmers are rather odd.\n\n";
		std::cout << " Last 10 days: \n";
		for (int i = 0; i <= 9; i++)
		{
			TrendPlusOne = i + 1;
			if (TrendPlusOne == 1)
			{
				std::cout << " " << TrendPlusOne << " day ago: " << getDayTrend(SchruteFarms, i) << std::endl;
			}
			else
			{
				std::cout << " " << TrendPlusOne << " days ago: " << getDayTrend(SchruteFarms, i) << std::endl;
			}
		}
		std::cout << "\n      1:Buy Shares 2:Sell Shares 3: Go Back\n";
		std::cout << " =================================================\n";
		break;
	case CompNames::DynamicDuoDev:
		std::cout << "\n =================================================\n";
		std::cout << " Share cost: $" << dynamicduodevShareCost << "   Shares: " << dynamicduodevShares << std::endl;
		std::cout << " Dynamic Duo Development is a dynamic modern tech  \n";
		std::cout << " company. They have many different aspects to their\n";
		std::cout << " company with aspirations to become the best in the\n";
		std::cout << " world when it comes to tech.\n\n";
		std::cout << " Last 10 days: \n";
		for (int i = 0; i <= 9; i++)
		{
			TrendPlusOne = i + 1;
			if (TrendPlusOne == 1)
			{
				std::cout << " " << TrendPlusOne << " day ago: " << getDayTrend(DynamicDuoDev, i) << std::endl;
			}
			else
			{
				std::cout << " " << TrendPlusOne << " days ago: " << getDayTrend(DynamicDuoDev, i) << std::endl;
			}
		}
		std::cout << "\n      1:Buy Shares 2:Sell Shares 3: Go Back\n";
		std::cout << " =================================================\n";
		break;
	case CompNames::BluthCompany:
		std::cout << "\n =================================================\n";
		std::cout << " Share cost: $" << bluthcompanyShareCost << "   Shares: " << bluthcompanyShares << std::endl;
		std::cout << " The Bluth Company is a house building company that \n";
		std::cout << " was created by the Bluth family. They are relatively\n";
		std::cout << " successful, but are currently facing legal issues. \n\n";
		std::cout << " Last 10 days: \n";
		for (int i = 0; i <= 9; i++)
		{
			TrendPlusOne = i + 1;
			if (TrendPlusOne == 1)
			{
				std::cout << " " << TrendPlusOne << " day ago: " << getDayTrend(BluthCompany, i) << std::endl;
			}
			else
			{
				std::cout << " " << TrendPlusOne << " days ago: " << getDayTrend(BluthCompany, i) << std::endl;
			}
		}
		std::cout << "\n      1:Buy Shares 2:Sell Shares 3: Go Back\n";
		std::cout << " =================================================\n";
		break;
	}
}

void Companies::PrintDailyReport()
{
	std::cout << "\n =================================================\n";;
	std::cout << "                    Daily Report:";
	std::cout << "\n -------------------------------------------------";
	std::cout << "\n                Google: " << getDayTrend(Google, 0);
	std::cout << "\n          Cheezy Pizza: " << getDayTrend(CheezyPizza, 0);
	std::cout << "\n            SkSk Water: " << getDayTrend(SkskWater, 0);
	std::cout << "\n         Schrute Farms: " << getDayTrend(SchruteFarms, 0);
	std::cout << "\n       Dynamic Duo Dev: " << getDayTrend(DynamicDuoDev, 0);
	std::cout << "\n         Bluth Company: " << getDayTrend(BluthCompany, 0);
	std::cout << "\n =================================================\n";
}

void Companies::ResetShareCosts()
{
	googleShareCost = 200;
	cheezypizzaShareCost = 25;
	skskwaterShareCost = 100;
	schrutefarmsShareCost = 75;
	dynamicduodevShareCost = 50;
	bluthcompanyShareCost = 100;

	for (int i = 0; i < 6; i++)
	{
		for (int x = 0; x < 10; x++)
		{
			addTenDayTrend(i, 0);
		}
	}

}

void Companies::addTenDayTrend(int cmp, int trend)
{
	switch (cmp)
	{
	case CompNames::Google:
		for (int y = 9; y >= 1; y--)
		{
			googleTenDayTrend[y] = googleTenDayTrend[y - 1];
		}
		googleTenDayTrend[0] = trend;
		break;
	case CompNames::CheezyPizza:
		for (int y = 9; y >= 1; y--)
		{
			cheezypizzaTenDayTrend[y] = cheezypizzaTenDayTrend[y - 1];
		}
		cheezypizzaTenDayTrend[0] = trend;
		break;
	case CompNames::SkskWater:
		for (int y = 9; y >= 1; y--)
		{
			skskwaterTenDayTrend[y] = skskwaterTenDayTrend[y - 1];
		}
		skskwaterTenDayTrend[0] = trend;
		break;
	case CompNames::SchruteFarms:
		for (int y = 9; y >= 1; y--)
		{
			schrutefarmsTenDayTrend[y] = schrutefarmsTenDayTrend[y - 1];
		}
		schrutefarmsTenDayTrend[0] = trend;
		break;
	case CompNames::DynamicDuoDev:
		for (int y = 9; y >= 1; y--)
		{
			dynamicduodevTenDayTrend[y] = dynamicduodevTenDayTrend[y - 1];
		}
		dynamicduodevTenDayTrend[0] = trend;
		break;
	case CompNames::BluthCompany:
		for (int y = 9; y >= 1; y--)
		{
			bluthcompanyTenDayTrend[y] = bluthcompanyTenDayTrend[y - 1];
		}
		bluthcompanyTenDayTrend[0] = trend;
		break;
	default:
		break;
	}
}


// Shares -------------------------------------------------
bool Companies::canBuyShares(int comp, int howMany, float money)
{
	switch (comp)
	{
	case CompNames::Google:
		if (howMany * googleShareCost <= money) { return true; }
		else { return false; }
		break;
	case CompNames::CheezyPizza:
		if (howMany * cheezypizzaShareCost <= money) { return true; }
		else { return false; }
		break;
	case CompNames::SkskWater:
		if (howMany * skskwaterShareCost <= money) { return true; }
		else { return false; }
		break;
	case CompNames::SchruteFarms:
		if (howMany * schrutefarmsShareCost <= money) { return true; }
		else { return false; }
		break;
	case CompNames::DynamicDuoDev:
		if (howMany * dynamicduodevShareCost <= money) { return true; }
		else { return false; }
		break;
	case CompNames::BluthCompany:
		if (howMany * bluthcompanyShareCost <= money) { return true; }
		else { return false; }
		break;
	}
}

bool Companies::canSellShares(int comp, int howMany, float money)
{
	switch (comp)
	{
	case CompNames::Google:
		if (googleShares > 0) { return true; }
		else { return false; }
		break;
	case CompNames::CheezyPizza:
		if (cheezypizzaShares > 0) { return true; }
		else { return false; }
		break;
	case CompNames::SkskWater:
		if (skskwaterShares > 0) { return true; }
		else { return false; }
		break;
	case CompNames::SchruteFarms:
		if (schrutefarmsShares > 0) { return true; }
		else { return false; }
		break;
	case CompNames::DynamicDuoDev:
		if (dynamicduodevShares > 0) { return true; }
		else { return false; }
		break;
	case CompNames::BluthCompany:
		if (bluthcompanyShares > 0) { return true; }
		else { return false; }
		break;
	}
}

float Companies::buyShares(int comp, int howMany, float money)
{
	
	switch (comp)
	{
	case CompNames::Google:
		googleShares += howMany;
		return googleShareCost * howMany;
		break;
	case CompNames::CheezyPizza:
		cheezypizzaShares += howMany;
		return cheezypizzaShareCost * howMany;
		break;
	case CompNames::SkskWater:
		skskwaterShares += howMany;
		return skskwaterShareCost * howMany;
		break;
	case CompNames::SchruteFarms:
		schrutefarmsShares += howMany;
		return schrutefarmsShareCost * howMany;
		break;
	case CompNames::DynamicDuoDev:
		dynamicduodevShares += howMany;
		return dynamicduodevShareCost * howMany;
		break;
	case CompNames::BluthCompany:
		bluthcompanyShares += howMany;
		return bluthcompanyShareCost * howMany;
		break;
	}
}

float Companies::sellShares(int comp, int howMany, float money)
{
	switch (comp)
	{
	case CompNames::Google:
		googleShares -= howMany;
		return googleShareCost * howMany;
		break;
	case CompNames::CheezyPizza:
		cheezypizzaShares -= howMany;
		return cheezypizzaShareCost * howMany;
		break;
	case CompNames::SkskWater:
		skskwaterShares -= howMany;
		return skskwaterShareCost * howMany;
		break;
	case CompNames::SchruteFarms:
		schrutefarmsShares -= howMany;
		return schrutefarmsShareCost * howMany;
		break;
	case CompNames::DynamicDuoDev:
		dynamicduodevShares -= howMany;
		return dynamicduodevShareCost * howMany;
		break;
	case CompNames::BluthCompany:
		bluthcompanyShares -= howMany;
		return bluthcompanyShareCost * howMany;
		break;
	}
}

int Companies::getShares(int comp)
{
	switch (comp)
	{
	case CompNames::Google:
		return googleShares;
		break;
	case CompNames::CheezyPizza:
		return cheezypizzaShares;
		break;
	case CompNames::SkskWater:
		return skskwaterShares;
		break;
	case CompNames::SchruteFarms:
		return schrutefarmsShares;
		break;
	case CompNames::DynamicDuoDev:
		return dynamicduodevShares;
		break;
	case CompNames::BluthCompany:
		return bluthcompanyShares;
		break;
	}
}

double Companies::getShareCost(int comp)
{
	switch (comp)
	{
	case Google:
		return googleShareCost;
	case CheezyPizza:
		return cheezypizzaShareCost;
	case SkskWater:
		return skskwaterShareCost;
	case SchruteFarms:
		return schrutefarmsShareCost;
	case DynamicDuoDev:
		return dynamicduodevShareCost;
	case BluthCompany:
		return dynamicduodevShareCost;
	}
}

void Companies::changeDailyShares()
{
	googleShareCost += (googleShareCost * googleTenDayTrend[0])/100;
	cheezypizzaShareCost += (cheezypizzaShareCost * cheezypizzaTenDayTrend[0]) / 100;
	skskwaterShareCost += (skskwaterShareCost * skskwaterTenDayTrend[0]) / 100;
	schrutefarmsShareCost += (schrutefarmsShareCost * schrutefarmsTenDayTrend[0]) / 100;
	dynamicduodevShareCost += (dynamicduodevShareCost * dynamicduodevTenDayTrend[0]) / 100;
	bluthcompanyShareCost += (bluthcompanyShareCost * bluthcompanyTenDayTrend[0]) / 100;
}

int Companies::getReliability(int comp)
{
	switch (comp)
	{
	case Google:
		return GOOGLE_RELIABILITY;
	case CheezyPizza:
		return CHEEZYPIZZA_RELIABILITY;
	case SkskWater:
		return SKSKWATER_RELIABILITY;
	case SchruteFarms:
		return SCHRUTEFARMS_RELIABILITY;
	case DynamicDuoDev:
		return DYNAMICDUODEV_RELIABILITY;
	case BluthCompany:
		return BLUTHCOMPANY_RELIABILITY;
	}
}

float Companies::getTotalShareCost()
{
	float totalShareMoney = 0;
	totalShareMoney += googleShares * googleShareCost;
	totalShareMoney += cheezypizzaShares * cheezypizzaShareCost;
	totalShareMoney += skskwaterShares * skskwaterShareCost;
	totalShareMoney += schrutefarmsShares * schrutefarmsShareCost;
	totalShareMoney += dynamicduodevShares * dynamicduodevShareCost;
	totalShareMoney += bluthcompanyShares * bluthcompanyShareCost;
	return totalShareMoney;
}

std::string Companies::getDayTrend(int comp, int day)
{
	std::string cpltReturn;
	switch (comp)
	{
	case Google:
		if (googleTenDayTrend[day] == -100)
		{
			return std::string("CRASH!");
		}
		else 
		{
			if (googleTenDayTrend[day] >= 0)
			{
				cpltReturn = "+" + std::to_string(googleTenDayTrend[day]) + "%";
				return std::string(cpltReturn);
			}
			else
			{
				cpltReturn = std::to_string(googleTenDayTrend[day]) + "%";
				return std::string(cpltReturn);
			}
		}
	case CheezyPizza:
		if (cheezypizzaTenDayTrend[day] == -100)
		{
			return std::string("CRASH!");
		}
		else
		{
			if (cheezypizzaTenDayTrend[day] >= 0)
			{
				cpltReturn = "+" + std::to_string(cheezypizzaTenDayTrend[day]) + "%";
				return std::string(cpltReturn);
			}
			else
			{
				cpltReturn = std::to_string(cheezypizzaTenDayTrend[day]) + "%";
				return std::string(cpltReturn);
			}
		}
	case SkskWater:
		if (skskwaterTenDayTrend[day] == -100)
		{
			return std::string("CRASH!");
		}
		else
		{
			if (skskwaterTenDayTrend[day] >= 0)
			{
				cpltReturn = "+" + std::to_string(skskwaterTenDayTrend[day]) + "%";
				return std::string(cpltReturn);
			}
			else
			{
				cpltReturn = std::to_string(skskwaterTenDayTrend[day]) + "%";
				return std::string(cpltReturn);
			}
		}
	case SchruteFarms:
		if (schrutefarmsTenDayTrend[day] == -100)
		{
			return std::string("CRASH!");
		}
		else
		{
			if (schrutefarmsTenDayTrend[day] >= 0)
			{
				cpltReturn = "+" + std::to_string(schrutefarmsTenDayTrend[day]) + "%";
				return std::string(cpltReturn);
			}
			else
			{
				cpltReturn = std::to_string(schrutefarmsTenDayTrend[day]) + "%";
				return std::string(cpltReturn);
			}
		}
	case DynamicDuoDev:
		if (dynamicduodevTenDayTrend[day] == -100)
		{
			return std::string("CRASH!");
		}
		else
		{
			if (dynamicduodevTenDayTrend[day] >= 0)
			{
				cpltReturn = "+" + std::to_string(dynamicduodevTenDayTrend[day]) + "%";
				return std::string(cpltReturn);
			}
			else
			{
				cpltReturn = std::to_string(dynamicduodevTenDayTrend[day]) + "%";
				return std::string(cpltReturn);
			}
		}
	case BluthCompany:
		if (bluthcompanyTenDayTrend[day] == -100)
		{
			return std::string("CRASH!");
		}
		else
		{
			if (bluthcompanyTenDayTrend[day] >= 0)
			{
				cpltReturn = "+" + std::to_string(bluthcompanyTenDayTrend[day]) + "%";
				return std::string(cpltReturn);
			}
			else
			{
				cpltReturn = std::to_string(bluthcompanyTenDayTrend[day]) + "%";
				return std::string(cpltReturn);
			}
		}
	}
	
}


