#include <iostream>

using namespace std;
void PrintArray(int Array[],int n){
	for(int i=0; i<n; i++)
		cout <<Array[i]<<",";
	cout <<endl;
}
void InsertSort(int Array[], int n){
	int tmp, i ,j;
	for (i = 1; i < n; i++){

		tmp = Array[i];   //保存当前插入值
		j = i - 1;	  
		//寻找插入位置j，并把比插入值大的元素后移
		while (j >= 0 && tmp < Array[j]){
			Array[j+1] = Array[j];
			j--;
		}
		Array[j+1] = tmp;  //插入
		cout << "第" << i <<"轮：";
		PrintArray(Array, n);
	}
}
int main(){
	int testArray[] = {45, 34, 78, 12, 34, 32, 29, 64};
	cout << "测试数组：";
	PrintArray(testArray, 8);
	InsertSort(testArray, 8);
	return 0;
}


