#include <iostream>

using namespace std;



int main(){
	int array[] = {0,17,35,22,18,93,60,88,52};
	int i=8;
	cin >> array[0];
	for(;;i--)
		if(array[i] == array[0])
			break;
	i == 0 ? cout << "no found!" : cout << i;

	return 0;
}
