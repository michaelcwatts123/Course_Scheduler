//
//  Student.hpp
//  Project_Part1
//
//  Created by Michael Watts on 2/13/19.
//  Copyright © 2019 Michael Watts. All rights reserved.
//

#ifndef Student_hpp
#define Student_hpp

#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
class Student{
public:
    
    
    
    Student(int);
    vector<double> getCourseList();
    void addCourse(int);
    bool courseCheck(int);
    int getSize();
    int getID();
private:
    vector<double> courses;
    int ID;
    
};

#endif /* Student_hpp */
