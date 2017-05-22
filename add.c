/*
 * Adding two large numbers using Linked List
*/
#include <stdio.h>
#include <stdlib.h>

struct node {
	int num;
	struct node *next;
};

typedef struct node node;

node *create_node(int new_num)
{
	node *new_node = malloc(sizeof(node));
	new_node->num = new_num;
	new_node->next = NULL;
	return new_node;
}

void push_front(node **head, int new_num)
{
	if(!*head) {
		*head = create_node(new_num);
	} else {
		node *t = create_node(new_num);
		t->next = *head;
		*head = t;
	}
}

node *add(node *head_1, node *head_2)
{
	node *head_3 = NULL;
	int num;
	for(num = 0; head_1 && head_2; num/=10, head_1=head_1->next, head_2=head_2->next) {
		num = head_1->num + head_2->num + num;
		push_front(&head_3, num%10);
	}
	node *head;
	for(head = head_1 ? head_1 : head_2; head; num/=10, head=head->next) {
		num = head->num + num;
		push_front(&head_3, num%10);
	}
	if(num) {
		push_front(&head_3, num%10);
	}
	return head_3;
}

void get_number(node **head)
{
	char x;
	do {
		x = getchar();
		if('0' <= x && x <= '9') {
			push_front(head, x-'0');
		}
	} while(x != ' ' && x != '\n');
}

void put_number(node *head)
{
	for(; head; head=head->next) {
		printf("%d", head->num);
	}
	putchar('\n');
}

int main(void)
{
	node *head_1 = NULL;
	node *head_2 = NULL;

	get_number(&head_1);
	get_number(&head_2);

	node *head_3 = add(head_1, head_2);
	put_number(head_3);

	return 0;
}
