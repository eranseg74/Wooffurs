#include "Doberman.h"

Doberman::Doberman(string dogName, int age, int weight) : Dog(dogName, age, weight) {
    this->dogName = dogName;
    this->age = age;
    this->weight = weight;
    this->breed = 'd';
    this->subjectToDiscount = true;
    this->riskWeight = 35;
    this->belowRiskWeightPremium = 28.16f;
    this->atOrAboveRiskWeightPremium = 30.00f;
}

string Doberman::displayDogBreed() {
    return "a Doberman";
}

Doberman::~Doberman()
{
    //dtor
}
