// SWSS - C++.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
using namespace std;

int Sensor(int test) {
  return test;
}

void MechElements(int SensorInfo) {
  if (SensorInfo == 0){
    //allow any material to pass, this is undefined material
  } else if (SensorInfo == 1){
    //sort into material 1
  } else if (SensorInfo == 2){
    //sort into material 2
  } else if (SensorInfo == 3){
    //sort into material 3
  } else if (SensorInfo == 4){
    //sort into material 4
  } 
  // many of these could be made depending on number of known materials
}

int DataInterpret(int sensorData[6]) {
  if (((sensorData[0] > 0)&&(sensorData[0] < 100))&&((sensorData[1] > 0)&&(sensorData[1] < 100))){
      // example
    return 1;
  }else if (sensorData[1] > 100){
    // nested if statements will be used also here, so that we can check for very specific conditions
    return 2;
  }
  return 0; // no material or unknown material
}


void loop(){
  while (true) {
    int sensorData = Sensor(test()); // return number
    int SensorInterp = DataInterpret(sensorData);
    MechElements(SensorInterp);
  }
}

int test(){
  int testValues[] = (10,10,0,0,0,0);
  cout << "Hello World!";
  return testValues;
}