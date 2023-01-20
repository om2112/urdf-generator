//
//  Safety_controller.h
//  URDF_generator
//
//  Created by Omkumar Delvadia on 14/10/22.
//

#ifndef Safety_controller_h
#define Safety_controller_h

#include <fstream>

class Safety_controller{
public:
    float soft_lower_limit {};
    float soft_upper_limit {};
    float k_position {};
    float k_velocity {};
    
    void write(std::fstream &file){
        file<<"\t<safety_controller k_velocity=\""<<k_velocity<<"\" k_position=\""<<k_position<<"\" soft_lower_limit=\""<<soft_lower_limit<<"\" soft_upper_limit=\""<<soft_upper_limit<<"\" />\n";
    }
};

#endif /* Safety_controller_h */
