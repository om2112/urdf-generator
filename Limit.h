//
//  Limit.h
//  URDF_generator
//
//  Created by Omkumar Delvadia on 14/10/22.
//

#ifndef Limit_h
#define Limit_h

#include <fstream>

class Limit{
public:
    float lower {};
    float upper {};
    float effort {};
    float velocity {};
    
    void write(std::fstream &file){
        file<<"\t<limit effort="<<effort<<"\" velocity=\""<<velocity<<"\" lower=\""<<lower<<"\" upper=\""<<upper<<"/>\n";
    }
};

#endif /* Limit_h */
