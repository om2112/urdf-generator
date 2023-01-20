//
//  Inertial.h
//  URDF_generator
//
//  Created by Omkumar Delvadia on 14/10/22.
//

#ifndef Inertial_h
#define Inertial_h
#include "Origin.h"
#include "Inertia.h"
#include <fstream>

class Inertial{
public:
    Origin origin;
    float mass {0};
    Inertia inertia {};
    void write(std::fstream &file){
        file<<"\n\t<inertial>\n";
        origin.write(file, 0);
        file<<"\t\t<mass value=\""<<mass<<"\">\n";
        inertia.write(file);
        file<<"\t</inertial>\n";
    }
};


#endif /* Inertial_h */
