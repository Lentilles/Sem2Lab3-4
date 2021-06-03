#pragma once
#include <iostream>
#include <string>
#include <Windows.h>


class StudyDocs
{
public:
	virtual void menu() { std::cout << "menu"; };
protected:
	float averageGrade(int *examens) {
		unsigned int size;
		size = sizeof(examens);
		unsigned int i = 0;
		float sum = 0;
		
		while (i != size) {
			sum += examens[i];
		}
		return sum / size;
	}
};

class StudentBook : protected StudyDocs {
public:
	void menu() override;
protected: 
	float averageGrade(int* examens) {
		unsigned int size;
		size = sizeof(examens);
		unsigned int i = 0;
		float sum = 0;

		while (i != size) {
			sum += examens[i];
		}
		return sum / size;
	}

private:
	std::string* credit;
	int* exams;

	void createCredits(int Amount);
	void createExams(int Amount);
};

/*
class SchoolBook : StudyDocs {
public:
	void menu() override;
	float averageGrade(int* exams);

private:
private:
	int* exams;

	void createExams(int Amount);
};*/