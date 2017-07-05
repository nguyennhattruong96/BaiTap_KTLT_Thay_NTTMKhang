#include "BaiTap_KTLT_066.h"


int Input(string sMessage)
{
	int n;
	cout << sMessage;
	cin >> n;
	return n;
}

void Output(int n)
{
	cout << "ket qua la:" << n << endl;
}

void GiaiPhuongTrinhBacBon(float a, float b, float c)
{
	float delta, t1, t2, x1, x2, x3, x4;

	delta = ((b * b) - (4.0 * a * c));
	if (delta < 0)
		cout << "Phuong trinh vo nghiem !!!" << endl;
	else
	{
		if (delta == 0)
		{
			//Phuong trinh at^2 + bt + c = 0 co nghiem kep
			t1 = -b / (2.0*a);
			if (t1 > 0)
			{
				x1 = sqrt(t1);
				cout << "Phuong trinh co 1 nghiem x = " << x1 << endl;
			}
			else
			{
				cout << "Phuong trinh vo nghiem !!!" << endl;
			}
		}
		else
		{
			//Phuong trinh at^2 + bt + c = 0 co 2 nghiem phan biet
			t1 = (-b + sqrt(delta)) / (2.0 * a);
			if (t1 > 0)
			{
				x1 = sqrt(t1);
				cout << "Phuong Trinh co nghiem :" << x1 << endl;
			}
			else
			{
				cout << "Phuong Trinh Vo Nghiem" << endl;
			}
			t2 = (-b - sqrt(delta)) / (2.0 * a);
			if (t2 > 0)
			{
				x2 = sqrt(t2);
				cout << "Phuong Trinh co nghiem :" << x2 << endl;
			}
			else
			{
				cout << "Phuong Trinh Vo Nghiem" << endl;
			}
		}
	}
}