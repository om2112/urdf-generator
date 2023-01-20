//
//  Inertia.h
//  URDF_generator
//
//  Created by Omkumar Delvadia on 14/10/22.
//

#ifndef Inertia_h
#define Inertia_h

#include <fstream>

class Inertia{
public:
    float Ixx {0};
    float Ixy {0};
    float Ixz {0};
    
    float Iyy {0};
    float Iyz {0};
    
    float Izz {0};
    
    void write(std::fstream &file){
        file<<"\t\t<inertia ixx=\""<<Ixx<<"\" "<<"ixy=\""<<Ixy<<"\" "<<"ixz=\""<<Ixz<<"\" "<<"iyy=\""<<Iyy<<"\" "<<"iyz=\""<<Iyz<<"\" "<<"izz=\""<<Izz<<"\" />\n";
    }
};


#endif /* Inertia_h */
