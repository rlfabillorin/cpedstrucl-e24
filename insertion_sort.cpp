#include<iostream>
using namespace std;
int main(){
	int A[]= {40, 30, 20, 50, 10};
	int i, n, j, temp;
	for (i=1; i<5; i++){
		int temp=A[i];
		for(j=i-1; j>=0 && temp<A[j]; j--){
			A[j+1] = A[j];
		}
		A[j+1] = temp;
		}
	cout<<"Sorted Array: ";
	for (int i=0; i<5; i++){
		cout<<A[i]<<" ";
	}
	return 0;
}
