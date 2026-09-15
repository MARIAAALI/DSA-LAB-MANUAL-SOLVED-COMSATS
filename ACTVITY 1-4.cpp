#include <iostream>
using namespace std;
 //Activity 1
void activity1()
{
	cout<<"Activity 1" <<endl;
	int A[5] = { 1,2,3,4,5 };
	for (int i = 0; i < 5;i++)
	{
		cout << A[i] << endl;
	}
	
}
//ACTIVITY 1
void display(int A[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << A[i] << endl;
	}
}
void activity2()
{
	cout << "Activity 2"<<endl;
	int A[5] = { 2,25,3,4,53 };
	display(A, 5);
}
//ACTIVITY 2

void swap(int A[], int i, int j)
{
	int temp = A[i];
	A[i] = A[j];
	A[j] = temp;
}

void activity3()

{
	cout << "Activity 3";
	int Abc[3] = { 1,2,3 };
	display(Abc,3);
	swap(Abc,1,2);
	display(Abc, 3);
	
}
const int Max_size = 10;//Max size that can be used throughout the package
int A[Max_size];//Integer array with 10 positions
int position = 0;//to insert the first value 0-9
void insert(int A[], int value)
{
	if (position < Max_size)
	{
		A[position++] = value;
		//Pehle value jae gi
		//phir position me increment hoga automatically
	}
}
void activity4()
{
	cout << "Activity 4" << endl;
	insert(A, 10);
	insert(A, 20);
	insert(A, 30);
	insert(A, 40);
	insert(A, 50);
	display(A, 5);

}
//ACTIVITY 4
int main()
{
	activity1();
	activity2();
	activity3();
	activity4();

}