#pragma once
#pragma once
#include<iostream>
using namespace std;
typedef struct Node
{
	int Data;
	Node* pNext;
}NODE;

typedef struct Stack
{
	NODE* pHead;
	NODE* pTail;
}STACK;

class CStack
{
private:
	STACK s;
public:
	void Init();
	void Input(int);
	void Output();
	bool IsEmpty(STACK);
	NODE* KhoiTaoNode(int);
	void Push(STACK&, int);
	int Pop(STACK&);
};
