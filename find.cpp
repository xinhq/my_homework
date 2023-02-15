#include"project.h"
using namespace std;

person* find(person* head, int no)
{
	person* per = head->next;
	while (per->next != NULL) {
		if (per->ID == no) {
			head->next = per;
			per->next = NULL;
			return head;
		}
		per = per->next;
	}
}