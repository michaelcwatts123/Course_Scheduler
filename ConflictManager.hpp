//
//  ConflictManager.hpp
//  Project_Part1
//
//  Created by Michael Watts on 3/26/19.
//  Copyright © 2019 Michael Watts. All rights reserved.
//

#ifndef ConflictManager_hpp
#define ConflictManager_hpp

#include <stdio.h>
#include <vector>
#include "Conflict.hpp"
#include "Class.hpp"
#include "Linked_List.hpp"
class ConflictManager{
public:
    ConflictManager();
    void buildConflictList(Class);
    int getTotal();
    int getDistTotal();
    vector<Linked_List> getE();
    vector<Linked_List> getP();
    
private:
    int total;
    int dist_total;
    vector<Linked_List> E;
    vector<Linked_List> P;

};
#endif /* ConflictManager_hpp */
