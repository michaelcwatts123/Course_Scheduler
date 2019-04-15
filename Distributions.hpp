//
//  Distributions.hpp
//  Project_Part1
//
//  Created by Michael Watts on 3/16/19.
//  Copyright © 2019 Michael Watts. All rights reserved.
//

#ifndef Distributions_hpp
#define Distributions_hpp

#include <stdio.h>
#include "Student.hpp"
#include <random>
#include <math.h>
#include <chrono>
#include <iostream>
using namespace std;
vector<Student> uniform(vector<Student>&, int, int);
vector<Student> twoTier(vector<Student>&, int, int);
vector<Student> fourTier(vector<Student>&, int, int);
vector<Student> normalish(vector<Student>&, int, int);
#endif /* Distributions_hpp */
