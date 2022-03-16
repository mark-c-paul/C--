#include <string>
#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head;

void Insert(int data){
    Node* temp = new Node;
    temp->data = data;
    temp->next = head;
    head = temp;
}

int main(){
    head = NULL;
    int size, num;
    int max = -1000;
    std::cin >> size;
    for(int i=0; i<size; i++){
        cin >> num;
        Insert(num);
    }
    while(head != NULL){
        if(head->data > max){
            max = head->data;
        }
        head = head->next;
    }
    cout << max;
    return 0;
}