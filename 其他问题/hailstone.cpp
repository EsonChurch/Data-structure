#include <iostream>
#define N 7
using namespace std;
//hailstone����
int main()
{
    int length=0,n = N;
    while(n > 1){ cout << n << " ";n = (n % 2) ?  n*3+1 : n / 2; length++;}

    cout << endl << "����" << length << endl;
    return 0;
}
