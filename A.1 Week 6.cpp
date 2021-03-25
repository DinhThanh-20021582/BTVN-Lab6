#include <iostream>
using namespace std;
void xuat(int f[])
{
   cout << &f << endl; 
   cout << &f[0] << endl;
}

int main()
{
    int [4] = {1, 3, 4, 5};
    xuat(f);
    cout << &f << endl; 
    cout << &f[0] << endl;

    return 0;
}
// mang duoc truyen bang co che truyen tham so
// ta thay dia chi cua mang va phan tu dau tien trong ham main la giong nhau
