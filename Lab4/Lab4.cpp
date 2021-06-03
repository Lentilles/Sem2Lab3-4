#include <iostream>
#include "Classes.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int p[2]; // Количество объектов
	std::cout << "\nВведите количество зачетных книжек: ";
	std::cin >> p[0];
	StudentBook* StB = new StudentBook[p[0]];

//	std::cout << "\nВведите количество аттестатов ЕГЭ: ";
//	std::cin >> p[1];
//	SchoolBook* ScB = new SchoolBook[p[1]];

	int chosemenu = 0;
	while (true)
	{
		std::cout << "\nГлавное меню\n";
		std::cout << "\n1 — Меню зачетных книжек\n";
		std::cout << "2 — Меню школьных аттестатов\n";
		std::cout << "3 — Выход на рабочий стол\n";
		std::cin >> chosemenu;
		switch (chosemenu)
		{
		case 1: {
			int index = 0;
			std::cout << "Введите номер зачетной книжки: ";
			std::cin >> index;
			index -= 1;
			if (index < p[0] and index >= 0) {
				StB[index].menu();
			}
			else
			{
				std::cout << "Невозможное значение: ";
			}
		}break;
		case 2: {
			int index = 0;
			std::cout << "Введите номер аттестата";
			std::cin >> index;
			index -= 1;
			if (index < p[1] and index >= 0) {
				//		ScB[index].menu();
			}
			else
			{
				std::cout << "Невозможное значение";
			}
		}break;
		default:
			break;
		}
	}

}
