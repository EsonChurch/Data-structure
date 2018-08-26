#include <iostream>

using namespace std;
void swap(int &a,int &b){
    a = a + b;
    b = a - b;
    a = a - b;
}
void bublesort(int A[], int n){
    for (bool sorted = false; sorted = !sorted; n--)
        for (int i = 1; i < n; i++)
            if (A[i-1] < A[i]){
                    swap(A[i-1],A[i]);
                    sorted = false;
            }


}
int main()
{
    int A[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    bublesort(A,9);
    for (int i = 0; i < 9; i++)
        cout << A[i] << " ";
    return 0;
}

