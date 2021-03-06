//
// Created by lixin on 19-1-23.
//

#ifndef BASEEXPERIMENTFORPLSLAM_TICTOC_HPP
#define BASEEXPERIMENTFORPLSLAM_TICTOC_HPP


#include <ctime>
#include <cstdlib>
#include <chrono>

class TicToc{
public:
    TicToc(){
        tic();
    }

    void tic(){
        start = std::chrono::system_clock::now();
    }

    double toc(){
        end = std::chrono::system_clock::now();
        std::chrono::duration<double> elapsed_seconds = end - start;
        return elapsed_seconds.count() * 1000;
    }

private:
    std::chrono::time_point<std::chrono::system_clock> start, end;
};




#endif //BASEEXPERIMENTFORPLSLAM_TICTOC_HPP
