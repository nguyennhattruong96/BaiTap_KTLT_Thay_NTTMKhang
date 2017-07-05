#include "BaiTap_KTLT_064.h"


int Input(string sMessage)
{
	int n;
	do
	{
		cout << sMessage;
		cin >> n;
		if (n < 0)
		{
			cout << "so ban nhap la so nho hon 0 hay nhap vao so lon hon 0" << endl;
		}
	} while (n < 0);
	return n;
}

void Output(int n)
{
	cout << "ket qua la:" << n << endl;
}

void GiaiPhuongTrinhBacNhat(float a, float b)
{
	float x;
	if (a==0)
	{
		if (b == 0)
		{
			cout << "Phuong Trinh Vo So Nghiem" << endl;
		}
		else
		{
			cout << "Phuong Trinh Vo Nghiem" << endl;
		}
	}
	else
	{
		if (b==0)
		{
			cout << "Phuong Trinh co Nghiem la 0" << endl;
		}
		else
		{
			x = (-b / a);
			cout << "Phuong Trinh Co 1 Nghiem la: " << x  << endl;
		}
	}
}
