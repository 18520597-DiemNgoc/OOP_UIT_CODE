#include"ThuaSoNguyenTo.h"

void CStack::Init() {
	s.pHead = s.pTail = NULL;
}

bool CStack::IsEmpty(STACK s) {
	if (s.pHead == NULL)
		return true;

	return false;
}

NODE* CStack::KhoiTaoNode(int x) {
	NODE* Top = new NODE;

	if (Top == NULL) exit(1);
	Top->Data = x;
	Top->pNext = NULL;

	return Top;
}

void CStack::Push(STACK& s, int x) {
	NODE* Top = KhoiTaoNode(x);

	if (IsEmpty(s))
		s.pHead = s.pTail = Top;
	else {
		Top->pNext = s.pHead;
		s.pHead = Top;
	}
}

int CStack::Pop(STACK& s) {
	if (!IsEmpty(s)) {
		NODE* Top = s.pHead;
		s.pHead = s.pHead->pNext;
		return Top->Data;
		delete Top;
	}

	return 0;
}

void CStack::Input(int n) {
	int dem;

	for (int i = 2; i <= n; i++) {
		dem = 0;

		while (n % i == 0) {
			++dem;
			n /= i;
		}

		if (dem) {
			for (int j = 0; j < dem; j++) {
				Push(s, i);
			}
		}
	}
}

void CStack::Output()
{
	if (!IsEmpty(s)) {
		int dem = 0;

		for (NODE* Top = s.pHead; Top != NULL; Top = Top->pNext) {
			if (dem == 0) {
				cout << Top->Data;
				dem++;
			}
			else cout << " * " << Top->Data;
		}
	}
}
