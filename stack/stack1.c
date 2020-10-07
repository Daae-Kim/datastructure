#include <stdio.h>
#include <stdlib.h>

#include "stack1.h"

// ������ ���� ������ �����Ѵ�.

#define MAX_STACK_SIZE 100	// ������ �ִ� ũ��
element  stack[MAX_STACK_SIZE]; // 1���� �迭
int  top = -1;			

// ���� ���� ���� �Լ�
int is_empty()
{
	return (top == -1);
}
// ��ȭ ���� ���� �Լ�
int is_full()
{
	return (top == (MAX_STACK_SIZE - 1));
}
// ���� �Լ�
void push(element item)
{
	if (is_full()) {
		fprintf(stderr, "error: push onto the full stack\n");
		return;
	}
	else stack[++top] = item;
}
// ���� �Լ�
element pop()
{
	if (is_empty()) {
		fprintf(stderr, "error: pop from the empty stack\n");
		exit(1);
	}
	else return stack[top--];
}
// ��ũ �Լ�
element peek()
{
	if (is_empty()) {
		fprintf(stderr, "error: peek from the empty stack\n");
		exit(1);
	}
	else return stack[top]; 
}

