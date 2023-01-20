//
//  Dynamics.h
//  URDF_generator
//
//  Created by Omkumar Delvadia on 14/10/22.
//

#ifndef Dynamics_h
#define Dynamics_h

#include <fstream>
class Dynamics{
public:
    float damping {};
    float friction {};
    
    void write(std::fstream &file){
        file<<"\t<dynamics damping=\""<<damping<<"\""<<" friction=\""<<friction<<"\"/>\n";
    }
    
};

#endif /* Dynamics_h */
