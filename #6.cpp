#include <iostream>

using namespace std;

int main()
{
    int n, k = 1, a = 1, b = 1, c = 0;
    cin >> n;
    while(a<n)
    {
        a = b+c;
        c = b;
        b = a;
        k += 1;
    }
    cout << k;
}
