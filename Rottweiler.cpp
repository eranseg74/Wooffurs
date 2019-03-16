#include "Rottweiler.h"

Rottweiler::Rottweiler(string dogName, int age, int weight) : Dog(dogName, age, weight) {
    this->dogName = dogName;
    this->age = age;
    this->weight = weight;
    this->breed = 'r';
    this->subjectToDiscount = false;
    this->riskWeight = 45;
    this->belowRiskWeightPremium = 28.00f;
    this->atOrAboveRiskWeightPremium = 29.75f;
}

string Rottweiler::displayDogBreed() {
    return "a Rottweiler";
}

Rottweiler::~Rottweiler()
{
    //dtor
}
