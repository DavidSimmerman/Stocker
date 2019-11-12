#pragma once
#include <iostream>
#include <string>
class Companies
{
public:
	void PrintCmpProfile(int cmp);
	void PrintDailyReport();
	void ResetShareCosts();
	void addTenDayTrend(int cmp, int trend);
	bool canBuyShares(int comp, int howMany, float money);
	bool canSellShares(int comp, int howMany, float money);
	float buyShares(int comp, int howMany, float money);
	float sellShares(int comp, int howMany, float money);
	int getShares(int comp);
	double getShareCost(int comp);
	void changeDailyShares();
	int getReliability(int comp);
	float getTotalShareCost();
	std::string getDayTrend(int comp, int day);
	
private:
	//Google
	float googleShareCost;
	int googleTenDayTrend[10];
	int googleShares;
	int const GOOGLE_RELIABILITY = 25;

	//CheezyPizza
	float cheezypizzaShareCost;
	int cheezypizzaTenDayTrend[10];
	int cheezypizzaShares;
	int const CHEEZYPIZZA_RELIABILITY = 75;

	//SkSkWater
	float skskwaterShareCost;
	int skskwaterTenDayTrend[10];
	int skskwaterShares;
	int const SKSKWATER_RELIABILITY = 50;

	//SchruteFarms
	float schrutefarmsShareCost;
	int schrutefarmsTenDayTrend[10];
	int schrutefarmsShares;
	int const SCHRUTEFARMS_RELIABILITY = 50;

	//DynamicDuoDev
	float dynamicduodevShareCost;
	int dynamicduodevTenDayTrend[10];
	int dynamicduodevShares;
	int const DYNAMICDUODEV_RELIABILITY = 25;

	//BluthCompany
	float bluthcompanyShareCost;
	int bluthcompanyTenDayTrend[10];
	int bluthcompanyShares;
	int const BLUTHCOMPANY_RELIABILITY = 75;
};

