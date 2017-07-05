#include"BaiTap_KTLT_035.h"

void main()
{
	int x = Input("nhap vao so x:");
	if (x == false)
	{
		cout << "khong co ket qua ";
	}
	else
	{
		cout << "ket qua la:" << sum(x) << endl;
	}
}