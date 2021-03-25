#include <iostream>
using namespace std;
long F(int n) {
    if(n == 0) return 0;
    if(n == 1) return 1;
    return F(n - 1) + F(n - 2);
}

int main()
{
    int n = 1000;
    F(n);
    while(1 > 0){
        if(n == 1) {break;}
        int i = 0; 
        int j = 1;
        n = (n- i) + (n - j);
        i++; j++; 
    }

    return 0;
}
// ta thay ham de quy chay lau hon vong lap while
