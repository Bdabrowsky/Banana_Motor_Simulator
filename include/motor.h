#pragma once

#include<vector>

#include "grain.h"
#include "nozzle.h"

using namespace std;

class motor{

    public:
        nozzle nozz;

        vector< grain > grains;

        double pressure;
        double volume;
        double total_volume;
        double pressure_exit;
        double thrust;
        double thrust_coeffcient;
        double impulse;
        double specific_impulse;

        double kn;

        double correction_coeff;

        void init();

        void update();

        void parse();
    
};