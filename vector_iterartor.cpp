#include<iostream>
#include<vector>


using namespace std;



int main(void)
{
     vector <int> action={1,2,3,4,5};
    action.push_back(10);
    for(auto it=action.begin();it!=action.end();it++)
    {
        cout<<*it;
    }
}