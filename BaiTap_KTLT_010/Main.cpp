#include "BaiTap_KTLT_010.h"

#include<iostream>
#include<string>

using namespace std;

void main()
{
	int x = Input("Nhap vao x: ");
	int n = Input("Nhap vao n: ");

	cout << "ket qua la:" << LuyThua(x, n) << endl;

	system("pause");
	
}