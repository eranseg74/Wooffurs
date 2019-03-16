#include "OtherBreed.h"

OtherBreed::OtherBreed(string dogName, int age, int weight) : Dog(dogName, age, weight) {
    this->dogName = dogName;
    this->age = age;
    this->weight = weight;
    this->breed = 'b';
    this->subjectToDiscount = true;
    this->riskWeight = 35;
    this->belowRiskWeightPremium = 4.95f;
    this->atOrAboveRiskWeightPremium = 8.95f;
}

string OtherBreed::displayDogBreed() {
    return "an Other Breed";
}

OtherBreed::~OtherBreed()
{
    //dtor
}
