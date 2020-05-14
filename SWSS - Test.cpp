// testSWSS.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int testValues[6];
int sensorData[6];

void Sensor() {
	sensorData[0] = testValues[0];
	sensorData[1] = testValues[1];
	sensorData[2] = testValues[2];
	sensorData[3] = testValues[3];
	sensorData[4] = testValues[4];
	sensorData[5] = testValues[5];
}

void MechElements(int SensorInfo) {
	if (SensorInfo == 0) {
		//allow any material to pass, this is undefined material
		cout << "   No Material or Undefined Material \n";
	}
	else if (SensorInfo == 1) {
		//sort into material 1
		cout << "   Material 1 \n";
	}
	else if (SensorInfo == 2) {
		//sort into material 2
		cout << "   Material 2 \n";
	}
	else if (SensorInfo == 3) {
		//sort into material 3
		cout << "   Material 3 \n";
	}
	else if (SensorInfo == 4) {
		//sort into material 4
		cout << "   Material 4 \n";
	}
	else if (SensorInfo == 5) {
		//sort into material 4
		cout << "   Material 5 \n";
	}
	// many of these could be made depending on number of known materials
}

int DataInterpret() {
	if (((sensorData[0] > 0) && (sensorData[0] < 100)) && ((sensorData[1] > 0) && (sensorData[1] < 100))) {
		// example
		return 1;
	}
	else if (sensorData[0] > 100) {
		// nested if statements will be used also here, so that we can check for very specific conditions
		return 2;
	}
	else if ((sensorData[2] > 100) && ((sensorData[3] > 0) && (sensorData[3] < 100))) {
		return 3;
	}
	else if (sensorData[5] > 100) {
		// nested if statements will be used also here, so that we can check for very specific conditions
		return 4;
	}
	else if ((sensorData[0] < 100) && ((sensorData[4] > 40) && (sensorData[4] < 60))) {
		return 5;
	}
	else {
		return 0; // no material or unknown material
	}
	
}

void test(int i) {
	if (i == 0) {
		cout << "   Test Values 10, 10, 0, 0, 0, 0. \n";
		cout << "   Expected Result: Material 1 \n";
		testValues[0] = 10;
		testValues[1] = 10;
		testValues[2] = 0;
		testValues[3] = 0;
		testValues[4] = 0;
		testValues[5] = 0;
	}
	else if (i == 1) {
		cout << "   Test Values 110, 0, 0, 0, 0, 0. \n";
		cout << "   Expected Result: Material 2 \n";
		testValues[0] = 110;
		testValues[1] = 0;
		testValues[2] = 0;
		testValues[3] = 0;
		testValues[4] = 0;
		testValues[5] = 0;
	}
	else if (i == 2) {
		cout << "   Test Values 0, 0, 110, 90, 0, 0. \n";
		cout << "   Expected Result: Material 3 \n";
		testValues[0] = 0;
		testValues[1] = 0;
		testValues[2] = 110;
		testValues[3] = 90;
		testValues[4] = 0;
		testValues[5] = 0;
	}
	else if (i == 3) {
		cout << "   Test Values 0, 0, 0, 0, 0, 0. \n";
		cout << "   Expected Result: No Material or Undefined Material \n";
		testValues[0] = 0;
		testValues[1] = 0;
		testValues[2] = 0;
		testValues[3] = 0;
		testValues[4] = 0;
		testValues[5] = 0;
	}
	else if (i == 4) {
		cout << "   Test Values 0, 0, 0, 0, 0, 110. \n";
		cout << "   Expected Result: Material 4 \n";
		testValues[0] = 0;
		testValues[1] = 0;
		testValues[2] = 0;
		testValues[3] = 0;
		testValues[4] = 0;
		testValues[5] = 110;
	}
	else {
		cout << "   Test Values 10, 0, 0, 0, 50, 0. \n";
		cout << "   Expected Result: Material 5 \n";
		testValues[0] = 10;
		testValues[1] = 0;
		testValues[2] = 0;
		testValues[3] = 0;
		testValues[4] = 50;
		testValues[5] = 0;
	}
}

int main() {
	cout << "\n";
	for (int i = 0; i < 6; i++) {
		test(i);
		Sensor(); // return number
		int SensorInterp = DataInterpret();
		MechElements(SensorInterp);
	}
}