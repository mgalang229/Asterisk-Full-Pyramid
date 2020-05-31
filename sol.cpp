#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int r = 10;
	for(int i = 1, k = 0; i <= r; i++, k = 0){
		for(int j = 1; j <= r-i; j++){
			cout << "  ";
		}
		while(k != 2*i-1){
			cout << "* ";
			k++;
		}
		cout << "\n";
	}
	return 0;
}
