#include<iostream>
int p[111];
void shai(){
	for (int i = 2; i <= 100; i++)p[i] = 1;
	for (int i = 2; i <= 100; i++)if (p[i]){
		std::cout << i << "\t";
		for (int j = i + i; j <= 100; j += i)p[j] = 0;
	}
}
int main(){
	shai();
	return 0;
}