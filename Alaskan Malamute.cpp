#include "AlaskanMalamute.h"

AlaskanMalamute::AlaskanMalamute(string dogName, int age, int weight) : Dog(dogName, age, weight) {
    this->dogName = dogName;
    this->age = age;
    this->weight = weight;
    this->breed = 'm';
    this->subjectToDiscount = true;
    this->riskWeight = 38;
    this->belowRiskWeightPremium = 15.50f;
    this->atOrAboveRiskWeightPremium = 18.15f;
}

string AlaskanMalamute::displayDogBreed() {
    return "an Alaskan Malamute";
}

AlaskanMalamute::~AlaskanMalamute()
{
    //dtor
}
