#include<iostream>

using namespace std;

namespace raqeeb
{
    int Raqeeb1()
    {
        cout<<"This is raqeeb namespace\n";
    }
    namespace raees
    {
        int Raqeeb2()
        {
            cout<<"\nThis is Display function of Raqeeb2 \n";
        }
    }
}

int main(void)
{
    cout<<"We are calling the function\n";
    using namespace raqeeb;
    Raqeeb1();
    
    raqeeb::raees::Raqeeb2();
    
    using namespace raees;
    Raqeeb2();
}