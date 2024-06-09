#include<iostream>

using namespace std;


class my{
    public:
            void display()
            {
                cout<<"Base class"<<endl;
            }


};

class derived: public my{
    public:
     void   display()
        {
            cout<<"derived class"<<endl;
        }
};


int main(void)
{
    my *ptr;
    derived obj;
    ptr=&obj;
    ptr->display();

    derived *prt;
    my obj2;
    prt=&obj2;

    prt->display();
}