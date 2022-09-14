#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double num = 9.00000000000000000001e100;

	cout << scientific << setw(20) << setprecision(100) << num;

	return 0;
}