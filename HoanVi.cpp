#include <bits/stdc++.h>
using namespace std;
void Swap(int &x, int &y)
{
    int tg; //bien trung gian
    tg = x;
    x = y;
    y = tg;
}
void khoitaocauhinhbandau(int a[], int n)
{
    for (int i = 1; i <= n; i++)
        a[i] = i;
}
void incauhinh(int a[], int n)
{
    for (int i = n; i >=1; i--)
    cout << a[i];
    cout <<endl;
}
void sapxeptang (int a[], int n, int vt)
{
    for (int i = vt; i < n; i++)
    {
        for (int j = i+1; j <= n; j++)
        {
            if (a[i] > a[j])
                Swap(a[i],a[j]);
        }
    }
}
int main()
{
    int a[100];
    int n;
    cout << "Nhap n: ";
    cin >> n;
    khoitaocauhinhbandau(a,n);
    incauhinh(a, n);
    while(true)
    {
        int i;
        for (i =n; i > 0; i--) //duyet tu cuoi len 1 2 3 4, 4321
        {
            if (i==1) // neu duyet het day giam het roi
                return 0;//thi thoat ra vi no la cau hinh cuoi roi
            if (a[i-1] < a[i])
                break;
        }
        for (int j =n; j >= i; j--)
        {
            if (a[j] > a[i-1])
            {
                Swap(a[j],a[i-1]);//doi cho
                sapxeptang (a, n, i);
                incauhinh(a, n);
                break;
            }
        }
    }

}
