#include <iostream>
#include "list.h"

int main()
{
    list::list<int> mit;
    mit.push_back(100);
    mit.push_back(-10);
    mit.push_front(30);
    mit.insert(4, 400); // Must be greater than 1
    mit.erase(2);
    mit.display();
    std::cout << std::endl;
    mit.pop_back();
    mit.display();
    std::cout << std::endl;
    mit.pop_front();
    mit.display();
    std::cout << std::endl;
}