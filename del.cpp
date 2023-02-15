#include"project.h"
using namespace std;
person* del(person* head, int no)
{
	person* per = head->next;
	person* stu = new person;
	stu->next = per;
	while (per->next != NULL) {
		if (per->ID == no) {
			stu->next = per->next;
			return head;
		}
		stu = stu->next;
		per = per->next;
	}
}