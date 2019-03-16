#include "ChowChow.h"

ChowChow::ChowChow(string dogName, int age, int weight) : Dog(dogName, age, weight) {
    this->dogName = dogName;
    this->age = age;
    this->weight = weight;
    this->breed = 'c';
    this->subjectToDiscount = true;
    this->riskWeight = 24;
    this->belowRiskWeightPremium = 25.10f;
    this->atOrAboveRiskWeightPremium = 27.50f;
}

string ChowChow::displayDogBreed() {
    return "a Chow Chow";
}

ChowChow::~ChowChow()
{
    //dtor
}
