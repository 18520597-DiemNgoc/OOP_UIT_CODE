#include <iostream>

using namespace std;

struct node
{
    int data;
    struct node* pNext;
};
typedef struct node NODE;

struct stack
{
    NODE* pTop;
};
typedef struct stack STACK;

void Init(STACK& s);
NODE* getNode(int x);
int Isempty(STACK s);
bool Push(STACK& s, int x);
bool Pop(STACK& s);
int Top(STACK& s, int& x);
void ChuyenCoSo(STACK& s, int cosocandoi, int hethapphan);
void Output(STACK& s);


int main()
{
    STACK s;
    Init(s);

    int hethapphan;
    cout << "\nNhap gia tri he thap phan can chuyen: ";
    cin >> hethapphan;

    int cosocandoi;
    cout << "\nNhap co so can doi(2, 8, 16): ";
    cin >> cosocandoi;

    cout << "\n\nKet qua: ";
    ChuyenCoSo(s, cosocandoi, hethapphan);

    Output(s);

    return 0;
}

void Init(STACK& s) {
    s.pTop = NULL;
}

NODE* getNode(int x) {
    NODE* p = new NODE();

    if (p == NULL) {
        return NULL;
    }

    p->data = x;
    p->pNext = NULL;

    return p;
}

int Isempty(STACK s) {
    if (s.pTop == NULL)
        return 1;

    return 0;
}

bool Push(STACK& s, NODE* p) {
    if (p == NULL)
        return false;
    
    if (Isempty(s) == 1)
        s.pTop = p;
    else {
        p->pNext = s.pTop;
        s.pTop = p;
    }

    return true;
}

bool Pop(STACK& s, int& x) {
    if (Isempty(s) == 1) 
        return false;

    NODE* p = s.pTop;
    x = p->data;
    s.pTop = s.pTop->pNext;

    return true;
}

int Top(STACK& s, int& x) {
    if (Isempty(s) == 1)
        return 0;

    x = s.pTop->data;
    return 1;
}


void ChuyenCoSo(STACK& s, int cosocandoi, int hethapphan) {
    while (hethapphan != 0) {
        int x = hethapphan % cosocandoi;
        NODE* p = getNode(x);
        Push(s, p);
        hethapphan /= cosocandoi;
    }
}

void Output(STACK& s) {
    while (Isempty(s) == 0) {
        int x;
        Pop(s, x);
        if (x < 10)
            cout << x;
        else {
            if (x == 10)
                cout << "A";
            else if (x == 11)
                cout << "B";
            else if (x == 12)
                cout << "C";
            else if (x == 1)
                cout << "D";
            else if (x == 14)
                cout << "E";
            else if (x == 15)
                cout << "F";
        }
    }
}

