#include "BaiTap_KTLT_002.h"

int Input(string sMessage)
{
	int n;
	do
	{
		cout << sMessage;
		cin >> n;
		if (n < 0)
		{
			cout << "nhap vao so lon hon 0";
		}
	} while (n < 0);
	return n;
}

void Output(int n)
{
	cout << "ket qua la:" << n << endl;
}
void Sum(int n)
{
	if (n <= 0)
	{
		cout << "khong co ket qua ";
	}
	else
	{
		int s = 0;
		for (int i = 1; i <= n; i++)
		{
			s += i * i;
		}
		Output(s);
	}

}