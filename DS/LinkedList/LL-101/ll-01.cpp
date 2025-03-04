#include<iostream>


using namespace std;


typedef struct Node{
    int data;
    Node*sgt;
}Node;




Node*createNode(int data){
    Node* n = new Node();
    n->data = data;
    n->sgt = NULL;
    return n;
}



void insertByHead(Node*&head, int data){
    Node*n = createNode(data);

    n->sgt = head;
    head = n;

}


int main(int argc, char const *argv[])
{
    Node*head = NULL;
    insertByHead(head, 1);
    insertByHead(head, 10);
    insertByHead(head, 101);
    insertByHead(head, 20);

    while(head!=NULL){
        cout<<"["<<head->data<<"]";
        head = head->sgt;
    }
    cout<<"\n";
    return 0;
}
