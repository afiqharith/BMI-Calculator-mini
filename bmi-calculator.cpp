//BMI Calculator
//Date: 27 Nov 2017

#include <iostream>
using namespace std;

float BMI(float,float);
float BMIcal;
void bmiGroup (float);

int main(){

    float weight, height;


    cout << "\nThe Body Mass Index(BMI) Calculator for adult 20 years and older\n\n";


    cout << "\nPlease enter your weight(kg): \n";
    cin >> weight;

    cout << "Please enter your height(m): \n";
    cin >> height;

    BMI(weight, height);

    cout << "The BMI of your body is: " << BMIcal << endl;

    bmiGroup(BMIcal);

    return 0;

}

float BMI (float weight, float height){

BMIcal=weight/(height*height);

}

void bmiGroup(float BMIcal){

    if (BMIcal <= 18.5)
        cout << "Your BMI is underweight.";

    else if (BMIcal >= 18.5 && BMIcal <= 24.9)
        cout << "Your BMI is healthy.";

    else if (BMIcal >= 25 && BMIcal <= 29.9)
        cout << "Your BMI is overweight.";

    else
        cout << "Your BMI is obese.";
}
