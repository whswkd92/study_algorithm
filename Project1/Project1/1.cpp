#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

int main(){

	freopen("robot.txt", "r", stdin);

	int M,n;
	cin >>M >> n;

	char a[4];
	int key;
	
	int x=0, y = 0;
	int turn = 44;

	for (int i=0; i < n; i++)
	{
		cin >> a[0]>>a[1]>>a[2]>>a[3] >> key;

		if (a[0] == 'M'){
			if (turn % 4 == 0)
				x = x + key;
			else if (turn % 4 == 1)
				y = y + key;
			else if (turn % 4 == 2)
				x = x - key;
			else if (turn % 4 == 3)
				y = y - key;
		}
		else if (a[0] == 'T'){
			if (key == 0)
				turn++;
			else if (key == 1)
				turn--;
		}


		if (x < 0 || y < 0 || x > M || y > M){
			cout << -1; 
			turn = 10000;
			break;
		}
	}

	if (turn != 10000)
		cout << x<< " " << y;

	cout << endl;

	return 0;

}

