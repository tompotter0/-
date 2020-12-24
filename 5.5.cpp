#include<iostream>
int a[111];
int n;
int main(){
	std::cin >> n;
	for (int i = 1; i <= n; i++)std::cin >> a[i];
	for (int i = n; i; i--)std::cout << a[i]<<"\t";
	return 0;
}