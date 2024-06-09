#include<iostream>
#include<string.h>

using namespace std;

class friend2;
class Friend_function
{
    private:    
        static int num;
        int number;
        string name;

    public:
        friend void arithmatic_function(Friend_function &obj);
    friend friend2;

};

int Friend_function:: num=0;

class friend2: public Friend_function
{
    private:
        int num2;
    friend Friend_function;
    public:
        void display()
        {
            cout<<number<<endl;
        }
        
};

void arithmatic_function(Friend_function &obj)
{

    cout<<obj.number;
    
}

