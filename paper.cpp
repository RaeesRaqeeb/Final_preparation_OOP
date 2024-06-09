#include<iostream>

class my
{
    public:
        int value;
        my(int val):value(val){}

        void display()
        {
            std::cout<<"name"<<value;
        }

};

using namespace std;
int main(){
    // my obj[5]={1,2,3,4,5};
    // my *ptr=obj;

    // cout<<(ptr++)->value<<" ";
    // cout<<(ptr--)->value<<" ";
    // cout<<(ptr)->value<<" ";
    // cout<<(ptr++)->value<<" ";
    my *jh= new my(30);

    delete jh;
    jh->display();
    return 0;
}