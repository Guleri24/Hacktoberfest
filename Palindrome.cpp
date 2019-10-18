#include<iostream>
using namespace std;
void printPascal(int n)
{
	for (int i = 1; i <= n; i++)
	{
		int C = 1;

		for (int j = 1; j < (n - i + 1); j++){
			cout << " ";
		}

		for (int k = 1; k <= i; k++)
		{
			cout << C << " ";
			C = C * (i - k) / k;
		}

		cout << "\n";
	}
}
int main()
{
    printPascal(15);
    

    return 0;
}
