#include <iostream>

template <class t>
class stack
{
    private:
    t container[10];
    int stack_pointer = -1;
    public:
    bool empty()
    {
        return stack_pointer==-1;
    }
    int size()
    {
        return stack_pointer+1;
    }
    t top()
    {
        return container[stack_pointer];
    }
    void push(t arg)
    {
        container[++stack_pointer] = arg;
    }
    void pop()
    {
        --stack_pointer;
        if(stack_pointer<-1)
        ++stack_pointer;
    }
};

int main()
{
    stack<std::string> mit;
    mit.push("poojary");
    mit.push("kiran");
    mit.push("mithil");
 
    while(!mit.empty())
    {
        std::cout << mit.top() << std::endl;
        mit.pop();
    }
}