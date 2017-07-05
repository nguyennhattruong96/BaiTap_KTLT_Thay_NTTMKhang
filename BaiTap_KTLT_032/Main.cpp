#include"BaiTap_KTLT_032.h"

void main()
{
	int x = Input("nhap vao x:");
	if (KiemTraSoChinhPhuong(x))
	{
		cout << x << "la so chinh phuong" << endl;
	}
	else
	{
		cout << x << "khong la so chinh phuong" << endl;
	}
	system("pause");
}