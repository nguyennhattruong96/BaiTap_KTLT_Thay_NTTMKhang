#include"BaiTap_KTLT_059.h"

void main()
{
	int x = Input("nhap vao x:");
	if (SoDoiXung(x))
	{
		cout << x << " la so doi xung" << endl;
	}
	else
	{
		cout << x << " khong la so doi xung" << endl;
	}
	system("pause");
}