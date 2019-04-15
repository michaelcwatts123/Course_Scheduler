//
//  Class.hpp
//  Project_Part1
//
//  Created by Michael Watts on 3/15/19.
//  Copyright © 2019 Michael Watts. All rights reserved.
//

#ifndef Class_hpp
#define Class_hpp

#include <stdio.h>
#include "Student.hpp"
#include <string>
#include <vector>
#include <iostream>
using namespace std;

class Class{
public:
    Class(double, int);
    Class();
    int getSize();
    int getNumConflicts();
    double getCourseNum();
    void setCourseNum(double);
    void detect_conflict();
    
    Student pop();
    void push(Student);
    void studentCheck(Student);
    
    bool operator==( Class);
    vector<Student> getClassList();
    vector<double> getConflictList();
    void printConflictList();
    vector<Student> students;
private:
    
    vector<double> conflicts;
    
    double courseNum;
    int classSize;
    int courseTitle;
    
    bool isUnique(double);
    
};
#endif /* Class_hpp */
