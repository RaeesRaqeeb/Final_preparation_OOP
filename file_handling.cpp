#include<iostream>
#include<fstream>
#include<string.h>
#include<curses.h>
#include<conio.h>


using namespace std;

int main(void)
{   
    ofstream My_file;

    My_file.open("New.txt");

    if(!My_file)
    {
        cout<<"\nFailed to open file !!!"<<endl;
        return 0;
    }
    My_file<<"This is stored";

    My_file.close();

    ifstream My_file;

    My_file.open("New.txt");
    
    if(!My_file)
    {
        cout<<"Error! File does not open";

        return ;
    }

    while(My_file.eof()==0)
    {
        My_file.get(c);
        cout<<c<<endl;
    }








    

    






    return 0;
}