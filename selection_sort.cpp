#include<iostream>
using namespace std;
int main()
{
	int A[]={30, 40, 20, 50, 10};
	int i, n, j;
	for(int i=5; i>3; i--)
	{
		int min=A[i], index=i;
		for(int j=i+1; j<5; j++)
		{
			if (A[j] < min)
			{
				min = A[j];
				index = j;
			}
			A[index]=A[i];
			A[i]=min;
		}
	}
		
	cout<<"1st Pass: ";
	for (int i=0; i<5; i++)
	{
		cout<<A[i]<<" ";
	}
	return 0;
}
