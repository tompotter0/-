#include<iostream>
int a[111];

int main(){
	for (int i = 1; i <= 9; i++)std::cin >> a[i];
	std::cout << a[1] + a[5] + a[9];
	return 0;
}