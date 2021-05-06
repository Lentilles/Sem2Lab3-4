#include "VendingCoffee.h"



struct VendingCoffee::info {
	int coins = 0;
	int banknotes = 0;
	int payed = 0;
};

void VendingCoffee::switchPower() {
		Power = !Power;
		if (Power == true) {
			Display = true;
			//startcheck();
			//sendMessage();
		}
		else {
			Display = false;
			isWork = false;
		}
}

void VendingCoffee::pressButton() {
	info I1;
	int p = 0;
	while (p != 4)
	{
		std::cout << "\n Вы подошли к кофейному автомату. \n";
		std::cout << "\n 1.Чай - 20р";
		std::cout << "\n 2.Кофе - 35р";
		std::cout << "\n 3.Изменить количество сахара \n";
		std::cout << "\n 4. Уйти. \n";

		std::cin >> p;
		switch (p)
		{
		case 1: {
			int payed = 0;
			int cost = 20;
			std::cout << amountOfTea << " чай \n";
			std::cout << amountOfWater << " вода \n";
			if (amountOfTea <= 0) {
				std::cout << "\n К сожалению, чай закончился.";
				std::cout << "\n Мы уже вызвали работника, чтобы он восполнил запас.";
				// todo call service
				std::cout << "\n А пока вы можете заказать что-то другое.";
			}
			else if (amountOfWater <= 0) {
				std::cout << "\n К сожалению вода закончилась.";
				std::cout << "\n Мы уже вызвали работника, чтобы он восполнил запас.";
				// todo call service
			}
			else if (amountOfCups <= 0) {
				std::cout << "\n К сожалению чашки кончились.";
				std::cout << "\n Мы уже вызвали работника, чтобы он восполнил запас.";
				// todo call service
			}
			else if (amountOfCovers <= 0) {
				std::cout << "\n К сожалению крышки кончились.";
				std::cout << "\n Мы уже вызвали работника, чтобы он восполнил запас.";

				std::cout << "\n Налить без крышки?.";
				std::string YN;
				std::cout << "\n (Д)а/(Н)ет \n";
				std::cin >> YN;
				if (YN == "Н" || YN == "н" || YN == "Нет" || YN == "нет" || YN == "НЕт" || YN == "НЕТ" || YN == "нЕт" || YN == "нЕТ") {
					std::cout << "Доброго дня! \n";
					exit;
				}
			}
			else {
				std::cout << "\n \n Внесите оплату 20 рублей. (Число)";
					payed = pay(cost);
					std::cout << "\n Ваша сдача: " << change(payed, cost);
				}
			isWork = true;
			std::cout << "\n Ч"; Sleep(35);
			std::cout << "а"; Sleep(35);
			std::cout << "й"; Sleep(35);
			std::cout << " "; Sleep(35);
			std::cout << "Н"; Sleep(35);
			std::cout << "а"; Sleep(35);
			std::cout << "л"; Sleep(35);
			std::cout << "и"; Sleep(35);
			std::cout << "в"; Sleep(35);
			std::cout << "а"; Sleep(35);
			std::cout << "е"; Sleep(35);
			std::cout << "т"; Sleep(35);
			std::cout << "с"; Sleep(35);
			std::cout << "я"; Sleep(35);
			Sleep(2000);
			std::cout << ".";
			Sleep(2000);
			std::cout << ".";
			Sleep(2000);
			std::cout << ".";
			Sleep(2000);
			std::cout << "\n Готово!";
			giveCup();
			isWork = false;
		}break;
		case 2: {
			int payed = 0;
			int cost = 20;
			std::cout << amountOfCoffee << " кофе \n";
			std::cout << amountOfMilk << " молоко \n";
			if (amountOfTea <= 0) {
				std::cout << "\n К сожалению, кофе закончился.";
				std::cout << "\n Мы уже вызвали работника, чтобы он восполнил запас.";
				// todo call service
				std::cout << "\n А пока вы можете заказать что-то другое.";
			}
			else if (amountOfMilk <= 0) {
				std::cout << "\n К сожалению вода закончилась.";
				std::cout << "\n Мы уже вызвали работника, чтобы он восполнил запас.";
				// todo call service
			}
			else if (amountOfCups <= 0) {
				std::cout << "\n К сожалению чашки кончились.";
				std::cout << "\n Мы уже вызвали работника, чтобы он восполнил запас.";
				// todo call service
			}
			else if (amountOfCovers <= 0) {
				std::cout << "\n К сожалению крышки кончились.";
				std::cout << "\n Мы уже вызвали работника, чтобы он восполнил запас.";

				std::cout << "\n Налить без крышки?.";
				std::string YN;
				std::cout << "\n (Д)а/(Н)ет \n";
				std::cin >> YN;
				if (YN == "Н" || YN == "н" || YN == "Нет" || YN == "нет" || YN == "НЕт" || YN == "НЕТ" || YN == "нЕт" || YN == "нЕТ") {
					std::cout << "Доброго дня! \n";
					exit;
				}
			}
			else {
				std::cout << "\n \n Внесите оплату 20 рублей. (Число)";
				payed = pay(cost);
				std::cout << "\n Ваша сдача: " << change(payed, cost);
			}
			isWork = true;
			std::cout << "\n К"; Sleep(35);
			std::cout << "о"; Sleep(35);
			std::cout << "ф"; Sleep(35);
			std::cout << "е"; Sleep(35);
			std::cout << " "; Sleep(35);
			std::cout << "Н"; Sleep(35);
			std::cout << "а"; Sleep(35);
			std::cout << "л"; Sleep(35);
			std::cout << "и"; Sleep(35);
			std::cout << "в"; Sleep(35);
			std::cout << "а"; Sleep(35);
			std::cout << "е"; Sleep(35);
			std::cout << "т"; Sleep(35);
			std::cout << "с"; Sleep(35);
			std::cout << "я"; Sleep(35);

			Sleep(2000);
			std::cout << ".";
			Sleep(2000);
			std::cout << ".";
			Sleep(2000);
			std::cout << ".";
			Sleep(2000);
			std::cout << "\n Готово!";
			giveCup();
			isWork = false;
		}break;
		case 3: {
			sugar();
		}break;
		case 4: {
			exit;
		}break;
		default:
			break;
		}

	}
}

