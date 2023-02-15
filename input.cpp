#include"project.h"
using namespace std;

person* input(const char* fileName)
{
	ifstream file;
	file.open(fileName, ios::in);
	person* head = new person;
	person* per = new person;
	head->next = per;
	file >> per->ID >> per->Name >> per->Age >> per->Sex >> per->Language >> per->score;
	while (!file.eof()) {
		person* q = new person;
		file >> q->ID >> q->Name >> q->Age >> q->Sex >> q->Language >> q->score;
		per->next = q;
		per = per->next;
	}
	per->next = NULL;
	return head;
}