//
//  Collision.h
//  URDF_generator
//
//  Created by Omkumar Delvadia on 14/10/22.
//

#ifndef Collision_h
#define Collision_h

#include "Origin.h"
#include "Geometry.h"
#include <string>
#include <iostream>
#include <fstream>
#include <algorithm>

class Collision{
public:
    std::string name {};
    Origin origin{};
    Geometry geometry {};
    
    void collision(std::fstream &file){
        file<<"\n\t<collision>\n";
        origin.write(file, 0);
        geometry.write(file);
        file<<"\t<collision>\n";
    }
};

#endif /* Collision_h */