int VendingCoffee::pay(int cost) {
	info Ipay;
	bool p = true;
	int payed = 0;
	while (p == true) {
		int x;
		std::cout << "\n Вставьте монетку или купюру";

		std::cout << "\n 1 - монетка 1 рубль"; Sleep(20);
		std::cout << "\n 2 - монетка 2 рубля"; Sleep(20);
		std::cout << "\n 3 - монетка 5 рублей"; Sleep(20);
		std::cout << "\n 4 - монетка 10 рублей"; Sleep(20);

		std::cout << "\n 5 - купюра 50 рублей"; Sleep(20);
		std::cout << "\n 6 - купюра 100 рублей"; Sleep(20);
		std::cout << "\n 7 - купюра 200 рублей"; Sleep(20);
		std::cout << "\n 8 - купюра 500 рублей"; Sleep(20);
		std::cout << "\n 9 - купюра 1000 рублей"; Sleep(20);
		std::cout << "\n 10 - купюра 2000 рублей"; Sleep(20); 
		std::cout << "\n 11 - купюра 5000 рублей \n"; Sleep(20);

		std::cin >> x;

		switch (x)
		{
		case 1: {payed += 1; Ipay.coins++; }break;
		case 2: {payed += 2; Ipay.coins++; }break;
		case 3: {payed += 5; Ipay.coins++; }break;
		case 4: {payed += 10; Ipay.coins++; }break;

		case 5: {payed += 50; Ipay.banknotes++; }break;
		case 6: {payed += 100; Ipay.banknotes++; }break;
		case 7: {payed += 200; Ipay.banknotes++; }break;
		case 8: {payed += 500; Ipay.banknotes++; }break;
		case 9: {payed += 1000; Ipay.banknotes++; }break;
		case 10: {payed += 2000; Ipay.banknotes++; }break;
		case 11: {payed += 5000; Ipay.banknotes++; }break;
		default:
			break;
			
			}
		if (payed >= cost) {
			p = false;
		}
	}
	return payed;
} 

int VendingCoffee::change(int x, int y) {
	return x - y;
}

void VendingCoffee::giveCup() {
	amountOfCups--;
	amountOfCovers--;
	std::cout << "\n заберите вашу кружку! \n";
} 

void VendingCoffee::sugar() {
	int sugar = 3;
	int i = 0, p = 1;

	while (p == 1 || p == 2) {
		std::cout << "Регулировка сахара: \n 1 + \n 2 - \n другое число - выход";
		std::cin >> p;
		switch (p)
		{
		case 1: {
			sugar++;
		}break;
		case 2: {
			sugar--;
		}break;
		default:
			break;
		}
		std::cout << "\n Сахара сейчас: ";
		while (i != sugar)
		{
			SetConsoleCP(1252);
			
			std::cout << "█ ";
			i++;
		}
		SetConsoleCP(1251);
		std::cout << "\n";
	}

}