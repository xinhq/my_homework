#include"project.h"
using namespace std;
person* append(person* head, person* s)
{
	person* per = head->next;
	while (per->next != NULL) {
		per = per->next;
	}
	per->next = s;
	per = per->next;
	per->next = NULL;
	return head;
}