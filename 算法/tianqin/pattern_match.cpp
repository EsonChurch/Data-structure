#include <iostream>

using namespace std;

void match(char str[], char pattern[]){
	for(int i = 0; str[i]!='\0'; ++i){
		for(int  j = 0; pattern[j]!='\0'; ++j){
			if(str[i+j]==pattern[j]){
				if(pattern[j+1]=='\0'){
					cout << "match in " << i << endl;
					break;
				}
				continue;
			}
			break;
		}
	}	

}

int main(){
	char str[] = "ABABCABCACBAB";
	char pattern[] = "ABCAC";
	
	match(str,pattern);
	
	return 0;
}
