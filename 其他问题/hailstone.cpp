#include <iostream>
#define N 7
using namespace std;
//hailstone问题
int main()
{
    int length=0,n = N;
    while(n > 1){ cout << n << " ";n = (n % 2) ?  n*3+1 : n / 2; length++;}

    cout << endl << "长度" << length << endl;
    return 0;
}
