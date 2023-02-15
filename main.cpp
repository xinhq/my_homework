#include"project.h"
using namespace std;

void input(const char* fileName, person* per)
{
	ifstream file;
	file.open(fileName, ios::in);
	file >> per->ID >> per -> Name >> per->Age >> per->Sex >> per->Language >> per->score;
}

void input(const char* fileName, int& num)
{
	ifstream file;
	file.open(fileName, ios::in);
	file >> num;
}

void output(person* head, const char* fileName)
{
	ofstream file1;
	file1.open(fileName, ios::out);
	person* per = head;
	while (per->next != NULL) {
		per = per->next;
		file1 << per->ID << " " << per->Name << " " << per->Age << " " << per->Sex << " " << per->Language << " " << per->score << endl;

	}
}

int main()
{
	person* head = new person;
	head = input("input.txt");

	int num = 0;
	input("menu.txt", num);

	switch (num) {

	case 1 : {
			int ID = 0;
			input("find.txt", ID);
			head = find(head, ID);
			output(head, "out.txt");
			break;
		}

	case 2 : {
			person* per = new person;
			input("input1.txt", per);
			head = append(head, per);
			output(head, "out.txt");
			break;
		}

	case 3 : {
			int ID = 0;
			input("find.txt", ID);
			head = del(head, ID);
			output(head, "out.txt");
			break;
		}

	

	}
	
	return 0;
}