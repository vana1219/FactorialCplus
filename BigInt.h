#include<iostream>
using namespace std;

template<class T>
class BigInt{
    public:
    BigInt();
    //Pre: N/A
    //Post:linked list is empty and length is 0.

    ~BigInt();
    //Pre: Items on the list.
    //Post:empty all the items in the linked list.
    
    void Factorial(T num);
    //Pre: the input is non-negative number and less than or equal 500.
    //Post: Calculates the factorial of the input and store
    //the result in the linked list. The linked list should represent of the factorila

    void Multiply(T num);
    //Pre: number is valid integer
    //Post: Multiplies the linked list by the input number and
    // update the linked list to store result of the multiplication 

    void InsertNode(T n);
    //Pre:N/A
    //Post: inserted new Node in the front of the linked list

    void Print(ofstream& outfile);
    //Pre: items in the list
    //Post: print all the items in the list
    
    private:
    struct Node{
    Node* next;
    Node* prev;
    int data;
    };
    Node* head;
    int len;


};
