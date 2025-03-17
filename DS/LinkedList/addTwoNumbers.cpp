#include<iostream>


using namespace std;


typedef struct node{
    int data;
    node* sgt;
}Node;


Node* createNode(){

    Node* nodo = (Node *) malloc(sizeof(Node));
    nodo->sgt = NULL;
    return nodo;

}


void insertByHead(Node *&head, int data){
     Node *p = createNode();
     p->data = data;
     p->sgt = head;
     head =  p;
}


void insertByEnd(Node *&head, int data){
    Node * temp = head;
    Node * p = createNode();
    p->data = data;

    if(head == NULL){
        head = p;
        return;
    }
    
    while (temp!=NULL)
    {
        if(temp->sgt == NULL){
            temp->sgt= p;
            break;
        }
        temp = temp->sgt;
    }
}


void printLinkedList(Node*head){

    while(head !=NULL){
        cout<<"["<<head->data<<"]"<<"->";
       	head = head->sgt;
    }

    cout<<endl;

}


void fillWithZeroes(int nZ, Node *&head){
    int i = 0;
    while (i <= nZ)
    {
        insertByEnd(head, 0);
        i++;
    }

}


int listSize(Node * head){

    int c = 0;
    
    while(head != NULL){
        c++;
        head = head->sgt;
    }

    return c;
}


Node* sumLists(Node*&head1, Node *&head2){

    Node *result = NULL;


    // 1) Analizar tamaños

    int sizeHead1 = listSize(head1);
    int sizeHead2 = listSize(head2);

    int nZeroes = abs(sizeHead1 - sizeHead2) - 1;

    (sizeHead1 > sizeHead2 )? fillWithZeroes(nZeroes, head2) : fillWithZeroes(nZeroes, head1);
    

    int carry = 0;
    while (head1 != NULL) {
        int sum = 0; // one digit.

        sum = head1->data + head2->data + carry;

        if (sum >= 10 && sum <= 19){
            sum = sum % 10;
            carry = 1;
            if(head1->sgt ==NULL){
                insertByEnd(result, sum);
                insertByEnd(result, 1);
            }else{
                insertByEnd(result, sum);
            }
        }else{
            insertByEnd(result, sum);
            carry = 0;
        }

       
        head1 = head1->sgt;
        head2 = head2->sgt;
    }

    return result;

}


int main(void){

    // Lista 1
    Node* head = NULL;

    insertByHead(head, 9);
    insertByHead(head, 9);
    insertByHead(head, 9);
    insertByHead(head, 9);
    insertByHead(head, 9);
    insertByHead(head, 9);
    insertByHead(head, 9);
    


    // Lista 2

    Node * head2 = NULL;
    insertByHead(head2, 9);
    insertByHead(head2, 9);
    insertByHead(head2, 9);
    insertByHead(head2, 9);



    Node *result = sumLists(head, head2);

    printLinkedList(result);

}
