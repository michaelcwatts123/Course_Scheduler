//
//  Conflict.cpp
//  Project_Part1
//
//  Created by Michael Watts on 3/26/19.
//  Copyright © 2019 Michael Watts. All rights reserved.
//
#include "Conflict.hpp"

Conflict::Conflict(string first, string second){
    A = first;
    B = second;
}
void Conflict::setA(string x){
    A = x;
}
void Conflict::setB(string x){
    B = x;
}
string Conflict::getA(){
    return A;
}
string Conflict::getB(){
    return B;
}
