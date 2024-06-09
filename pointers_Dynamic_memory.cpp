#include<iostream>
#include<string.h>


using namespace std;

class pointers_practice
{
    public:
        int *array;
        int size;
        static int count;
        pointers_practice()
        {

        }
    pointers_practice(int size)
    {
        array= new int[size];
        this->size= size;
    }


    void adding(int num)
    {
        ++count;
        if(count>(size))
        {
            ++size;
            int *New_array= new int[size];
            for(int i=0;i<count;i++)
            {
                New_array[i]=array[i];
            }
            New_array[count-1]=num;
            delete [] array;

            array=New_array;
            
        }
        else
        {
            array[count-1]=num;
        }
    }

    void Display()
    {
        for(int i=0;i<count;i++)
        {
            cout<<array[i]<<endl;
        }
    }
};

class derive: public pointers_practice
{

};

int pointers_practice:: count=0;


int main(void)
{
    pointers_practice obj1(0);
    int input;
    cout<<"\nEnter number to add in the array:";
    cin>>input;
    obj1.adding(input);
    cout<<"\nEnter number to add in the array:";
    cin>>input;
    obj1.adding(input);
    cout<<"\nEnter number to add in the array:";
    cin>>input;
     obj1.adding(input);
    obj1.Display();
    cout<<"\nEnter number to add in the array:";
    cin>>input;
    obj1.adding(input);
    obj1.Display();
    int size=10;
    pointers_practice* obj2= new pointers_practice[size];
    int count=11;
    if(count>size)
    {
        ++size;
        pointers_practice* obj3=new pointers_practice[size];
    for(int i=0; i<count; i++)
        {
            
            obj3[i]=obj2[i];
            
        }
        obj3=obj2;

        delete [] obj2;
        obj2=obj3;
    }

    pointers_practice *obj4[10];
    pointers_practice *obj5=new pointers_practice[10];
    derive obj_derive;
    obj4[0]=&obj1;
    obj4[1]=&obj_derive;
    


    obj5[3].Display();
    return 0;
}