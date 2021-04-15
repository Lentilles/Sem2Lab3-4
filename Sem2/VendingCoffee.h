#pragma once
class VendingCoffee
{
	bool Power;		// Power On\Off
	bool Display;	// Display On\Off
	bool isWork;	// True when vending fill cup


	int cupTank;		//How many cups vending can storage.
	int coverTank;		// How many covers vending can storage.
	double coffeeTank;	// How much vending can storage coffee.
	double waterTank;	// How much vending can storage water.
	double milkTank;	// How much vending can storage milk.
	int coinTank;		// How many coins can storage.
	int cashTank;		// How much cash can storage.


	int amountOfCups;		// How many cups vending have now. 
	int amountOfCovers;		// How many covers vending have now.
	double amountOfCoffee;	// How much coffee vending have now.
	double amountOfWater;	// How much water vending have now.
	double amountOfMilk;	// How much milk vending have now.
	int amountOfCoins;		// How many coins in vending now.
	int amountOfCash;		// How much cash in vending now.


	void switchWork();		// turn on filling cup
	void displayAmounts();	// display amounts of coffee/water/milk
	void sendMessage();		// send message to owner of vending machine status
	void writeStats();		// todo
	void switchDisplay();	// when power on - display on / off display - off.

public:
	void switchPower();		// Power on\off.
	void pressButton();		// Client using vending machine
	double  pay();			// Client paying money
	void change();			// give back money to client

};

