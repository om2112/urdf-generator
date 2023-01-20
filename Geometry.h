//
//  Geometry.h
//  URDF_generator
//
//  Created by Omkumar Delvadia on 14/10/22.
//

#ifndef Geometry_h
#define Geometry_h

#include <string>
#include <fstream>

class Geometry{
public:
    std::string type {};
    std::string mesh {};
    float size [3] {};
    float radius {};
    float length {};
    
    void write(std::fstream &file){
        file<<"\t\t<geometry>\n";
        if (type == "box"){
            file<<"\t\t\t<box size=\""<<size[0]<<" "<<size[1]<<" "<<size[2]<<"\" />\n";
        }else if (type == "cylinder"){
            file<<"\t\t\t<cylinder length=\""<<radius<<"\" radius=\""<<length<<"\"/>\n";
        }else if (type == "sphere"){
            file<<"\t\t\t<sphere radius=\""<<radius<<"\"/>\n";
        }else if (!type.empty()){
            file<<"\t\t\t<mesh filename = \""<<mesh<<"\"/>\n";
        }
        file<<"\t\t</geometry>\n";
    }
};

#endif /* Geometry_h */
