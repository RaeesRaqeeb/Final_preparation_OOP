// #include<iostream>
// #include<string.h>


// using namespace std;

// class Animal
// {
//     private:
//         string name;
//         int age;
//         string species;

//     public:
//         virtual string getFoodType()=0;
//         virtual void PrintDetails()=0;
    

// };

// class Dog: public virtual Animal
// {

//     private:
//     bool isTrained;

//     public:
//         string getFoodType()override
//         {
//             cout<<"Meat and Bones\n";
//             return "F";
//         }

//         void PrintDetails() override
//         {
//             cout<<"\n this is dog"<<endl;
//         }




// };

// class Cat:  public virtual Animal
// {
//     private:
//         bool HasFleaCollar;

//     public:
//         string getFoodType()override
//         {
//             cout<<"Milk"<<endl;
//             return "M";
//         }

//         void PrintDetails() override
//         {
//             cout<<"Detail"<<endl;
//         }

// };

// class mammal: public Dog, public virtual Cat
// {
//     public:
//         string getFoodType() override
//         {
//             return getFoodType();
//         }

//         void PrintDetails() override
//         {
//             PrintDetails();
//         }
// };


// int main(void)
// {

//     mammal *obj1= new mammal;
//     obj1 -> getFoodType();


// }
#include <iostream>
#include <string>

using namespace std;

class Animal
{
private:
    string name;
    int age;
    string species;

public:
    Animal()
    {
        cout<<"Animal COnstructor\n";
    }
    virtual string getFoodType() = 0;
    virtual void PrintDetails() = 0;
    ~Animal()
    {
        cout<<"Animal Destructor"<<endl;
    }
};

class Cat : public virtual Animal
{
private:
    bool HasFleaCollar;

public:
Cat()
{
    cout<<"Cat Constructor\n";
}
    string getFoodType() override
    {
        return "Milk";
    }

    void PrintDetails() override
    {
        cout << "This is a cat" << endl;
    }
~Cat()
{
    cout<<"\nCat Destructor"<<endl;
}
};




class Dog : public virtual Animal
{
private:
    bool isTrained;

public:
Dog()
{
    cout<<"DOg constructor"<<endl;
}

    string getFoodType() override
    {
        return "Meat and Bones";
    }

    void PrintDetails() override
    {
        cout << "\nThis is a dog" << endl;
    }

    ~Dog()
    {
        cout<<"\nDog destructor";
    }
};


//Calling of destructor for multile inheritance is depends on the sequence while this
class mammal : public Cat, public Dog
{
public:
mammal()
{
    cout<<"\nMammal constructor";
}
    string getFoodType() override
    {
        // Resolve ambiguity by choosing one of the base classes
        return Dog::getFoodType(); // or Cat::getFoodType();
    }

    void PrintDetails() override
    {
        cout << "This is a mammal derived from both Dog and Cat" << endl;
    }
~mammal(){
    cout<<"Mammal Destructor"<<endl;
}
};

int main(void)
{
    mammal *obj1 = new mammal;
    cout << obj1->getFoodType() << endl;
    obj1->PrintDetails();

    delete obj1;
    return 0;
}
