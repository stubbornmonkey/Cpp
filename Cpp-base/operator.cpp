#include<iostream>
using namespace std;
int main() 
{
    int a = 10;
    int b = 3;
    //加法
    cout<< a + b << endl;//15
    //减法
    cout<< a - b << endl;
    //乘法
    cout<< a * b << endl;
    //除法
    cout<< a / b << endl;//保留商除去余数

    double b1 = 0.5;
    double b2 = 0.25;
    cout<< b1 / b2 << endl;//2结果是整数
    double c1 = 0.7;
    double c2 = 0.3;
    cout<< c1 / c2 << endl;//结果是2.33333其实是一个无限不循环小数，根据c++的规则保留了6位有效数字

    //自增（减）运算符
    //前置递增
    ++a;
    cout<< "a =" << a <<endl;//11
    //后置递增
    a++;
    cout<< "a = " << a <<endl; //12

    //前置递增:先进行递增运算在进行式子的运算
    int res = ++a * 10;
    cout<< "res = " << res << endl;//130
    cout<< "a = " << a << endl;//13
    

    res = a++ * 10;
    cout<< "res =" << res <<endl;//130
    cout<< "a = " << a << endl;//14
    system("pause");
    return 0;
}