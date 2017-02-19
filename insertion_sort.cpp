#include<iostream>
using namespace std;
int main(){
	int A[]= {40, 30, 20, 50, 10};
	int w=1, x, y, z=5;
	
	cout<<"Array: ";
	for(int k=0; k<5; k++)
		cout<<A[k]<<" ";
		cout<<endl<<endl;
	
	for (int i=1; i<5; i++){
		int j, temp=A[i];
		for(j=i-1; j>=0 && temp<A[j]; j--){
			A[j+1] = A[j];
			x=A[j];
			y=temp;
			
		}
		A[j+1] = temp;
		cout<<endl;
		cout<<"Swapped: "<<x<<" and "<<y<<endl;
			
		cout<<"Pass "<<w++<<": ";
		for (int k=0; k<z; k++){
			cout<<A[k]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
