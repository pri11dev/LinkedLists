class node{
public:
	int data;
	node*next;
	node(int data){
		this->data = data;
		next = NULL;
	}
}


node* midpoint_linkedlist(node *head)
{
    if(head == NULL || head->next == NULL) {
        return head;
    }
    node *slow = head, *fast = head->next;
    while(fast != NULL && fast-> next != NULL) {
        slow = slow -> next;
        fast = fast -> next -> next;
    }
    return slow;
}
main()
{
	node n1(10);
	node*head = &n1;
	node n2(20);
	node n3(30);
	node n4(40);
	n1.next = &n2;
	n2.next = &n3;
	n3.next = &n4;
	int mid = midpoint_linkedlist(head);
	cout<<mid;
}