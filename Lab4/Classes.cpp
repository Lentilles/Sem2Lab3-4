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
	std::cout << "\n���������� �������";
	while (i < Amount[0]) {
		int k = 0;
		std::cout << "\n1 - �������" << "\n2 - ���������" << "\n3 - ��������� �������� \n";
		std::cin >> k;

		switch (k)
		{
		case 1: {
			credit[i] = "�������";
		}break;
		case 2: {
			credit[i] = "���������";
		}break;
		case 3: {
			if (random(0, 1) == 0) {
				credit[i] = "���������";
			}
			else
			{
				credit[i] = "�������";
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
	std::cout << "\n���������� ���������";
	while (i < Amount[1]) {
		int k = 0;
		std::cout << "\n1 - 2" << "\n2 - 3" << "\n3 - 4" << "\n4 - 5" << "\n5 - ��������� ��������";
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
		default: {i--; std::cout << "\n �������� �������� \n"; }
			   break;
		}
		i++;
	}
}

void StudentBook::autoComplete() {
	int i = 0;
	while (i < Amount[0]) {
		if (random(0, 1) == 0) {
			credit[i] = "���������";
		}
		else
		{
			credit[i] = "�������";
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
	
	std::cout << "\n������� ���������� ������� � ���� ��������: ";
	std::cin >> Amount[0];
	createCredits(Amount[0]);

	std::cout << "\n������� ���������� ��������� � ���� ��������: ";
	std::cin >> Amount[1];
	createExams(Amount[1]);

	std::cout << "\n\n������ ���� ��������� ������ ��� ���������� ��������� ��������?";
	std::cout << "\n1 - ��������������" << "\n2 - ��������� �������� \n";
	std::cin >> p;
	switch (p)
	{
		// ��������������� ����������
	case 1: {
		calcCredits();
		calcExam();
		
	}break;

		// �������������� ����������
	case 2: {
		autoComplete();
	}break;

	default: std::cout << "�������� ��������. �����.";
		break;
	}

	int i = 0;
	while (i != Amount[0]) {
		std::cout << "\n �����: " << credit[i];
		i++;
	}
	i = 0;
	while (i != Amount[1]) {
		std::cout << "\n �������: " << exams[i];
		i++;
	}

	bool inf = true;
	while (inf == true)
	{
		std::cout << "\n����";
		std::cout << "\n1 - ������� ������� ��������";
		std::cout << "\n2 - ��������������� ������";
		std::cout << "\n3 - ����� �� ���������\n";

		int k;
		std::cin >> k;

		switch (k)
		{
		case 1: {
			std::cout << averageGrade(exams);
		}break;
		case 2: {
			std::cout << "\n\n������ ���� ��������� ������ ��� ���������� ��������� ��������?";
			std::cout << "\n1 - ��������������" << "\n2 - ��������� ��������\n";
			std::cin >> p;
			switch (p)
			{

				// ��������������� ����������
			case 1: {
				calcCredits();
				calcExam();
			}break;

				// �������������� ����������
			case 2: {
				autoComplete();
			}break;

			default: std::cout << "�������� ��������. �����.";
				break;
			}

			int i = 0;
			while (i != Amount[0]) {
				std::cout << "\n �����: " << credit[i];
				i++;
			}
			i = 0;
			while (i != Amount[1]) {
				std::cout << "\n �������: " << exams[i];
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
