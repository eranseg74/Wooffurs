#include "PresaCanario.h"

PresaCanario::PresaCanario(string dogName, int age, int weight) : Dog(dogName, age, weight) {
    this->dogName = dogName;
    this->age = age;
    this->weight = weight;
    this->breed = 's';
    this->subjectToDiscount = false;
    this->riskWeight = 45;
    this->belowRiskWeightPremium = 20.01f;
    this->atOrAboveRiskWeightPremium = 20.55f;
}

string PresaCanario::displayDogBreed() {
    return "a Presa Canario";
}

PresaCanario::~PresaCanario()
{
    //dtor
}
