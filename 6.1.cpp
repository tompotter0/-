#include<iostream>
#include<algorithm>

using namespace std;
int a[10];
int main(){
	for (int i = 0; i < 3; i++)cin >> a[i];
	sort(a, a + 3);
	for (int i = 0; i < 3; i++)cout << a[i]<<"\t";
	return 0;
}