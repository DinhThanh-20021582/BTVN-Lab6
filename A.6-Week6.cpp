#include <iostream>
using namespace std;
int count = 0;
void check(int n)
{
    int array[5000];
    count++;
    cout << count << endl;
    check(n);
}

int main()
{
    int n;
    cin >> n;
    check(n);

    return 0;
}
//ham de quy sau tang thi bi tran bo nho
