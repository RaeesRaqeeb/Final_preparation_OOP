#include<iostream>
#include<string.h>
#include<vector>


using namespace std;

class main_class
{
    public:
    vector<int> MyVec;

    void entering(int num)
    {
        MyVec.push_back(num);
        MyVec.emplace_back(num,num);
    }

    void display()
    {
        for(int i=0;i<MyVec.size();i++)
        {
            cout<<MyVec[i]<<endl;
        }
    }


};


int main(void)
{
    int user_input;
    cout<<"Enter any number to add:";
    cin>>user_input;
    main_class obj;
    obj.entering(user_input);
    //   obj.entering(user_input);
    //     obj.entering(user_input);
    //       obj.entering(user_input);
    //         obj.entering(user_input);
    //           obj.entering(user_input);
    
    vector <int>* ptr;
    int num=10;
    ptr[0].push_back(num);
    vector <int> action={1,2,3,4,5};
    action.push_back(10);
    for(auto it=action.begin();it==action.end();it++)
    {
        cout<<*it;
    }
    obj.display();
}