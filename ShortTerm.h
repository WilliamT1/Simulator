#ifndef PROJECT_SHORTTERM_H
#define PROJECT_SHORTTERM_H

#include <queue>
#include "CPU.h"

class ShortTerm {
//Get top value of ready_queue
    //Thats the PID
    //Go to PCB that equals the PID and get the PC value of the proccess
    //Put that value into the PC of the CPU
public:
    ShortTerm() {};
    std::queue<int> ready_queue;
    void dispatch(CPU* cpu);
};

#endif //PROJECT_SHORTTERM_H
