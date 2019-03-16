#include "Husky.h"

Husky::Husky(string dogName, int age, int weight) : Dog(dogName, age, weight) {
    this->dogName = dogName;
    this->age = age;
    this->weight = weight;
    this->breed = 'h';
    this->subjectToDiscount = true;
    this->riskWeight = 20;
    this->belowRiskWeightPremium = 9.95f;
    this->atOrAboveRiskWeightPremium = 12.00f;
}

string Husky::displayDogBreed() {
    return "a Husky";
}

Husky::~Husky() {
    //dtor
}
