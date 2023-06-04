#include<iostream>
using namespace std;

class Rickshaw {
public:
    void start() ;
    void stop() ;
    void drive() ;
   
};


class TraditionalRickshaw : public Rickshaw {
public:
    void manualPedaling(); 
    void handBrakes() ;
    void uniqueDesign();    
};


class CNGRickshaw : public Rickshaw {
public:
    void CNGFuelSystem();
    void greenNumberPlate(); 
    void reliableEngine() ;
    
};


class ElectricRickshaw : public Rickshaw {
public:
    void electricMotor() ;
    void lowNoise();
    void zeroEmissions();
  
};
int main (){
	ElectricRickshaw e1;
	e1.zeroEmissions();
}
