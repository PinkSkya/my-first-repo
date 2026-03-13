#include"mtime.h"
#include<iostream>
using namespace Mstd;
using std::cout;
using std::endl;
Mtime::Mtime(int h, int m, int s){
    hour = h;
    minute = m;
    second = s;
}

const Mtime Mtime::operator+(const Mtime& other){
    int totalSeconds = second + other.second;
    int totalMinutes = minute + other.minute + totalSeconds / 60;
    int totalHours = hour + other.hour + totalMinutes / 60;

    totalSeconds %= 60;
    totalMinutes %= 60;
    totalHours %= 24;

    return Mtime(totalHours, totalMinutes, totalSeconds);
}

const Mtime Mtime::operator-(const Mtime& other){
    int totalSeconds = second - other.second;
    int totalMinutes = minute - other.minute;
    int totalHours = hour - other.hour;

    if (totalSeconds < 0) {
        totalSeconds += 60;
        totalMinutes--;
    }
    if (totalMinutes < 0) {
        totalMinutes += 60;
        totalHours--;
    }
    if (totalHours < 0) {
        totalHours += 24;
    }

    return Mtime(totalHours, totalMinutes, totalSeconds);
}

