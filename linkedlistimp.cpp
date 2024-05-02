#include<iostream>
using namespace std;
class node
{
    public:
    int val;
    node* next;
    node(int val)
    {
        this->next=NULL;
        this->val=val;
    }
};
class stack{
    public: 

    node* head;
    int size;
    stack()
    {
        this->size=0;
        this->head=NULL;
    }
    void push(int val)
    {
        node* temp=new node(val);
        temp->next=head;
        head=temp;
        size++;

    }
    void pop()
    {
        if(head==NULL){
            cout<<"the stack is empty";
        }
        head=head->next;
        size--;
    }
    void print(node*temp)
    {
        if(temp==NULL)return;
        print(temp->next);
        cout<<temp->val<<" ";

    }
    void display()
    {
        node* temp=head;
       print(temp);
    }

};

int main()
{
    stack st;
    st.push(10);
    st.push(30);
    st.push(40);
    st.display();



}