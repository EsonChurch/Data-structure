#include <iostream>
#include <string.h>
using namespace std;

int main(){
	string text = "abacaabacabacabaabb";
	string pattern = "abacab";
	int j;
	for (int i = 0; i < text.length(); i++){
		for (j = 0; j < pattern.length(); j++){
			if(text[i + j] != pattern[j])
				break;
		}
		if(j == pattern.length() && text[i + j - 1] == pattern[j - 1]){
			cout << "match in" << i << endl;
			break;
		}
	}


	return 0;
}
