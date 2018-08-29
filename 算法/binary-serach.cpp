#include <iostream>

using namespace std;
int main(){
	int length = 8;
	int low = 0,high = length,mid;
	int array[] = {15,17,18,22,35,51,60,88,93};
	int find;
	cin >> find;
	for(;low <= high;){
		mid = (low + high)/2;
		if(array[mid] == find){
			cout << "find in " << mid << endl;
			break;
		}else if(array[mid] > find){
			high = mid - 1;
		}else{
			low = mid + 1;
		}
	}
	if (low > high)
		cout << "not found";
	return 0;
}
