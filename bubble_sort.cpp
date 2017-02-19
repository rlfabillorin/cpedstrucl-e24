#include<iostream>
using namespace std;
int main(){
	int A[]={35, 10, 55, 20, 5};
	int n=1, swap;

	cout<<"Array: ";
	for(int k=0; k<5; k++)
		cout<<A[k]<<" ";
		cout<<endl<<endl;

	for (int i=5; i>1; i--){
		for(int j=0; j<i-1; j++){
			if(A[j]>A[j+1]){
				swap=A[j];
				A[j]=A[j+1];
				A[j+1]=swap;
			}
		}
		cout<<endl;
		for(int j = 0; j<i-1; j++)
			cout<<"Swapped: "<<A[j]<<" and "<<A[j+1]<<endl;
	
		cout<<"Pass "<<n++<<": ";
		for(int k=0; k<5; k++)
			cout<<A[k]<<" ";
			cout<<endl;
	}
	return 0;
}
