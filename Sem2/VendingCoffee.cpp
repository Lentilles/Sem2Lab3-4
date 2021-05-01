#include "VendingCoffee.h"


void VendingCoffee::switchPower() {
		Power = !Power;
		if (Power == true) {
			Display = true;
			startcheck();
			sendMessage();
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
		std::cout << "\n Коффе - 35р";
		std::cout << "\n Чай - 20р";
		std::cout << "\n Изменить количество сахара";

		std::cin >> p;
		switch (p)
		{
		case 1: {
			int payment = 0;
			int x = 0;
			int cost = 20;
			if (amountOfTea <= 0) {
				std::cout << "\n К сожалению, чай закончился.";
			}
			else {
				std::cout << "\n \n Внесите оплату 20 рублей. (Число)";
				while (payment < cost) {
					std::cin >> x;
					if (x < 0) {
						std::cout << "\n Неверное значение.";
					}
					else if (x < cost)
					{
						std::cout << "\n Внесите еще " << cost - x << "рублей.";
					}
					else {
						std::cout << "\n Ваша сдача: " << x - cost << "рублей.";
						change(x - cost);
					}
				}
			}
			isWork = true;
			std::cout << "\n Чай наливается";
			// timer 2 секунды
			std::cout << ".";
			// timer 2 секунды
			std::cout << ".";
			// timer 2 секунды
			std::cout << ".";
			std::cout << "\n Готово!";
			giveCup();
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