//
//  Link.h
//  URDF_generator
//
//  Created by Omkumar Delvadia on 14/10/22.
//

#ifndef Link_h
#define Link_h

#include <string>
#include "Inertial.h"
#include "Visual.h"
#include "Collision.h"
#include <fstream>

class Link{
public:
    std::string name {};
    Inertial inertial;
    Visual visual;
    Collision collision;
    
    void write(std::fstream &file){
        file<<"<link name=\""<<name<<"\">\n";
        inertial.write(file);
        visual.write(file);
        collision.collision(file);
        file<<"\n</link>\n";
    }
    
};

#endif /* Link_h */
