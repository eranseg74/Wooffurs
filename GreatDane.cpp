#include "GreatDane.h"

GreatDane::GreatDane(string dogName, int age, int weight) : Dog(dogName, age, weight) {
    this->dogName = dogName;
    this->age = age;
    this->weight = weight;
    this->breed = 't';
    this->subjectToDiscount = true;
    this->riskWeight = 55;
    this->belowRiskWeightPremium = 25.10f;
    this->atOrAboveRiskWeightPremium = 25.20f;
}

string GreatDane::displayDogBreed() {
    return "a Great Dane";
}

GreatDane::~GreatDane()
{
    //dtor
}
