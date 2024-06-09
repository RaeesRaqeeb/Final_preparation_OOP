#include<iostream>
#include<string.h>


using namespace std;

class copy_constructor
{
    public:
    int *num,*values,*charges;
    

    copy_constructor()
    {
        num=new int;
        values=new int;
        charges= new int;

    }

   

    copy_constructor(copy_constructor &obj, bool Shallow=false)
    {
       if(Shallow)
       { 
        num=obj.num;
        values=obj.values;
        charges=obj.charges;
       }
        else
        {
        num=new int;
        *num=*obj.num;
        charges= new int;
        values= new int;
        *values=*obj.values;
        *charges=*obj.charges;
        }
    }

    void display()
    {
        cout<<"\nCharges:"<<*charges<<"\nValues:"<<*values<<"\num:"<<*num<<endl;
    }

};

int  main(void)
{
    copy_constructor obj;
   
    *obj.num=10;
    *obj.charges=102;
    *obj.values=11;
    obj.display();

    copy_constructor ob3(obj);
    copy_constructor ob2(obj,true);
    *ob2.num=1000;
    
    *ob3.num=5000;
    cout<<*obj.num<<endl;
    cout<<*ob3.num<<endl;
    


}