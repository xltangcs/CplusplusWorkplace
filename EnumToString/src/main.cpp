#include <iostream>
using namespace std;

#define offsetof(A,m) (int)(&((A*)0)->m)

struct A {
    int p1;
    int p2;
    void func(int i) {
        cout << i << endl;
    }
};

//这一行是获取变量p2的偏移，换算到UE中，这一行就是UHT帮忙自动生成的。

int param_p2_offset = offsetof(A, p2);

void (A:: * func_ptr)(int) = &A::func;
​
int main()
{
    A a = { 10,100 };
    void* param_p2_addr = (char*)&a + param_p2_offset;
    cout << *(int*)param_p2_addr;

    (a.*func_ptr)(-1);
}