#include"ThuaSoNguyenTo.h"

int main()
{
	CStack s;
	int n;

	cout << "\nNhap n: ";
	cin >> n;

	s.Init();

	s.Input(n);

	cout << n << " = ";
	s.Output();

	return 0;
}