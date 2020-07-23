#include <iostream>

using namespace std;

int gcd(int x, int y);
int lcm(int x, int y);

int main()
{
	int x, y;	// 10,000 이하의 자연수 입력
	
	cin >> x >> y;

	cout << gcd(x, y) << endl;
	cout << lcm(x, y) << endl;

	return 0;
}

int gcd(int x, int y)
{
	int remainder;

	while (y != 0)
	{
		remainder = x % y;
		x = y;
		y = remainder;
	}

	return x;
}

int lcm(int x, int y)
{
	return x * y / gcd(x, y);
}
