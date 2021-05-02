#include "VendingCoffee.h"





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
	int p = 0;
	int sugar = 3;
	while (p != 8)
	{
		std::cout << "\n Вы подошли к кофейному автомату. \n";
		std::cout << "\n 1.Чай - 20р";
		std::cout << "\n 2.Коффе - 35р";
		std::cout << "\n 3.Изменить количество сахара";

		std::cin >> p;
		switch (p)
		{
		case 1: {
			int payment = 0;
			int x = 0, y = 0;
			int cost = 20;
			std::cout << amountOfTea << " чай \n";
			std::cout << amountOfWater << " вода \n";
			std::cout << amountOfMilk << " молоко \n";
			if (amountOfTea <= 0) {
				std::cout << "\n К сожалению, чай закончился.";
				std::cout << "\n Мы уже вызвали работника, чтобы он восполнил запас.";
				// todo call service
				std::cout << "\n А пока вы можете заказать что-то другое.";
			}
			else {
				std::cout << "\n \n Внесите оплату 20 рублей. (Число)";
				while (payment < cost) {
					std::cin >> y;
					x += y;
					if (x < 0) {
						std::cout << "\n Неверное значение.";
					}
					else if (x < cost)
					{
						std::cout << "\n Внесите еще " << cost - x << "рублей.";
					}
					else {
						std::cout << "\n Ваша сдача: " << x - cost << "рублей.";
						//change(x - cost);
					}
				}
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
			//giveCup();
		}break;
		case 2: {
			// Copy from case 1
		}break;
		case 3: {

		}
		default:
			break;
		}

	}
}