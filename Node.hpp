//
//  Node.hpp
//  Project_Part1
//
//  Created by Michael Watts on 4/14/19.
//  Copyright © 2019 Michael Watts. All rights reserved.
//

#ifndef Node_hpp
#define Node_hpp

#include <stdio.h>
#include <memory>
#include "Class.hpp"
class Node{
private:
    Class info;
    Node * prev;
    Node * next;
public:
    Node(Class);
    Node();
    ~Node();
    
    void setClass(Class);
    void setNext(Node *);
    void setPrev(Node *);
    
    Class getClass();
    Node * getNext();
    Node * getPrev();
};
#endif /* Node_hpp */
