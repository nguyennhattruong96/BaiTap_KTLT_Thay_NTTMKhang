#include"BaiTap_KTLT_036.h"

void main()
{
	int x = Input("nhap vao x:");

	if (x == 1)
	{
		cout << "ket qua phep toan la 1" << endl;
	}
	else
	{
		cout << "ket qua la:" << Sum(x) << endl;
	}
	system("pause");
}