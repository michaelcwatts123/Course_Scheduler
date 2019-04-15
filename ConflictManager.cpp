//
//  ConflictManager.cpp
//  Project_Part1
//
//  Created by Michael Watts on 3/26/19.
//  Copyright © 2019 Michael Watts. All rights reserved.
//

#include "ConflictManager.hpp"
int ConflictManager::getTotal(){
    return total;
}
int ConflictManager::getDistinct(){
    return conflicts.size();
}
bool ConflictManager::distinctCheck(string A, string B){
    for(int i = 0; i < conflicts.size(); i++){
        Conflict C(conflicts.at(i).getA(), conflicts.at(i).getB());
        if( (A == C.getA() || B == C.getB()) && (B == C.getA() || B == C.getB()) && (A != B)){
            return false;
        }
    }
    return true;
}
void ConflictManager::reset(){
    conflicts.clear();
}
void ConflictManager::buildConflictList(Class C){
    total += C.getConflictList().size();
    for(int i = 0; i < C.getConflictList().size(); i++){
        if(distinctCheck(to_string(C.getCourseNum()), to_string(C.getConflictList().at(i)))){
            Conflict DC(to_string(C.getCourseNum()), to_string(C.getConflictList().at(i)));
            conflicts.push_back(DC);
            
            
        }
    }
}
