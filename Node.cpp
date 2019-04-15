//
//  Node.cpp
//  Project_Part1
//
//  Created by Michael Watts on 4/14/19.
//  Copyright © 2019 Michael Watts. All rights reserved.
//

#include "Node.hpp"

Node::Node(Class C){
    info = C;
    next = nullptr;
    prev = nullptr;
}
Node::Node(){

}
Node::~Node(){
    if(next){
        delete next;
    }
    if(prev){
        delete prev;
    }
}

void Node::setClass(Class C){
    info = C;
}
void Node::setNext(Node * N){
    next = N;
}
void Node::setPrev(Node * P){
    prev = P;
}

Class Node::getClass(){
    return info;
}
Node * Node::getNext(){
    return next;
}
Node * Node::getPrev(){
    return prev;
}
