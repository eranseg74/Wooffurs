#include "GermanShepherd.h"

GermanShepherd::GermanShepherd(string dogName, int age, int weight) : Dog(dogName, age, weight) {
    this->dogName = dogName;
    this->age = age;
    this->weight = weight;
    this->breed = 'g';
    this->subjectToDiscount = true;
    this->riskWeight = 30;
    this->belowRiskWeightPremium = 27.50f;
    this->atOrAboveRiskWeightPremium = 29.75f;
}

string GermanShepherd::displayDogBreed() {
    return "a German Shepherd";
}

GermanShepherd::~GermanShepherd()
{
    //dtor
}
