//
//  SectionSplit.cpp
//  Project_Part1
//
//  Created by Michael Watts on 3/26/19.
//  Copyright © 2019 Michael Watts. All rights reserved.
//

#include "SectionSplit.hpp"
vector<Class> simple(vector<Class>& classes, int size){
  
    int min = (2 * size)/3;
    int max = (4 * size)/3;
    if(min == 0){
        min = 1;
    }


    for(int i = 0; i < classes.size(); i++){
        if(classes.at(i).getSize() > max){
            Class C = classes.at(i);
           // double y = C.getCourseNum();
            classes.erase(classes.begin()+i);
            i--;
            while(C.getSize() > max){
                Class minClass((C.getCourseNum() + .001), size);
                C.setCourseNum(minClass.getCourseNum()+ .001);
              //  double x = minClass.getCourseNum();
           //     y = C.getCourseNum();
                for(int j = 0; j< min; j++){
                    Student S = C.pop();
                    minClass.push(S);
                }
                classes.push_back(minClass);
                classes.push_back(C);
            }

       
        }
    }

    return classes;
}
vector<Class> complex(vector<Class>& classes, int size){

    int min = (2 * size)/3;
    int max = (4 * size)/3;

    if(min == 0){
        min = 1;
    }
    
    for(int i = 0; i < classes.size(); i++){
        
        if(classes.at(i).getSize() > max){
            
            Class C = classes.at(i);
            classes.erase(classes.begin()+i);
            Class minClass(C.getCourseNum()+.001, size);
            C.setCourseNum(minClass.getCourseNum() + .001);
            minClass.push(C.pop());
            
            for(int j = 0; j < C.getSize(); j++){
                minClass.detect_conflict();
                int pairing = minConflict(C.getClassList(), minClass.getConflictList());
                if(pairing == -1){
                    cout << "Cannot Divide Section" << endl;
                    break;
                    
                }
                minClass.push(C.getClassList().at(pairing));
                
                C.students.erase(C.students.begin() + pairing);
                if(minClass.getSize() >= min){
                    classes.push_back(minClass);
                  
                    classes.push_back(C);
                    break;
                }
            }
            i--;

        }
    }

    return classes;
}
int minConflict(vector<Student> students, vector<double> conList){
    int min = 0;
    int pos = -1;
    for(int i = 0; i < students.size(); i++){
        int count = 0;
        for(int j = 0; j < conList.size(); j++){
            double courseID = conList.at(j);
            
            for(int k = 0; k < students.at(i).getCourseList().size(); k++){
                if(students.at(i).getCourseList().at(k) == courseID){
                    count++;
                //    cout << students.at(i).getCourseList().at(k) << " == " << courseID << endl;
                }
            }
           // cout << endl << endl<<endl;

        }
        if(count >= min){
            min = count;
            pos = i;
        }
        
    }
    return pos;
}
