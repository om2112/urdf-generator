//
//  Visual.h
//  URDF_generator
//
//  Created by Omkumar Delvadia on 14/10/22.
//

#ifndef Visual_h
#define Visual_h

#include "Origin.h"
#include "Geometry.h"
#include "Material.h"
#include <fstream>

class Visual{
public:
    std::string name {};
    Origin origin {};
    Geometry geometry{};
    Material material {};
    
    void write(std::fstream &file){
        file<<"\n\t<visual>\n";
        origin.write(file, 0);
        geometry.write(file);
        material.write(file);
        file<<"\t</visual>\n";
    }
};

#endif /* Visual_h */
