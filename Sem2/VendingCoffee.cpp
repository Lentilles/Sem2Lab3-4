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
		std::cout << "\n �� ������� � ��������� ��������. \n";
		std::cout << "\n ����� - 35�";
		std::cout << "\n ��� - 20�";
		std::cout << "\n �������� ���������� ������";

		std::cin >> p;
		switch (p)
		{
		case 1: {
			int payment = 0;
			int x = 0;
			int cost = 20;
			if (amountOfTea <= 0) {
				std::cout << "\n � ���������, ��� ����������.";
			}
			else {
				std::cout << "\n \n ������� ������ 20 ������. (�����)";
				while (payment < cost) {
					std::cin >> x;
					if (x < 0) {
						std::cout << "\n �������� ��������.";
					}
					else if (x < cost)
					{
						std::cout << "\n ������� ��� " << cost - x << "������.";
					}
					else {
						std::cout << "\n ���� �����: " << x - cost << "������.";
						change(x - cost);
					}
				}
			}
			isWork = true;
			std::cout << "\n ��� ����������";
			// timer 2 �������
			std::cout << ".";
			// timer 2 �������
			std::cout << ".";
			// timer 2 �������
			std::cout << ".";
			std::cout << "\n ������!";
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