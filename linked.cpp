#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node*next;
    Node(int data)
    {
        this->data=data;
        next= NULL;
    }
};
void print(Node *HEAD)
{
    Node*head=HEAD;
    while(head!=NULL)
    {
        cout<<(*head).data<<endl;
        head=head->next;
    }
}
main()
{
    Node N1(1);
    Node*head = &N1;
    Node N2(2);
    Node N3(3);
    Node N4(4);
    N1.next = &N2;
    N2.next=&N3;
    N3.next=&N4;
    print(head);
    Node*n1= new Node(5);
   // cout<<n1->data<<" "<<(*n1).data<<endl;
    Node*head1= n1;
    Node*n2= new Node(6);
    Node*n3= new Node(7);
    Node*n4= new Node(8);
    n1->next=n2;
    n2->next=n3;
    n3->next=n4;
    print(head1);
        }
