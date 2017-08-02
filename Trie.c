#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LIMIT 256

struct Contacts {
	struct Contacts* next[LIMIT];
	int isEnd;
};

struct Contacts* createContacts(void);
int insert_Contacts(struct Contacts*, char*);
int search_Contacts(struct Contacts*, char*);

int main(void)
{
	FILE * fp = fopen("contacts", "r");
	return 0;
}

struct Contacts* createContacts(void)
{
	struct Contacts* NewContacts;
	NewContacts = (struct Contacts*)malloc(sizeof(struct Contacts));
	int i;
	for(i=0; i<LIMIT; ++i) {
		NewContacts->next[i] = NULL;
	}
	NewContacts->isEnd = 0;
	return NewContacts;
}

int insert_Contacts(struct Contacts* Book, char* contact)
{
	if(Book == NULL || contact == NULL) {
		return -1;
	}
	struct Contacts* Iterator = Book;
	int i, n = strlen(contact);
	for(i=0; i<n; ++i) {
		if(Iterator->next[contact[i]] == NULL)
			Iterator->next[contact[i]] = createContacts();
		Iterator = Iterator->next[contact[i]];
	}
	Iterator->isEnd = 1;
	return 1;
}

int search_Contacts(struct Contacts* Book, char* contact)
{
	if(Book == NULL || contact == NULL) {
		return -1;
	}	
	struct Contacts* Iterator = Book;
	int i, n = strlen(contact);
	for(i=0; i<n; ++i) {
		if(Iterator->next[contact[i]] == NULL)
			return 0;
		Iterator = Iterator->next[contact[i]];
	}
	return (Iterator && Iterator->isEnd);
}