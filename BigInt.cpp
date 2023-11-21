#include"BigInt.h"
#include<fstream>
#include<iomanip>

template<class T>
BigInt<T>::BigInt(){
    head = nullptr;
    len = 0;

}
template<class T>
void BigInt<T>::InsertNode(T n){
    //Allocate a newNode
    Node* newNode= new Node();
    newNode->data= n; 
    //If head is null, then make head point to new Node.          
    if(head==NULL){
        newNode->prev=nullptr;          
        newNode->next= nullptr;
        head = newNode;                 //Make head point to new Node
    }
    else{
    //If head is not null, make the newNode point to where the head point
    //Make the nextNode previous(which is the node that head point before the newNode) point to new node.
    //newNode previous point to null
    //Make head point to newNode
        newNode->next= head;            
        newNode->next->prev=newNode;
        newNode->prev=nullptr;
        head= newNode;
    }
    len++;
    
}
template<class T>
void BigInt<T>::Print(ofstream& outfile){
    //Copy head to temp
    Node* temp= head;

    //Check if temp is not null, then print out the first node  of the list.
    //Set temp point to next number
    cout<< "Printing Factorial of the number: \n";
    cout<<"\n";
    if(temp!=nullptr){
        outfile<<temp->data;
        cout<<temp->data;
        temp= temp->next;
    }
    //If temp is not null
    //Insert a comma after the first node.
    //Each node will hold 3 digits number. And whichever node have 2 numbers, will fill with 0
    //print out next node and then go to next one and insert comma until temp is null
    while(temp !=nullptr){
        outfile<<",";
        outfile<< setfill('0')<<setw(3);
        outfile<<temp->data;
        cout<<",";
        cout<< setfill('0')<<setw(3);
        cout<<temp->data;
        temp = temp->next;
    }
    cout<<"\n";

}
template<class T>
void BigInt<T>::Factorial(T num){
    for(int i= 1; i<=num; i++){
        Multiply(i);
    }
}
template<class T>
void BigInt<T>::Multiply(T num){
    
    //Copy head to temp
    Node* temp= head;
    Node* prevNode=nullptr;

    //If head is null, make one and store 1 inside the node.
    if(head == nullptr){
        InsertNode(1);
    }
    
    //Multiply
    //when temp is not null, with each node of temp will multiply by a number.
    //Copy the temp to prevNode.
    //Set temp to temp next to traverse until temp is equal to null.
    while(temp !=nullptr){
        temp->data = temp->data*num;
        prevNode= temp;             //Copy temp to prevNode, so prevNode will save all information of temp
        temp = temp->next;          //in order from left to right
        
    }
    //Handle Carry

    int carry=0;
    //Copy prevNode back to temp. Now temp point to last node of the list.
    temp=prevNode; 
                 
    //While temp is not null, traverse temp in reverse order. 
    //Check, if data less then 1000. Do nothing and traverse to previous one.If it's null, then break.
    //If data> 1000, find the carry. Find the remainder and store it back to the node. 
    //Then traverse to next one. If it's null, then insert new node, and put carry in that node.
    //If it's not null and value in the node. Add carry to that value and store it back to that node.
    while(temp!= nullptr){
        if(temp->data<1000){
            temp->data=temp->data;
            temp=temp->prev;
            if(temp==nullptr)
                break;
        }
        else if(temp->data>1000){
            carry= temp->data/1000;
            temp->data= temp->data%1000;
            temp=temp->prev;
            if(temp==nullptr){
                InsertNode(carry);
                break;
            }else{
                temp->data= temp->data+carry;
            }
            
        }
    }
}    
template<class T>
BigInt<T>::~BigInt(){
    Node* temp;
    while(head != nullptr){
        temp= head;
        head= head->next;
        delete temp;
    }
}
            


