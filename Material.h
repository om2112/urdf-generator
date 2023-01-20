//
//  Material.h
//  URDF_generator
//
//  Created by Omkumar Delvadia on 14/10/22.
//

#ifndef Material_h
#define Material_h
#include <string>
#include <fstream>
#include <limits>

class Material{
public:
    std::string name {};
    float color [4] {};
    std::string texture {};
    void write(std::fstream &file){
        if (name.empty()){
            
        }
        else{
            file<<"\t\t<material name=\""<<name<<"\">\n";
            file<<"\t\t\t<color rgba=\""<<color[0]<<" "<<color[1]<<" "<<color[2]<<" "<<color[3]<<"\"/>\n";
            file<<"\t\t</material>\n";
        }
    }
};

#endif /* Material_h */
