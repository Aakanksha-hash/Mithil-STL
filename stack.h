#ifndef __STACK_H__
#define __STACK_H__
namespace stack
{
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
}
#endif