#include "BaiTap_KTLT_088.h"


int Input(string sMessage)
{
	int n;
	do
	{
		cout << sMessage;
		cin >> n;

		if (n < 0)
		{
			cout << "so ban nhap la so am hoac so 0 hay nhap lai";
		}
	} while (n < 0);
	return n;
}

void Output(int n)
{
	cout << "ket qua la:" << n << endl;
}

void Tich(int x)
{
	int s = 1;
	for (int i = 1; i <= x; i++)
	{
		s = s*i;
	}
	cout << "ket qua la: " << s << endl;
}

