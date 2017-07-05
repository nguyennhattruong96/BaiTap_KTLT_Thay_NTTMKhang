#include "BaiTap_KTLT_085.h"


int Input(string sMessage)
{
	int n;
	do
	{
		cout << sMessage;
		cin >> n;

		if (n < 0)
		{
			cout << "so ban nhap la so am hay nhap lai";
		}
	} while (n < 0);
	return n;
}

void Output(int n)
{
	cout << "ket qua la:" << n << endl;
}

void Sum(int x)
{
	double s = 0;
	for (int i = 0; i <= x; i++)
	{
		s += 1.0 / (2 * i + 1);
	}
	cout << "ket qua la: " << s << endl;
}

