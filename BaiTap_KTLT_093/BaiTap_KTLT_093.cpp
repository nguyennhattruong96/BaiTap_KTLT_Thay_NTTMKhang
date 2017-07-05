#include "BaiTap_KTLT_093.h"


int Input(string sMessage)
{
	int n;
	do
	{
		cout << sMessage;
		cin >> n;

		if (n < 0)
		{
			cout << "so ban nhap la so am hoac 0 hay nhap lai";
		}
	} while (n < 0);
	return n;
}

void Output(int n)
{
	cout << "ket qua la:" << n << endl;
}

void Sum(int x, int n)
{
	double s = 0;

	for (int i = 0; i <= n; i++)
	{
		s += pow(x, (2 * i + 1));
	}
	cout << "ket qua la: " << s << endl;
}

