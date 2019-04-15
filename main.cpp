//
//  main.cpp
//  Project_Part1
//
//  Created by Michael Watts on 2/13/19.
//  Copyright © 2019 Michael Watts. All rights reserved.
//

#include <iostream>
#include "Distributions.hpp"
#include "SectionSplit.hpp"
#include "ConflictManager.hpp"
using namespace std;
void menu(int& numCourse, int& numStudent, int& numCoursePerStudent, int& sectionSize, string& split, string& dist);
int main(int argc, const char * argv[]) {

    
  
    
    ConflictManager CM;
    vector<Student> students;
    vector<Class> classes;
    int numCourse = 0;
    int numStudent = 0;
    int numCoursePerStudent = 0;
    int sectionSize = 0;
    string split = "";
    string dist = "";
    int total = 0;

    
    menu(numCourse, numStudent, numCoursePerStudent, sectionSize, split, dist);

    for(int i = 0; i < numCourse; i++){
        Class c(i, sectionSize);
        classes.push_back(c);
    }
  
    
    
    for(int i = 0; i < numStudent;i++){
        students.push_back(Student(i+1));
    }

    if(dist == "UNIFORM"){
        students = uniform(students, numCoursePerStudent, numCourse);
    }
    if(dist == "2-TIERED"){
        students = twoTier(students, numCoursePerStudent, numCourse);
    }
    if(dist == "4-TIERED"){
        students = fourTier(students, numCoursePerStudent, numCourse);
    }
    if(dist == "NORMAL"){
        students = normalish(students, numCoursePerStudent, numCourse);
    }

    for(int i = 0; i < classes.size(); i++){
        for(int j = 0; j < students.size(); j++){
            classes.at(i).studentCheck(students.at(j));
        }
    }
    for(int i = 0; i < classes.size(); i++){
        classes.at(i).detect_conflict();
        CM.buildConflictList(classes.at(i));
    }


    
    if(split == "BASIC"){
     classes = simple(classes, sectionSize);
    }
     

    if(split == "ADVANCED"){
        classes = complex(classes, sectionSize);
     }
    

    
    
    total =0;

    for(int i = 0; i < classes.size(); i++){
        total += classes.at(i).getNumConflicts();
    }
    
    cout << "Number of Courses Offered C: " << numCourse << endl;
    cout << "Number of Students S:" << numStudent << endl;
    cout << "Number of Courses Per Student K: " << numCoursePerStudent << endl;
    cout << "Section Size: " << sectionSize << endl;
    cout << "Split: " << split << endl;
    cout << "Dist: " << dist << endl;
    cout << "Total Distinct Conflicts M:  " << total << endl;
    CM.reset();
    for(int i = 0; i < classes.size(); i++){
        classes.at(i).detect_conflict();
        CM.buildConflictList(classes.at(i));
    }
    cout << "Total Pair-Wise Sectional Conflicts T:  " << CM.getTotal() << endl;
     



    return 0;
}
void menu(int& numCourse, int& numStudent, int& numCoursePerStudent, int& sectionSize, string& split, string& dist){
    cout << "Enter number of courses" << endl;
    cin >> numCourse;
    
    cout << "Enter number of students" << endl;
    cin >> numStudent;
    cout << "Enter number of courses per student" << endl;
    cin >> numCoursePerStudent;
    cout << "Enter section size" << endl;
    cin >> sectionSize;
    cout << "Enter split method" << endl;
    cin >> split;
    cout << "Enter dist method" << endl;
    cin >> dist;
}
