#include <iostream>
using namespace std;

const int Max_value = 10;

struct ArrayList
{
	int Element[Max_value];
	int position = 0;
};
//Structure of array list

void insert(ArrayList* list, int value)
{
	if (list->position < Max_value)
	{
		list->Element[list->position++] = value;

	}
}

//Insert

void remove(ArrayList* list, int i)
{
	if (i < list->position)
	{
		list->Element[i] = -9999;
	}
}

void display(ArrayList* list)
{
	for (int i = 0;i < list-> position;i++)
	{
		if (list->Element [i] != -9999)
		{
			cout << list->Element[i] << endl;
		}

	}
}
void main()
{
	ArrayList A;
	insert(&A, 20);
	insert(&A, 30);
	insert(&A, 50);
	insert(&A, 60);
	insert(&A, 76);
	remove(&A, 1);
	display(&A);
}