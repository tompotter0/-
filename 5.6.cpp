#include<iostream>
int a[11][11];

int main(){
	a[1][1] = 1;
	std::cout << "1\n";
	for (int i = 2; i <= 10; i++){
		for (int j = 1; j <= i; j++){
			a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
			std::cout << a[i][j] << "\t";
		}
		std::cout << "\n";
	}
	return 0;
}
