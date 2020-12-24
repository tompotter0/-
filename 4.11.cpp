#include<iostream>

int f(int x){
	if (x == 1)return 1;
	return x*x + f(x - 1);
}

int main(){
	int a;
	std::cin >> a;
	std::cout << f(a) << std::endl;
	return 0;
}
