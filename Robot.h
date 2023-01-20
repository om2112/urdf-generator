//
//  Robot.h
//  URDF_generator
//
//  Created by Omkumar Delvadia on 14/10/22.
//

#ifndef Robot_h
#define Robot_h

#include "Link.h"
#include "Joint.h"

#include <vector>
#include <fstream>

class Robot{
public:
    std::vector<Link> links;
    std::vector<Joint> joints;
    std::string name;
    
    void write(std::fstream &file){
        file<<"<robot name=\""<<name<<"\">\n";
        for (Link link:links){
            link.write(file);
        }
        
        for (Joint joint:joints){
            joint.write(file);
        }
        file<<"</robot>\n";
    }
};

#endif /* Robot_h */
