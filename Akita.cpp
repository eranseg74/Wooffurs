#include "Akita.h"

Akita::Akita(string dogName, int age, int weight) : Dog(dogName, age, weight) {
    this->dogName = dogName;
    this->age = age;
    this->weight = weight;
    this->breed = 'k';
    this->subjectToDiscount = false;
    this->belowRiskWeightPremium = 19.75f;
}

float Akita::getBasePremium() {
    return belowRiskWeightPremium;
}

string Akita::displayDogBreed() {
    return "an Akita";
}

Akita::~Akita() {
    //dtor
}
