#pragma once

#include "Classes.h"

int random(int min, int max) //range
{
	static bool first = true;
	if (first)
	{
		srand(time(NULL)); //gives a seed for random generator needs only at first lounch
		first = false;
	}
	return min + rand() % ((max + 1) - min);
}

void StudentBook::calcCredits() {
	int i = 0;
	std::cout << "\nЗаполнение зачетов";
	while (i < Amount[0]) {
		int k = 0;
		std::cout << "\n1 - Зачтено" << "\n2 - Незачтено" << "\n3 - Случайное значение \n";
		std::cin >> k;

		switch (k)
		{
		case 1: {
			credit[i] = "Зачтено";
		}break;
		case 2: {
			credit[i] = "Незачтено";
		}break;
		case 3: {
			if (random(0, 1) == 0) {
				credit[i] = "Незачтено";
			}
			else
			{
				credit[i] = "Зачтено";
			}
		}break;
		default:
			break;
		}
		i++;
	}
}


void StudentBook::calcExam() {
	int Grade = 0;
	int i = 0;
	std::cout << "\nЗаполнение экзаменов";
	while (i < Amount[1]) {
		int k = 0;
		std::cout << "\n1 - 2" << "\n2 - 3" << "\n3 - 4" << "\n4 - 5" << "\n5 - Случайное значение";
		std::cout << i;
		std::cin >> k;

		switch (k)
		{
		case 1: {
			exams[i] = 2;
		}break;
		case 2: {
			exams[i] = 3;
		}break;
		case 3: {
			exams[i] = 4;
		}break;
		case 4: {
			exams[i] = 5;
		}break;

		case 5: {
			Grade = random(2, 5);
			switch (Grade)
			{
			case 2: {
				exams[i] = Grade;
			}break;
			case 3: {
				exams[i] = Grade;
			}break;
			case 4: {
				exams[i] = Grade;
			}break;
			case 5: {
				exams[i] = Grade;
			}break;
			}
		}break;
		default: {i--; std::cout << "\n Неверное значение \n"; }
			   break;
		}
		i++;
	}
}

void StudentBook::autoComplete() {
	int i = 0;
	while (i < Amount[0]) {
		if (random(0, 1) == 0) {
			credit[i] = "Незачтено";
		}
		else
		{
			credit[i] = "Зачтено";
		}
		i++;
	}
	i = 0;
	while (i < Amount[1]) {
		int Grade = random(2, 5);
		switch (Grade)
		{
		case 2: {
			exams[i] = Grade;
		}break;
		case 3: {
			exams[i] = Grade;
		}break;
		case 4: {
			exams[i] = Grade;
		}break;
		case 5: {
			exams[i] = Grade;
		}break;
		default:
			break;
		}
		i++;
	}

}

void StudentBook::menu(){
	int p = 0;
	
	std::cout << "\nВведите количество зачетов в этом семестре: ";
	std::cin >> Amount[0];
	createCredits(Amount[0]);

	std::cout << "\nВведите количество экзаменов в этом семестре: ";
	std::cin >> Amount[1];
	createExams(Amount[1]);

	std::cout << "\n\nХотите сами заполнить оценки или проставить случайные значения?";
	std::cout << "\n1 - Самостоятельно" << "\n2 - Случайные значения \n";
	std::cin >> p;
	switch (p)
	{
		// Самостоятельное заполнение
	case 1: {
		calcCredits();
		calcExam();
		
	}break;

		// Автоматическое заполнение
	case 2: {
		autoComplete();
	}break;

	default: std::cout << "Неверное значение. Выход.";
		break;
	}

	int i = 0;
	while (i != Amount[0]) {
		std::cout << "\n Зачет: " << credit[i];
		i++;
	}
	i = 0;
	while (i != Amount[1]) {
		std::cout << "\n Экзамен: " << exams[i];
		i++;
	}

	bool inf = true;
	while (inf == true)
	{
		std::cout << "\nМеню";
		std::cout << "\n1 - Вывести среднее значение";
		std::cout << "\n2 - Отредактировать данные";
		std::cout << "\n3 - Выход из программы\n";

		int k;
		std::cin >> k;

		switch (k)
		{
		case 1: {
			std::cout << averageGrade(exams);
		}break;
		case 2: {
			std::cout << "\n\nХотите сами заполнить оценки или проставить случайные значения?";
			std::cout << "\n1 - Самостоятельно" << "\n2 - Случайные значения\n";
			std::cin >> p;
			switch (p)
			{

				// Самостоятельное заполнение
			case 1: {
				calcCredits();
				calcExam();
			}break;

				// Автоматическое заполнение
			case 2: {
				autoComplete();
			}break;

			default: std::cout << "Неверное значение. Выход.";
				break;
			}

			int i = 0;
			while (i != Amount[0]) {
				std::cout << "\n Зачет: " << credit[i];
				i++;
			}
			i = 0;
			while (i != Amount[1]) {
				std::cout << "\n Экзамен: " << exams[i];
				i++;
			}
		}break;
		case 3: {
			break;
		}break;
		default:
			break;
		}
	}
}

void StudentBook::createCredits(int Amount) {
	credit = new std::string[Amount];
}

void StudentBook::createExams(int Amount) {
	exams = new int[Amount];
}

/*
void SchoolBook::createExams(int Amount) {
	int* exams = new int[Amount];
}
*/
