#include<iostream>
#include<cmath>
#define f(A,B,C) ((A+B+C)*.5) 
#define area(A,B,C,s) sqrt(s*(s-A)*(s-B)*(s-C))

int main(){
	int a, b, c;
	std::cin >> a>> b>> c;
	double d = f(a, b, c);
	std::cout << area(a, b, c, d)<<std::endl;
	return 0;
}
