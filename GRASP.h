//
// Created by Aymerick on 15-12-18.
//

#ifndef CHALLENGE_GRASP_H
#define CHALLENGE_GRASP_H

#include <iostream>
#include <time.h>
#include "QAP.h"

class GRASP : public QAP {
    float alpha;

public:
    // Constructors
    GRASP(std::string &dataName, float alpha);

    // Methods
    int *run(const float &maxTimeSec) override;
    int *greedyProbability(int *s);
    float *computeProbabilities(int *s, const int &nS, float *p);
    int choseProbability(float *p);
    int *localSearch(int *s);
    void updateBest(int *s);
};


#endif //CHALLENGE_GRASP_H
