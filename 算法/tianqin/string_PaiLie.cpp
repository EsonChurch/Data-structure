#include <iostream>
using namespace std;

void swap(char &a,char &b){
    char tmp = a;
    a = b;
    b = tmp;

}

void pai(char str[], int k,int n){
    if (k == 0){
        for(int j = 0; j < n; j++)
            cout << str[j];
        cout<<endl;
    }else{
        for(int i = 0; i <=k; i++){
            swap(str[i],str[k]);
            pai(str,k-1,n);
            swap(str[i],str[k]);

        }

    }

}

int main()
{
    char str[]="ABCDEFGHIJKLMNOPQRSTUWXYZ";
    pai(str,2,3);
    return 0;
}

