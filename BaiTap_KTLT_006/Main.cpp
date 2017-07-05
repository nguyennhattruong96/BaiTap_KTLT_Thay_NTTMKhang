#include "BaiTap_KTLT_006.h"

void main()
{
	int x = Input("nhap vao so x:");
	if (x == false)
	{
		cout << "khong co ket qua " << endl;
	}
	else
	{
		cout << "ket qua la:" << Sum(x) << endl;
	}
}