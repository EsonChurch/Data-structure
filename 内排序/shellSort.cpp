#include <iostream>

using namespace std;
void PrintArray(int Array[],int n){
	for(int i = 0; i < n; i++)
		cout <<Array[i]<<" ";
	cout <<endl;
}
void swap(int Array[],int i,int j){
	int tmp = Array[i];
	Array[i] = Array[j];
	Array[j] = tmp;


}
//间隔为delte的插入排序
void ModInsSort(int Array[], int n, int delta){
	int i, j;
	for (i = delta; i < n; i += delta)
		for (j = i; j >= delta; j -= delta){
			if (Array[j] < Array[j-delta])
				swap(Array,j,j-delta);	
			else
				break;
		}

}
void ShellSort(int Array[],int n){
	int i,delta;
	for (delta = n/2; delta > 0; delta /= 2){ //delta每次减半
		for ( i = 0; i < delta; i++)	 //对每个子序列进行插入排序i
			 //注意此时Array[i]作为子序列的Array[0]
			ModInsSort(&Array[i], n-i, delta);
		cout << "delta=" << delta << " ：";
		PrintArray(Array,n);
	}
	
}
int main(){
	int testArray[] = {45, 34, 78, 12, 34, 32, 29, 64};
	cout << "测试数组：";
	PrintArray(testArray, 8);
	ShellSort(testArray, 8);
	PrintArray(testArray, 8);
	return 0;
}


