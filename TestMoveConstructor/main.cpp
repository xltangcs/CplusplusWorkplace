#include <iostream>
using namespace std;

class MyClass
{
public:
    MyClass()
    {}

    // ���Ƕ������ƶ����캯��������ֹ�������Զ������ƶ���ֵ����������Ҷ��ƶ���ֵ������ĵ��û�����������
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
