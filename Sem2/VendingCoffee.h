#pragma once
#include <iostream>
#include <Windows.h>
#include <string>
#include <algorithm>

class VendingCoffee
{
private:
	bool Power;		// Power On\Off
	bool Display;	// Display On\Off
	bool isWork;	// True when vending fill cup


	int cupTank;		//How many cups vending can storage.
	int Sugar;			//How many cups vending can storage.
	int coverTank;		// How many covers vending can storage.
	double coffeeTank;	// How much vending can storage coffee.
	double waterTank;	// How much vending can storage water.
	double milkTank;	// How much vending can storage milk.
	int coinTank;		// How many coins can storage.
	int cashTank;		// How much cash can storage.


	int amountOfCups;		// How many cups vending have now. 
	int amountOfSugar;		// How many cups vending have now. 
	int amountOfCovers;		// How many covers vending have now.
	double amountOfCoffee;	// How much coffee vending have now.
	double amountOfWater;	// How much water vending have now.
	double amountOfMilk;	// How much milk vending have now.
	int amountOfTea;		// How much milk vending have now.
	int amountOfCoins;		// How many coins in vending now.
	int amountOfCash;		// How much cash in vending now.
	struct info;


//	void switchWork();				// turn on filling cup
//	void displayAmounts();			// display amounts of coffee/water/milk
//	void sendMessage();				// send message to owner of vending machine status
//	void writeStats();				// todo
//	void switchDisplay();			// when power on - display on / off display - off.
	void giveCup();					// give filled cup to client
	int change(int x, int y);		// give back money to client
	int sugar(int sugar);

public:
	void switchPower();		/// Power on\off.
	void MainMenu();		/// Client using vending machine
	int pay(int cost);		/// Client paying money
	VendingCoffee() {
		 Power = true;		// Power On\Off
		 Display = true;	// Display On\Off
		 isWork = false;	// True when vending fill cup

		 Sugar = 100;				// How many sugar vending can storage.
		 cupTank = 100;				// How many cups vending can storage.
		 coverTank = 100;			// How many covers vending can storage.
		 coffeeTank = 100.0;		// How much vending can storage coffee.
		 waterTank = 100.0;			// How much vending can storage water.
		 milkTank = 100.0;			// How much vending can storage milk.
		 coinTank = 250;			// How many coins can storage.
		 cashTank = 250;			// How much cash can storage.

		 amountOfSugar = 100;			// How many sugar vending have now.
		 amountOfCups = 100;			// How many cups vending have now. 
		 amountOfCovers = 100;			// How many covers vending have now.
		 amountOfCoffee = 100;			// How much coffee vending have now.
		 amountOfWater = 100;			// How much water vending have now.
		 amountOfMilk = 100;			// How much milk vending have now.
		 amountOfTea = 100;				// How much milk vending have now.
		 amountOfCoins = 100;			// How many coins in vending now.
		 amountOfCash = 100;			// How much cash in vending now.
	}

};
