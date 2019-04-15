//
//  Student.cpp
//  Project_Part1
//
//  Created by Michael Watts on 2/13/19.
//  Copyright © 2019 Michael Watts. All rights reserved.
//

#include "Student.hpp"
Student::Student(int stuNum){
    ID = stuNum;
}
void Student::addCourse(int courseID){
    if(courseCheck(courseID)){
        courses.push_back(courseID);
    }
}
//if returns true then course is not present 
bool Student::courseCheck(int courseID){
    if(!courses.empty()){
        if(find(courses.begin(), courses.end(), courseID) == courses.end()){
            return true;
        } else {
            return false;
        }
    }
    return true;
}
int Student::getSize(){
    return courses.size();
}
int Student::getID(){
    return ID;
}
vector<double> Student::getCourseList(){
    return courses;
}
