#include <iostream>
using namespace std;
void nhapmang(double a[][100], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
}
void timmax(double a[][100], int m, int n)
{
    double x;
    int k = 0;
    for (int j = 0; j < n; j++)
    {
        x = a[k][j];
        for (int i = 0; i < m; i++)
        {
            if (a[i][j] > x)
                x = a[i][j];
        }
        cout << "Gia tri lon nhat tren cot " << j << " la: " << x << "\n";
        k++;
    }
}
int main()
{
    int m, n;
    double a[100][100];
    cin >> m >> n;
    nhapmang(a, m, n);
    timmax(a, m, n);
    return 0;
}