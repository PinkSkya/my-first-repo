#pragma once
#include<iostream>
#ifndef MTIME_H
#define MTIME_H
namespace Mstd{
    class Mtime{
    private:
        int hour;
        int minute;
        int second;
    public:
        Mtime(int h, int m, int s);
        const Mtime operator+(const Mtime& other);
        const Mtime operator-(const Mtime& other);
        friend std::ostream& operator<<(std::ostream& os, const Mtime& time){
            os << time.hour << ":" << time.minute << ":" << time.second;
            return os;
        }
};
}

#endif