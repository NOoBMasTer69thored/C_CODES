#include <iostream>
using namespace std;
class B
{
    int a;

public:
    int b;
    void set_ab();
    int get_a();
    void show_a(void);
};
class D : public B
{
    int c;

public:
    void mul(void);
    void display(void);
};
void B::set_ab()
{
    a = 5;
    b = 6;
}
int B::get_a()
{
    return a;
}
void B::show_a()
{
    cout << "a= " << a << endl;
}
void D::mul()
{
    c = get_a() * b;
}
void D::display()
{
    cout << "c= " << c << endl;
}
int main()
{
    D d;
    d.set_ab();
    d.show_a();
    d.mul();
    d.display();
    d.b=7;
    d.mul();
    d.display();
    return 0;
}
