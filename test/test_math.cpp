//
// Created by damien on 04/10/17.
//

#include "engine/vec.h"
#include <iostream>

using namespace Lumix;

int main(){
    Vec2 vec (1, 2);
    std::cout << "initial " << vec.x << " " << vec.y << std::endl;
    vec = vec * 2.0;
    std::cout << "final " << vec.x << " " << vec.y << std::endl;
    return 0;
}