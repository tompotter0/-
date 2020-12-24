#include<iostream>
int a[111];
int n;
int main(){
	std::cin >> n;
	for (int i = 1; i <= n; i++)std::cin >> a[i];
	std::cin >> a[n + 1];
	for (int i = n; i; i--){
		if (a[i] > a[i + 1]){
			a[i] ^= a[i + 1];
			a[i + 1] ^= a[i];
			a[i] ^= a[i + 1];
		}
	}
	for (int i = 1; i <= n + 1; i++){
		std::cout << a[i] << "\t";
	}
	return 0;
}