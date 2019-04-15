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
class ConflictManager{
public:
    void buildConflictList(Class);
    void reset();
    int getTotal();
    int getDistinct();
    
private:
    int total;

    vector<Conflict> conflicts;
    
    bool distinctCheck(string A, string B);
};
#endif /* ConflictManager_hpp */
