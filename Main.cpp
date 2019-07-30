#include <iostream>
#include "stack.h"

int main()
{
    stack::stack<std::string> mit;
    mit.push("poojary");
    mit.push("kiran");
    mit.push("mithil");
 
    while(!mit.empty())
    {
        std::cout << mit.top() << std::endl;
        mit.pop();
    }
}