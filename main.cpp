//
//  main.cpp
//  URDF_generator
//
//  Created by Omkumar Delvadia on 14/10/22.
//

#include <iostream>
#include <string>
#include "Robot.h"
#include "Collision.h"
#include <fstream>
#include <ios>
#include "Link.h"
#include "Robot.h"


int main(int argc, const char * argv[]) {
    
    std::fstream file;
    file.open("~/Desktop/file.rtf",std::ios::app);
    
    Link my_link;
    
    my_link.name = "my_link";
    
    my_link.inertial.origin.x = 0;
    my_link.inertial.origin.y = 0;
    my_link.inertial.origin.z = 0.5;
    
    my_link.inertial.mass = 1;
    
    my_link.inertial.inertia.Ixx = 100;
    my_link.inertial.inertia.Ixy = 0;
    my_link.inertial.inertia.Ixz = 0;
    
    my_link.inertial.inertia.Ixx = 100;
    my_link.inertial.inertia.Ixx = 0;
    
    my_link.inertial.inertia.Ixx = 100;
    
    my_link.visual.name = "my_visual";
    my_link.visual.origin.x = 0;
    my_link.visual.origin.y = 0;
    my_link.visual.origin.z = 0;
    
    my_link.visual.origin.r_ang = 0;
    my_link.visual.origin.p_ang = 0;
    my_link.visual.origin.y_ang = 0;
    
    my_link.visual.geometry.type = "box";
    my_link.visual.geometry.size[0] = 1;
    my_link.visual.geometry.size[1] = 1;
    my_link.visual.geometry.size[2] = 1;
    
    my_link.visual.material.name = "Cyne";
    my_link.visual.material.color[0] = 0;
    my_link.visual.material.color[1] = 1.0;
    my_link.visual.material.color[2] = 1.0;
    my_link.visual.material.color[3] = 1.0;

    
    Collision collision;
    collision.name = "collision_1";
    collision.origin.x = 0;
    collision.origin.y = 0;
    collision.origin.z = 0;
    collision.origin.r_ang = 0;
    collision.origin.p_ang = 0;
    collision.origin.y_ang = 0;
    
    collision.geometry.type = "box";
    collision.geometry.size[0] = 1;
    collision.geometry.size[1] = 1;
    collision.geometry.size[2] = 1;
    collision.geometry.radius = 1;
    collision.geometry.length = 1;
    
    my_link.collision = collision;
    
    std::cout<<"Writing file"<<std::endl;
    my_link.write(file);
    std::cout<<"Writing finished"<<std::endl;
    file.close();
    
    
    Robot my_robot;
    my_robot.name = "My_Robot";
    
    return 0;
}
