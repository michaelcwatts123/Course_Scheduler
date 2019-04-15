//
//  Linked_List.hpp
//  Project_Part1
//
//  Created by Michael Watts on 4/14/19.
//  Copyright © 2019 Michael Watts. All rights reserved.
//

#ifndef Linked_List_hpp
#define Linked_List_hpp
#include "Node.hpp"
#include <stdio.h>
class Linked_List{
private:
    Node * head;
    Node * tail;
    int length;
public:
    Linked_List();
    void add(Class);
    void remove(Class);
    
    bool search(Class);
    Class  getHead();
    Class  getTail();
    int getLength();
};
#endif /* Linked_List_hpp */
