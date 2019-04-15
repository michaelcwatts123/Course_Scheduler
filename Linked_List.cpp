//
//  Linked_List.cpp
//  Project_Part1
//
//  Created by Michael Watts on 4/14/19.
//  Copyright © 2019 Michael Watts. All rights reserved.
//

#include "Linked_List.hpp"
Linked_List::Linked_List(){
    head = nullptr;
    tail = nullptr;
    length = 0;
}
void Linked_List::add(Class C){
    if(head == nullptr){
        head = new Node(C);
        head->setNext(nullptr);
        head->setPrev(nullptr);
        tail = head;
        
    } else {
        Node * curr = new Node(C);
        tail->setNext(curr);
        curr->setPrev(tail);
        curr->setNext(nullptr);
        tail = tail->getNext();
    }
    length++;
}
void Linked_List::remove(Class C){
    if(head == nullptr){
        return;
    } else {
        if(head->getClass().getCourseNum() == C.getCourseNum()){
            head = head->getNext();
        }
        Node * curr = head;
        while(curr != tail){
            if(curr->getClass().getCourseNum() == C.getCourseNum()){
                curr->getPrev()->setNext(curr->getNext());
            }
            curr = curr->getNext();
        }
        if(tail->getClass().getCourseNum() == C.getCourseNum()){
            tail = tail->getPrev();
            tail->setNext(nullptr);
        }
    }
    length--;

}
bool Linked_List::search(Class C){
    if(head == nullptr){
        return false;
    } else {
        Node * curr = head;
        while(curr != tail){
            if(curr->getClass().getCourseNum() == C.getCourseNum()){
                return true;
            }
            curr = curr->getNext();
        }
        if(tail->getClass().getCourseNum() == C.getCourseNum()){
            return true;
        }
    }
    return false;
}
Class  Linked_List::getHead(){
    return head->getClass();
}
Class  Linked_List::getTail(){
    return tail->getClass();
}
int Linked_List::getLength(){
    return length;
}
