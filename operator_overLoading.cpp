#include<iostream>
#include<string.h>


using namespace std;


class operator_overloading
{
    public:
        int num1;
        int num2;
    operator_overloading()
    {
        num1=10;
        num2=2;
    }

    void operator *(operator_overloading);
    void operator ++()
    {
        cout<<"\nIt should be called for pre increament\n";
    }
    void operator ++(int ){
        cout<<"\nIt should be called for post increament"<<endl;
    }
   

};

void operator_overloading:: operator* (operator_overloading obj)
{
    cout<<num1*obj.num1<<endl;
    cout<<num2*obj.num2<<endl;
}


int  main(void)
{

    operator_overloading obj1,obj2;
    obj1*obj2;

    obj1++;

    ++obj1;

    return 0;
}