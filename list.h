#ifndef __LIST_H__
#define __LIST_H__
namespace list
{

template <class t>
class node
{
public:
    t data;
    node *next;
    node()
    {
        data = 0;
        next = NULL;
    }
};

template <class t>
class list
{
private:
    node<t> *head, *tail, *itr;

public:
    list()
    {
        head = NULL;
        tail = NULL;
        itr = NULL;
    }

    void push_back(t value)
    {
        node<t> *temp = new node<t>();
        temp->data = value;
        temp->next = NULL;
        if (head == NULL)
        {
            head = temp;
            tail = temp;
            temp = NULL;
        }
        else
        {
            tail->next = temp;
            tail = temp;
        }
    }

    void display()
    {
        node<t> *temp = new node<t>;
        temp = head;
        while (temp != NULL)
        {
            std::cout << temp->data << " ";
            temp = temp->next;
        }
    }

    void push_front(int value)
    {
        node<t> *temp = new node<t>;
        temp->data = value;
        temp->next = head;
        head = temp;
    }

    void insert(int pos, int value)
    {
        node<t> *pre = new node<t>;
        node<t> *cur = new node<t>;
        node<t> *temp = new node<t>;
        cur = head;
        for (int i = 1; i < pos; i++)
        {
            pre = cur;
            cur = cur->next;
        }
        temp->data = value;
        pre->next = temp;
        temp->next = cur;
    }

    void pop_front()
    {
        node<t> *temp = new node<t>;
        temp = head;
        head = head->next;
        delete temp;
    }

    void pop_back()
    {
        node<t> *current = new node<t>;
        node<t> *previous = new node<t>;
        current = head;
        while (current->next != NULL)
        {
            previous = current;
            current = current->next;
        }
        tail = previous;
        previous->next = NULL;
        delete current;
    }

    void erase(int pos)
    {
        node<t> *current = new node<t>;
        node<t> *previous = new node<t>;
        current = head;
        for (int i = 1; i < pos; i++)
        {
            previous = current;
            current = current->next;
        }
        previous->next = current->next;
    }
};

} // namespace list
#endif