#include "BaiTap_KTLT_160.h"


int Input (string sMessage)
{
	int n;

	do
	{
		cout << sMessage;
		cin >> n;

		if (n <= 0 || n > 12)
		{
			cout << "Thang Nhap Vao Khong Co Xin Nhap Lai" << endl;
		}

	} while (n <= 0 || n > 12);

	return n;
}


void Output (int n)
{
	cout << "Ket qua la: " << n << endl;
}

void KiemTraQuy (int thang)
{
	if (thang == 1 || thang == 2 || thang == 3)
	{
		cout << "Thang Nay La Thang Cua Quy 1" << endl;
	}

	if (thang == 4 || thang == 5 || thang == 6)
	{
		cout << "Thang Nay La Thang Cua Quy 2" << endl;
	}

	if (thang == 7 || thang == 8 || thang == 9)
	{
		cout << "Thang Nay La Thang Cua Quy 3" << endl;
	}

	if (thang == 10 || thang == 11 || thang == 12)
	{
		cout << "Thang Nay La Thang Cua Quy 4" << endl;
	}
}
