#include <iostream>

using namespace std;

int lcm(int x, int y);

int main()
{
	int T; cin >> T;

	while (T--)
	{
		int A, B;
		cin >> A >> B;

		cout << lcm(A, B) << endl;
	}

	return 0;
}

int lcm(int x, int y)
{
	int t_x = x, t_y = y;

	while (t_y != 0)
	{
		int r = t_x % t_y;
		t_x = t_y;
		t_y = r;
	}

	return x * y / t_x;
}