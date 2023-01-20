//
//  Origin.h
//  URDF_generator
//
//  Created by Omkumar Delvadia on 14/10/22.
//

#ifndef Origin_h
#define Origin_h

#include <fstream>
#include <iostream>

class Origin{
public:
    float x {0};
    float y {0};
    float z {0};
    
    float r_ang {0};
    float p_ang {0};
    float y_ang {0};
    
    void write(std::fstream &file, int is_joint){
        if (is_joint == 0){
        file<<"\t\t<origin xyz=\""<<x<<" "<<y<<" "<<z<<"\" rpy=\""<<r_ang<<" "<<p_ang<<" "<<y_ang<<"\"/>\n";
        }else{
            file<<"\t<origin xyz=\""<<x<<" "<<y<<" "<<z<<"\" rpy=\""<<r_ang<<" "<<p_ang<<" "<<y_ang<<"\"/>\n";
        }
    }
};


#endif /* Origin_h */
