# DSA-stack


#include<iostream>
#define SIZE 5
using namespace std;
class stack
{
    int data[SIZE];
    int top;
public:
    stack()
    {
        top=-1;
    }
    void push(int element)
    {
        if (isFull()==1)
            cout<<"Stack is full..";
        else
            data[++top]=element;
    }
    int pop()
    {
        if (isEmpty()==1)
            return -1;
        else
            return data[top--];
    }
    int isEmpty()
    {
        if(top==-1)
            return 1;
        else
            return 0;
    }
    int isFull()
    {
        if (top==SIZE-1)
            return 1;
        else
            return 0;
    }
    int peek()
    {
        if(isEmpty()==1)
            return -1;
        else
            return data[top];
    }
};
int main()
{
    cout<<"Static Implemantation:\n";
    stack st;
    st.push(5);
    st.push(10);
    st.push(5);

    cout<<" stack isempty\n"<<st.isEmpty();
    cout<<" stack is full\n"<<st.isFull();
    cout<<"\n element is at top position "<<st.peek();
    cout<<"\n element removed from stack "<<st.pop();
    cout<<"\n element removed from stack "<<st.pop();
    cout<<"\n element removed from stack "<<st.pop();
    return 0;



}
