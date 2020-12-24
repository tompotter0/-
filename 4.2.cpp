#include<iostream>
#include<cmath>
using namespace std;
double delta;
void bg(double x, double y, double z){
	cout << (-y + sqrt(delta)) / 2 / x << endl;
	cout << (-y - sqrt(delta)) / 2 / x << endl;
}
void eq(double x, double y, double z){
	cout << (-y) / 2 / x << endl;
}
void sm(double x, double y, double z){
	if (x < 0){
		x = -x;
		y = -y;
		z = -z;
	}
	cout << (-y) / 2 / x << "+" << sqrt(-delta) / 2 / x << "i" << endl;
	cout << (-y) / 2 / x << "-" << sqrt(-delta) / 2 / x << "i" << endl;
}

int main(){
	double a,b,c;
	cin >> a >> b>>c;
	delta = b*b - 4 * a*c;
	if (delta > 0)bg(a, b, c);
	else if (delta == 0)eq(a, b, c);
	else sm(a, b, c);

	return 0;
}