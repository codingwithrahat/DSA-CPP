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
        Node* newNode = new Node(val);

        if(head == NULL){
            head = tail = newNode;
        }else{
            newNode->next = head;
            head = newNode; 
        }
    }

    void push_back(int val){
        Node* newNode = new Node(val);
        
        if(head == NULL){
            head = tail = newNode;
        }else{
            tail->next = newNode;
            tail = newNode;
        }
    }

    void printAll(){
        Node* temp = head;                   

        while(temp != NULL){                                    
            cout<<temp->data<<" ";

            temp = temp->next;                    
        }
        
        cout<<endl;
    }

    void pop_front(){

        if(head == NULL){
            cout<<"List is Empty"<<endl;
            return;
        }

        Node *temp = head;
        head = head->next;
        temp->next = NULL;

        delete temp;

    }

    

};


int main(){
    List ll;

    ll.push_front(1);   
    ll.push_front(2);   
    ll.push_front(3);  //3 - 2 - 1

    ll.pop_front();
    
    ll.printAll();      //2 - 1 

}
