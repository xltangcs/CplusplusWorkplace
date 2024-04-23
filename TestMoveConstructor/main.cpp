#include <iostream>
using namespace std;

class MyClass
{
public:
    MyClass()
    {}

    // 我们定义了移动构造函数，这会禁止编译器自动生成移动赋值运算符，并且对移动赋值运算符的调用会产生编译错误
    //MyClass(MyClass&& rValue) noexcept
    //{

    //}
};

int main()
{
    int a = 10;
    int b = 20;
    int&& c = a + b;
    c = 60;
    cout << &c;
    //int&& d = a;
}
