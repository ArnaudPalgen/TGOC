//
// Created by Aymerick on 12-12-18.
//

#ifndef CHALLENGE_QAP_H
#define CHALLENGE_QAP_H


#include <iostream>
#include <time.h>
#include <algorithm>
#include "common.h"

class QAP {

public:
    static int computeObjectiveValue(const int&, const int[], int[][N_MAX], int[][N_MAX]);
    static bool isAdmissibleSolution(const int&, const int[]);
    static int* solveRandomly(const int &, int [][N_MAX], int [][N_MAX], const int &, int *);
};


#endif //CHALLENGE_QAP_H