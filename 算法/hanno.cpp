#include<iostream>
using namespace std;

void hano(int A,int B,int C,int n){
	if(n==1)
		cout<< A << "->" << C <<endl;
	else{
		hano(A,C,B,n-1);
		cout << A << "->" << C <<endl;
		hano(B,A,C,n-1);
	}
	
}

int main(int argc,char* argv[]){
	int n;
	cin >> n;
	hano(1,2,3,n);
	return 0;
}
