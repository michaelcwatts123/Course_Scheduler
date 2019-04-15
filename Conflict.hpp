//
//  Conflict.hpp
//  Project_Part1
//
//  Created by Michael Watts on 3/26/19.
//  Copyright © 2019 Michael Watts. All rights reserved.
//

#ifndef Conflict_hpp
#define Conflict_hpp

#include <stdio.h>
#include <string>
using namespace std;
class Conflict{
public:
    Conflict(string, string);
    void setA(string);
    void setB(string);
    
    string getA();
    string getB();
private:
    string A;
    string B;
};
#endif /* Conflict_hpp */
