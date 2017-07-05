#include "BaiTap_KTLT_001.h"

int Input(string sMessage)
{
	int n;
	do
	{
		cout << sMessage;
		cin >> n;
		if (n < 0)
		{
			cout << "phai nhap vao so lon hon 0" << endl;
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
		cout << "khong co ket qua";
	}
	else
	{
			int s = 0; 
			for (int i = 1; i <= n; i++)
			{
				s = s + i;
			}
			cout << "ket qua la:" << s << endl;
	}

}