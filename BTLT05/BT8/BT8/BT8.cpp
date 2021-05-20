#include <iostream>

#define Max 100

using namespace std;

typedef int item;
struct Queue
{
    int Front, Rear;
    item Data[Max];
    int count;
};

void Init(Queue& Q) {
    Q.Front = 0;
    Q.Rear = -1;
    Q.count = 0;
}

int IsEmpty(Queue Q) {
    if (Q.count == 0)
        return 1;

    return 0;
}

int IsFull(Queue Q) {
    if (Q.count == Max)
        return 1;

    return 0;
}

void Push(Queue& Q, item x) {
    if (IsFull(Q))
        cout << "Hang doi day !";
    else {
        Q.Data[++Q.Rear] = x;
        Q.count++;
    }
}

int Pop(Queue& Q) {
    if (IsEmpty(Q))
        cout << "Hang doi rong !";
    else {
        item x = Q.Data[Q.Front];

        for (int i = Q.Front; i < Q.Rear; i++)
            Q.Data[i] = Q.Data[i + 1];

        Q.Rear--;
        Q.count--;

        return x;
    }
}

item Qfront(Queue Q) {
    if (IsEmpty(Q))
        cout << "Hang doi rong !";
    else
        return Q.Data[Q.Front];
}

void Push_Circular(Queue& Q, item x) {
    if (IsFull(Q))
        cout << "Hang doi day !";
    else {
        Q.Data[(++Q.Rear) % Max] = x;
        Q.count++;
    }
}

int Pop_Circular(Queue& Q) {
    if (IsEmpty(Q))
        cout << "Hang doi rong !";

    item x = Q.Data[Q.Front];
    Q.Front = (Q.Front++) % Max;
    Q.count--;

    return x;
}

void Input(Queue& Q) {
    int n;
    item x;
    do {
        cout << "Nhap so phan tu cua Queue: ";
        cin >> n;
    } while (n > Max || n < 1);

    for (int i = 0; i < n; i++) {
        cout << "Nhap phan tu thu " << i << " : ";
        cin >> x;
        Push(Q, x);
    }
}

void Output(Queue Q) {
    if (IsEmpty(Q))
        cout << "Hang doi rong !";
    else{
        for (int i = Q.Front; i <= Q.Rear; i++)
            cout << Q.Data[i] << endl;
    }
}

int main() {
    Queue Q;
    Init(Q);
    Input(Q);
    Output(Q);

    int lua_chon;
    cout << "1.Kiem tra Queue rong hay khong?" << endl;
    cout << "2.Kiem tra Queue day hay khong?" << endl;
    cout << "3.Them phan tu vao Queue." << endl;
    cout << "4.Xoa phan tu trong Queue." << endl;
    cout << "5.Xuat Queue." << endl;
    cout << "6.Thoat." << endl;
    do {
        cout << "Nhap lua chon cua ban: ";
        cin >> lua_chon;
        switch (lua_chon)
        {
        case 1: // if( luachon == 1)
        {
            if (IsEmpty(Q))
                cout << "Queue rong !" << endl;
            else
                cout << "Queue khong rong !" << endl;
            break;
        }
        case 2:// if( luachon == 2)
        {
            if (IsFull(Q))
                cout << "Queue day !" << endl;
            else
                cout << "Queue khong day !" << endl;
            break;
        }
        case 3: // if( luachon == 3)
        {
            item x;
            cout << "Nhap phan tu can chen vao Queue: ";
            cin >> x;
            Push(Q, x);
            Output(Q);
            break;
        }
        case 4:// if( luachon == 4)
        {
            Pop(Q);
            Output(Q);
            break;
        }
        case 5:
        {
            Output(Q);
            break;
        }
        case 6: break;
        }
    } while (lua_chon != 6);

    return 0;
}