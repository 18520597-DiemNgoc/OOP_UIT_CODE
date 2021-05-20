#include <iostream>

#define Max 100

using namespace std;

struct Stack
{
    int Top;
    int Data[Max];
};

void Init(Stack& S);
int Isempty(Stack S);
int Isfull(Stack S);
void Push(Stack& S, int x);
int Peak(Stack S);
int Pop(Stack& S);
void Input(Stack& S);
void Output(Stack S);

int main()
{
    Stack S;
    Init(S);
    Input(S);
    Output(S);
    return 0;
}

void Init(Stack& S)
{
    S.Top = 0;
}

int Isempty(Stack S)
{
    return (S.Top == 0);
}

int Isfull(Stack S)
{
    return (S.Top == Max);
}

void Push(Stack& S, int x)
{
    if (!Isfull(S))
    {
        S.Data[S.Top] = x;
        S.Top++;
    }
}

int Peak(Stack S)
{
    return S.Data[S.Top - 1];
}

int Pop(Stack& S)
{
    if (!Isfull(S))
    {
        S.Top--;
        return S.Data[S.Top];
    }
}

void Input(Stack& S)
{
    int n;
    int x;
    do
    {
        cout << "Nhap so phan tu cua Stack: ";
        cin >> n;
    } while (n > Max || n < 1);
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap phan tu thu " << i << ": ";
        cin >> x;
        Push(S, x);
    }
}

void Output(Stack S)
{
    cout << "\nCac gia tri phan tu duoc lay ra tu stack da nhap: ";
    for (int i = S.Top - 1; i >= 0; i--)
    {
        cout << S.Data[i] << " ";
    }
}
