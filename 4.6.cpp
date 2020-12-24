#include<iostream>
using namespace std;
double calc(double x){
	double y = x*x*x + 2 * x*x + 3 * x + 4;
	if (y < 1e-5 && (-y) < 1e-5) return x;
	double dx = y / (3 * x*x + 4 * x + 3);
	return calc(x - dx);
}
int main(){
	cout << calc(1);
	return 0;
}
