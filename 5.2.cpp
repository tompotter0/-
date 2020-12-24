#include<iostream>
int a[111];

int main(){
	for (int i = 1; i <= 10; i++)std::cin >> a[i];
	for (int i = 1; i <= 10; i++){
		int k = i;
		for (int j = i+1; j <= 10; j++){
			if (a[j] < a[k])k = j;
		}
		if (i != k){
			a[i] ^= a[k];
			a[k] ^= a[i];
			a[i] ^= a[k];
		}
	}
	for (int i = 1; i <= 10; i++){
		std::cout << a[i] << "\t";
	}
	return 0;
}