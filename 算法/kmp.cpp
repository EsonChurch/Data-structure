#include <iostream>
#include <string>
#include <assert.h>

using namespace std;


int* getNext(string P){
	int *next = new int[P.length()];
	next[0] = 0;
	for(int i = 1; i < P.length(); i++){
		if(P[i] == P[next[i-1]]){
			next[i] = next[i-1] + 1;
		}
		else if(P[i] == P[0])
			next[i] = 1;
		else
			next[i] = 0;
	}
	return next;
}
int KMP(string text, string pattern, int* next){
	int cmp = 0;
	for(int i = 0, j = 0; i < text.length(); i++){
		cmp++;
		if(text[i] == pattern[j]){
			if(j == pattern.length() - 1){
				cout << "cmp = " << cmp << endl;
				return i - pattern.length() + 1;
			}
			j++;

		}else{
			if (j > 0){
				i--;
				j = next[j - 1];
			}

		}

	}

	return -1;
}
int main(){
	string text = "BAAABBBCDDDCCHHHHBBBAAABBBAADD";
	string pattern = "BAAABBBAA";
	int* next = getNext(pattern);
	cout << "Next: ";
	for (int i = 0; i < pattern.length(); i++ ){
		cout << next[i] << " ";
	}
	cout << endl;
	int n = KMP(text, pattern, next);
	cout << "match in :" << n << endl;
	int m = pattern.length();
	while(m-- > 0){
		cout << text[n++];
	}


	return 0;
}

