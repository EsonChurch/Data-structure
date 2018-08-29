#include <iostream>
using namespace std;
int main(){
	int a[]={1,8,1,2,5,0,11,9},i,j,length,n=8;
	for (i=0,length=1;i<n-1;i++){
	
	  for (j = i+1;j<n && a[j-1]<=a[j];j++)
	
	    if(length<j-i+1)
	
	      length=j-i+1;
	
	}
	cout << length ;
}
