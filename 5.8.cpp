#include<iostream>
using namespace std;
int a[1100][1100],n,m ;

int main(){
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	for (int j = 1; j <= m; j++){
		cin >> a[i][j];
	}
	for (int j = 0; j <= m; j++)a[0][j] = (1 << 30);
	for (int i = 1; i <= n; i++)
	for (int j = 1; j <= m; j++){
		if (a[i][j] > a[i][0])a[i][0] = a[i][j];
		if (a[i][j] < a[0][j])a[0][j] = a[i][j];
	}
	for (int i = 1; i <= n; i++)
	for (int j = 1; j <= m; j++)
	if (a[i][j] == a[i][0] && a[i][j] == a[0][j])cout << "(" << i << "," << j << ")" << "\n";
	return 0;
}