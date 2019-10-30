#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    for(int i = a; i<=b; i += 1)
    {
        for(int j = 0; j<i; j += 1)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}
