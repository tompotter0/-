#include<iostream>
using namespace std;
char ch(int x){
	if (x == 1)return 'A';
	if (x == 2)return 'B';
	if (x == 3)return 'C';
}
void f(int n, int s, int t){
	if (n == 0)return;
	f(n - 1, s, 6 - s - t);
	cout << ch(s) << " to " << ch(t) << endl;
	f(n - 1,6 - s - t,t);
}

int main(){
	f(64, 1, 3);
	return 0;
}
