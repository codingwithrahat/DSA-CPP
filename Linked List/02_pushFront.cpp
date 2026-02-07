#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;           
    }

};

class List{
    Node* head;
    Node* tail;

public:
    List(){
        head = tail = NULL;
    }

    void push_front(int val){
        Node* newNode = new Node(val);       //create a new node , pointed by newNode

        if(head == NULL){
            head = tail = newNode;           //if list is empty
        }else{
            newNode->next = head;             
            head = newNode; 
        }
    }

};


int main(){
    List ll;

    ll.push_front(1);   //1 - NULL
    ll.push_front(2);   //2 - 1 - NULL
    ll.push_front(3);   //3 - 2 - 1 - NULL
}
