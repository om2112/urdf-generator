//
//  Joint.h
//  URDF_generator
//
//  Created by Omkumar Delvadia on 14/10/22.
//

#ifndef Joint_h
#define Joint_h

#include <string>
#include "Link.h"
#include "Origin.h"
#include "Dynamics.h"
#include "Limit.h"
#include "Safety_controller.h"

#include <fstream>

class Joint{
public:
    std::string name {};
    std::string type {};
    
    Origin origin {};
    Link parent;
    Link child;
    float axis [3] {1,0,0};
    std::string calibration_type {};
    float calibration_value {};
    Dynamics dynamics;
    Limit limit;
    Safety_controller safety_controller;
    
    void write(std::fstream &file){
        file<<"<joint name=\""<<name<<"\" type=\""<<type<<"\">\n";
        origin.write(file, 1);
        file<<"\t<axis xyz=\""<<axis[0]<<" "<<axis[1]<<" "<<axis[2]<<"\" />\n";
        file<<"\t<parent link=\""<<parent.name<<"\">\n";
        file<<"\t<child link=\""<<child.name<<"\">\n";
        file<<"\t<calibration "<<calibration_type<<"=\""<<calibration_value<<"\"/>\n";
        dynamics.write(file);
        limit.write(file);
        safety_controller.write(file);
        file<<"</joint>\n";
    }
    
    
    
};

#endif /* Joint_h */
