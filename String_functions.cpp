#include <cstring>
#include<iostream>
#include<string.h>

int main() {
    char str1[] = "RAQEEB";
    char str2[] = "Raqeeb";
    int comparison = strcmp(str1, str2);

    if (comparison < 0) {
        std::cout << str1 << " is less than " << str2 << std::endl;
    } else if (comparison > 0) {
        std::cout << str1 << " is greater than " << str2 << std::endl;
    } else {
        std::cout << str1 << " is equal to " << str2 << std::endl;
    }

//We need pointer character for seach the character from string
    char str[] = "Hello, world!";
    char* found = strchr(str, 'o');

    if (found != nullptr) {
        std::cout << "Found character 'o' at: " << found << std::endl;
    } else {
        std::cout << "Character 'o' not found in the string." << std::endl;
    }

//String clear 

    std::string name="RAqeeb";

   // name.clear()
    std::cout<<sizeof(name)<<"\n"<<name.length()<<"\n"<<
    name.size()<<"\nis This empty?";


//String subtraction

    std::cout<<"\n"<<name.substr(0,5);
}