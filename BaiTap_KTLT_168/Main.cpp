#include "BaiTap_KTLT_168.h"

#include <iostream>
#include <string>
#include <math.h>

using namespace std;

void main()
{
	int x = Input ("Nhap vao x: ");

	if (KiemTraSoNguyenTo ( x ) )
	{
		cout << x << " La so nguyen to" << endl;
	}

	else
	{
		cout << x << " Khong la so nguyen to" << endl;
	}

	system("pause");
}