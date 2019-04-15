//
//  Distributions.cpp
//  Project_Part1
//
//  Created by Michael Watts on 3/16/19.
//  Copyright © 2019 Michael Watts. All rights reserved.
//

#include "Distributions.hpp"
vector<Student> uniform(vector<Student>& students, int numCoursePerStudent, int numCourse){
    
    random_device rand;
    mt19937 gen(rand());
    uniform_int_distribution<> dis(0, numCourse-1);
    for(int i = 0; i < students.size(); i++){
        while(students.at(i).getSize()< numCoursePerStudent){
            int course = dis(gen);
            students.at(i).addCourse(course);
            
        }
    }
    
    return students;
};

vector<Student> twoTier(vector<Student>& students, int numCoursePerStudent, int numCourse){
    
    if(students.size() < 10){
        return uniform(students, numCoursePerStudent, numCourse);
    }
    int bound = floor(.1 * numCourse);
    
    vector<int> options;
    for(int i = 0; i < bound; i++){
        for(int j = 0; j < 50; j++){
            options.push_back(i);
        }
    }
    int upper = ceil(options.size()/(numCourse-bound));
    if(upper == 0){
        upper = 1;
    }
    for(int i = bound; i < numCourse; i++){
        for(int j = 0; j < upper; j++){
        options.push_back(i);
        }
    }
    random_device rand;
    mt19937 gen(rand());
    uniform_int_distribution<> dis(0, options.size()-1);
    for(int i = 0; i < students.size(); i++){
       while(students.at(i).getSize()< numCoursePerStudent){
            int course = dis(gen);
            students.at(i).addCourse(options.at(course));
            
        }
    }
   
    return students;
    
    
}
vector<Student> fourTier(vector<Student>& students, int numCoursePerStudent, int numCourse){

    if(students.size() < 4){
        return uniform(students, numCoursePerStudent, numCourse);
    }
    int divisor = floor(.25 * numCourse);
    vector<int> options;
    for(int i = 0; i < divisor; i ++){
       // int amount = 40/divisor;
        for(int j = 0; j < 40; j++){
            options.push_back(i);
        }
    }
    for(int i = divisor; i < divisor*2; i ++){
       // int amount = 30/divisor;
        for(int j = 0; j < 30; j++){
            options.push_back(i);
        }
    }
    for(int i = divisor*2; i < divisor*3; i ++){
       // int amount = 20/divisor;
        for(int j = 0; j < 20; j++){
            options.push_back(i);
        }
    }
    for(int i = divisor*3; i < students.size(); i ++){
        int amount = divisor * 10/ceil(.25 * numCourse);
        for(int j = 0; j < amount; j++){
            options.push_back(i);
        }
    }
    random_device rand;
    mt19937 gen(rand());
    uniform_int_distribution<> dis(0, options.size()-1);
    for(int i = 0; i < students.size(); i++){
        while(students.at(i).getSize()< numCoursePerStudent){
            int course = dis(gen);
            students.at(i).addCourse(options.at(course));
            
        }
    }

    return students;
}
vector<Student> normalish(vector<Student>& students, int numCoursePerStudent, int numCourse){

    if(students.size() < 10){
        return uniform(students, numCoursePerStudent, numCourse);
    }
    int divisor = floor(.1 * numCourse);
    vector<int> options;
    for(int i = 0; i < divisor; i ++){
     //   int amount = 2/divisor;
        for(int j = 0; j < 2; j++){
            options.push_back(i);
        }
    }
    for(int i = divisor; i < divisor*2; i ++){
     //   int amount = 3/divisor;
        for(int j = 0; j < 3; j++){
            options.push_back(i);
        }
    }
    for(int i = divisor*2; i < divisor*3; i ++){
    //    int amount = 10/divisor;
        for(int j = 0; j < 10; j++){
            options.push_back(i);
        }
    }
    for(int i = divisor*3; i < divisor*4; i ++){
     //   int amount = 15/divisor;
        for(int j = 0; j < 15; j++){
            options.push_back(i);
        }
    }
    for(int i = divisor*4; i < divisor*5; i ++){
    //    int amount = 20/divisor;
        for(int j = 0; j < 20; j++){
            options.push_back(i);
        }
    }
    for(int i = divisor*5; i < divisor*6; i ++){
     //   int amount = 20/divisor;
        for(int j = 0; j < 20; j++){
            options.push_back(i);
        }
    }
    for(int i = divisor*6; i < divisor *7; i ++){
      //  int amount = 15/divisor;
        for(int j = 0; j < 15; j++){
            options.push_back(i);
        }
    }
    for(int i = divisor*7; i < divisor*8; i ++){
      //  int amount = 10/divisor;
        for(int j = 0; j < 10; j++){
            options.push_back(i);
        }
    }
    for(int i = divisor*8; i < divisor*9; i ++){
     //   int amount = 3/divisor;
        for(int j = 0; j < 3; j++){
            options.push_back(i);
        }
    }
    for(int i = divisor*9; i < students.size(); i ++){
       int amount = divisor * 2/ceil(.10 * numCourse);
        for(int j = 0; j < amount; j++){
            options.push_back(i);
        }
    }
    random_device rand;
    mt19937 gen(rand());
    uniform_int_distribution<> dis(0, options.size()-1);
    for(int i = 0; i < students.size(); i++){
        while(students.at(i).getSize()< numCoursePerStudent){
            int course = dis(gen);
            students.at(i).addCourse(options.at(course));
            
        }
    }

    return students;
}
