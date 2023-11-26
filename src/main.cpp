#include<cinttypes>
#include<math.h>
#include<stdio.h>
#include <nlohmann/json.hpp>
#include<string.h>

#include "config.h"
#include "motor.h"
#include "grain.h"
#include "propellant.h"
#include "io.h"




using json = nlohmann::json;


using namespace std;



motor mot;


int main(){

   
    mot.init();

    for(double T=0;T<simulationLength;T+=dT){
        mot.update();
        if(mot.grains[0].web <= 0.001){
            break;
        }

        ofstream temp("output.csv", ios::out | std::ofstream::app);
        temp << T << ",";
        temp.close();
    }

    mot.parse();
   
  

}