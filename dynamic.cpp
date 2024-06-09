#include<iostream>


using namespace std;



class Main
{
    public:
        int *students;
        int size;
        static int num_students;

        Main()
        {
            size=0;
            students=new int[size];
            num_students=0;
        }
        Main(int size)
        {
            this ->size= size;
           
        }
        string display()
        {
           // cout<<""<<endl;
            return "User";
        }

        void add_student()
        {
            ++num_students;
            if(num_students>size)
            {
                ++size;
                int *new_student= new int [size];
                for(int i=0;i<size-1;i++)
                {
                    new_student[i]=students[i];
                }
                new_student[size-1]=num_students;
                delete [] students;
              //new_student=students;
                students=new_student;
            }
        }
};

int Main:: num_students=0;



int main(void)
{
    int size=0;
    Main *obj;
    obj=new Main[size];
    //Main obj[10];
    int obj_count=0;

    cout<<"Add user?"<<endl;
    int user_input;
  
    while(user_input!=0)
    {
    cin>>user_input;

    if(user_input)
    {
        ++obj_count;
        if(obj_count>size)
        {
            ++size;
            Main *obj2= new Main[size];
            for(int i=0;i<size; ++i)
            {
                obj2[i]=obj[i];
            }
            obj2[size-1]=10;
          //  obj2=obj;
            delete obj;
            obj=obj2;
        }
    }
    }

    for(int i=0;i<size;i++)
    {
        cout<<obj[i].display()<<":"<<i+1<<endl;
    }

    Main *obj2= new Main[size];

    for(int i=0;i<10;i++)
        obj2[i].add_student();

    for(int i=0;i<10;i++)
    {
        cout<<obj2[i].display()<<":"<<i+1<<endl;
    }

    return 0;
}