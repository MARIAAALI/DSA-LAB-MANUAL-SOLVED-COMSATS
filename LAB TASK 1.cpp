#include <iostream>
using namespace std;
 
const int max_students = 10;

struct marks
{
	int Element[max_students];
	int position=0;
};

void insert(marks* List, int value)
{
	if (List->position < max_students)
		if(value<15)
	{
		List->Element[ List->position++] = value;
	}
}
void average(marks* list)
{
	int sum = 0;
	for (int i = 0; i < list->position; i++)
	{ 
		sum += list->Element[i];

	}
	double average = (double) sum / list->position;
	cout << average;
}

void main()
{
	marks SM;
	insert(&SM, 10);
	insert(&SM, 10);
	insert(&SM, 12);
	insert(&SM, 14);
	insert(&SM, 12);
	insert(&SM, 12);
	average(&SM);
}
