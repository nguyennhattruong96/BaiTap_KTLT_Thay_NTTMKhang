#include "BaiTap_KTLT_097.h"

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void main()
{
	int x = Input ("Nhap vao x: ");
	int n = Input ("Nhap vao n: ");
	
	if (x == 0 && n == 0)
	{
		cout << "Ket qua la: " << "1" << endl;
	}

	else
	{
		cout << "Ket qua la : " << Sum(x, n) << endl;
	}

	system("pause");
}