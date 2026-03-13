#include"mtime.h"
#include<iostream>
using namespace Mstd;
int main(){
    Mtime time(12, 30, 45);
    Mtime otherTime(1, 45, 30);
    Mtime sumTime = time + otherTime;
    std::cout << "Sum of times: " << sumTime << std::endl;
    Mtime diffTime = time - otherTime;
    std::cout << "Difference of times: " << diffTime << std::endl;
}