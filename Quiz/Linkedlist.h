#pragma once
#include "Question.h"

using namespace System;
using namespace System::Collections::Generic;

public ref class Node {
public:
    Question^ value;
    Node^ next = nullptr;
    Node^ prev = nullptr;

    Node(Question^ value) {
        this->value = value;
        // this->next = NULL;
    }
};

public ref class Linkedlist {
public:
    int noOfElements = 0;
    Node^ head = nullptr;
    Node^ tail = nullptr;

    Linkedlist() {
       
    }

    // inserting value at last element
    void append(Question^ value) {
        Node^ newNode =gcnew Node(value);

        //if linkedlist empty
        if (head == nullptr) {
            noOfElements++;
            head = newNode;
            tail = head;
            return;
        }

        Node^ end = head;
        while (end->next != nullptr) {
             end = end->next;
        }

        end->next = newNode;
        tail = newNode;
        tail->prev = end;
        noOfElements++;
        
        
    }

    // insert data at a position
    void insertAtPostion(Question^ value, int pos) {

        if (pos < 1 || pos > noOfElements+1) {
            //cout << "Invalid Position enter between 1-" << size + 1 << "\n";
            return;
        }

        Node^ data = gcnew Node(value);
        Node^ current = head;

        if (pos == 1) {
            data->next = current;
            head = data;
            current->prev = head;
            noOfElements++;
            return;
        }
        while (pos >= 1) {
            pos--;
            if (pos == 1) {
                Node^ temp = current->next;
                temp->prev = data;
                data->prev = current;
                current->next = data;
                data->next = temp;
            }
            else {
                current = current->next;
            }
        }
        noOfElements++;
    }

    // traversing whole linkedList
    void traverse() {
        Node^ currentNode = head;
        while (currentNode != nullptr) {
            currentNode = currentNode->next;
        }
    }

    // traversing whole linkedlist backwordly
    void reverseTraverse() {
        Node^ currentNode = tail;
        while (currentNode != nullptr) {
            currentNode = currentNode->prev;
        }
    }

    // deleting a node from linkedlist
    void deletion(int pos) {
        if (pos > noOfElements) {
            //cout << "Underflow\n";
            return;
        }
        Node^ current = head;

        if (pos == 1) {
            if (head->next == nullptr) {
                head = nullptr;
            }
            else {
                head = current->next;
                head->prev = nullptr;
            }
            noOfElements--;
            return;
        }

        if (pos == noOfElements && noOfElements>1) {
            while (current->next != nullptr) {
                current = current->next;
           }
            current->prev->next = nullptr;
            current->prev = nullptr;
            pos = 0;
        }


        while (pos >= 1) {
            if (pos == 1) {
                current->prev->next = current->next;
                current->next->prev = current->prev;
            }
            else {
                current = current->next;
            }
        }
        noOfElements--;
    }

};

