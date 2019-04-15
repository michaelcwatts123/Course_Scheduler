//
//  main.cpp
//  Project_Part1
//
//  Created by Michael Watts on 2/13/19.
//  Copyright © 2019 Michael Watts. All rights reserved.
//

#include <iostream>
#include "Linked_List.hpp"
#include "Distributions.hpp"
#include "SectionSplit.hpp"
#include "ConflictManager.hpp"
using namespace std;
void menu(int& numCourse, int& numStudent, int& numCoursePerStudent, int& sectionSize, string& split, string& dist);
int main(int argc, const char * argv[]) {

    
  /*
    
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
   //making the proper number of courses
    for(int i = 0; i < numCourse; i++){
        Class c(i, sectionSize);
        classes.push_back(c);
    }
  
    
    //making the proper number of students
    for(int i = 0; i < numStudent;i++){
        students.push_back(Student(i+1));
    }
   //different dist methods to add courses to students
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
   
   //adding students to each  of their courses
    for(int i = 0; i < classes.size(); i++){
        for(int j = 0; j < students.size(); j++){
            classes.at(i).studentCheck(students.at(j));
        }
    }

    
    if(split == "BASIC"){
     classes = simple(classes, sectionSize);
    }
     

    if(split == "ADVANCED"){
        classes = complex(classes, sectionSize);
     }
    
   for(int i = 0; i < classes.size(); i++){
    classes.at(i).detect_conflict();
    CM.buildConflictList(classes.at(i));
   }
    
    

    
    cout << "Number of Courses Offered C: " << numCourse << endl;
    cout << "Number of Students S:" << numStudent << endl;
    cout << "Number of Courses Per Student K: " << numCoursePerStudent << endl;
    cout << "Section Size: " << sectionSize << endl;
    cout << "Split: " << split << endl;
    cout << "Dist: " << dist << endl;



     



    return 0;
   */
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
