//
//  Class.cpp
//  Project_Part1
//
//  Created by Michael Watts on 3/15/19.
//  Copyright © 2019 Michael Watts. All rights reserved.
//

#include "Class.hpp"
Class::Class(double name, int size){
    courseNum = name;
    classSize = size;
}
int Class::getNumConflicts(){
    return conflicts.size();
}
int Class::getSize(){
    return students.size();
}
double Class::getCourseNum(){
    return courseNum;
}
void Class::setCourseNum(double name){
    courseNum = name;
}
vector<Student> Class::getClassList(){
    return students;
}
Student Class::pop(){
    Student s = students.back();
    students.pop_back();
    return s;
}
void Class::push(Student s){
    students.push_back(s);
}
void Class::studentCheck(Student s){
    if(!s.courseCheck(courseNum)){
        students.push_back(s);
    }
}
void Class::detect_conflict(){

    conflicts.clear();
   
    for(int i = 0; i < students.size(); i++){
        for(int j = 0; j < students.at(i).getSize(); j++){
            if(isUnique(students.at(i).getCourseList().at(j))){
                conflicts.push_back(students.at(i).getCourseList().at(j));
            }
        }
    }

}
bool Class::isUnique(double C){
    if(C == courseNum){
        return false;
    }
    if(!conflicts.empty()){
        for(int i = 0; i < conflicts.size(); i++){
            if (conflicts.at(i) == C){
                return false;
            }
        }
        }
    
    return true;
}
bool Class::operator==( Class C){
    if (courseNum == C.getCourseNum()){
        return true;
    } else {
        return false;
    }
}
void Class::printConflictList(){
    for(int i = 0; i < conflicts.size(); i ++){
        cout << conflicts.at(i) << " , ";
    }
    cout << endl;
}
vector<double> Class::getConflictList(){
    return conflicts;
}
