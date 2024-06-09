#include<iostream>
#include<string>


using namespace std;

//Abstract class when their is pure virtual function
//We cannot create the object of abstract class
class polymorphism
{
    public:
    
    virtual void show()=0;//For Abstract
    //Without using virtual keyword it is static polymorphism
    // void show()
    // {
    //     cout<<"I am parent class\n";
    // }

};

class child: public polymorphism //CLass derived from the concrete
{
    public:
        void show()
        {
            cout<<"Child class\n";
        }
};

class child2: public polymorphism //CLass derived from the concrete
{
    public:
        void show()
        {
            cout<<"\nChild 2 class";
        }
};

int main()
{
    polymorphism *obj1;

    child obj2;
    obj2.show();
    child2 obj3;
    obj1=&obj2;

    obj1->show();

    obj1=&obj3;
    obj1->show();

    return 0;

}