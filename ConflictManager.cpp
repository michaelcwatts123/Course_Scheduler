//
//  ConflictManager.cpp
//  Project_Part1
//
//  Created by Michael Watts on 3/26/19.
//  Copyright © 2019 Michael Watts. All rights reserved.
//

#include "ConflictManager.hpp"
ConflictManager::ConflictManager(){
    E.clear();
}
int ConflictManager::getTotal(){
    return total;
}
int ConflictManager::getDistTotal(){
    return dist_total;
}
vector<Linked_List> ConflictManager::getE(){
    return E;
}
void ConflictManager::buildConflictList(Class C){
    Linked_List class_to_add;
    class_to_add.add(C);
    int size = C.get_section_size();
    for(int i = 0; i < C.getNumConflicts(); i++){
        total++;
        double name = C.getConflictList().at(i);
        Class temp(i, size);
        for(int j = 0; j < E.size(); j++){
            if(E.at(j).getHead().getCourseNum() == name){
                if(!E.at(j).search(C)){
                    class_to_add.add(temp);
                    dist_total++;
                }
            }
        }
       
        
    }
    E.push_back(class_to_add);
    
}
