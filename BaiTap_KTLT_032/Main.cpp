#include"BaiTap_KTLT_032.h"

#include <iostream>
#include <string>
#include <math.h>

using namespace std;

void main()
{
	int x = Input ("nhap vao x: ");

	if (KiemTraSoChinhPhuong ( x ) )
	{
		cout << x << " La so chinh phuong" << endl;
	}

	else
	{
		cout << x << " Khong la so chinh phuong" << endl;
	}

	system("pause");
}