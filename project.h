#pragma once
#include<iostream>
#include<fstream>
using namespace std;
struct person {
	int ID;
	char Name[20];
	int Age;
	char Sex;
	char Language[10];
	double score;
	person* next;
};

person* input(const char* fileName);
void input(const char* fileName, person* q);
void input(const char* fileName, int& num);
void output(person* head, const char* fileName);
person* find(person* head, int no);
person* del(person* head, int no);
person* append(person* head, person* s);