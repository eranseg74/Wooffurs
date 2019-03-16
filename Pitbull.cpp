#include "Pitbull.h"

Pitbull::Pitbull(string dogName, int age, int weight) : Dog(dogName, age, weight) {
    this->dogName = dogName;
    this->age = age;
    this->weight = weight;
    this->breed = 'p';
    this->subjectToDiscount = false;
    this->riskWeight = 20;
    this->belowRiskWeightPremium = 30.20f;
    this->atOrAboveRiskWeightPremium = 35.15f;
}

string Pitbull::displayDogBreed() {
    return "a Pitbull";
}

Pitbull::~Pitbull() {
    //dtor
}
