#include <iostream>
using namespace std;
int main()
{
    int n{};
    cin >> n;
    while (n--)
    {
        string str;
        cin >> str;
        int x = str.length();
        if (x > 10)
        {
            cout << str[0] << x - 2 << str[x - 1] << endl;
        }
        else
        {
            cout << str << endl;
        }
    }
}