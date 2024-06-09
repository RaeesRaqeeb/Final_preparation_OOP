#include<iostream>

using namespace std;

class myfunction
{
    private:
    string title;
    string author;

public:
    myfunction(string title,string author):title(title),author(author){}



    void setter()
    {
        cout<<"Title:"<<title<<"\n"<<"Author:"<<author<<endl;
    }
     
};

class text_docuement: public myfunction
{
    private:
        int page_count;
    public:
        text_docuement(string title, string author, int page_num):page_count(page_num),myfunction(title,author) {}
        
        text_docuement(myfunction &obj)
        {
            
        }
        void display() 
        {
            setter();
            cout<<"Page count:"<<page_count<<endl;
        }

      
};


int main(void)
{
    string title, author;
    int page_Count;
    cout<<"\nPage Count:";
    cin>>page_Count;
    cin.ignore();
    cout<<"Title:";
    getline(cin,title);
    cout<<"Author:";
    getline(cin,author);


    text_docuement Obj(title,author,page_Count);

    Obj.display();

}