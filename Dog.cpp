#include "Dog.h"

string dogName;
char breed;
int age;
int weight;
bool subjectToDiscount;
int riskWeight;
float belowRiskWeightPremium;
float atOrAboveRiskWeightPremium;

Dog::Dog(string dogName, int age, int weight) {
    this->dogName = dogName;
    this->age = age;
    this->weight = weight;
}

int Dog::getAge() {
    return this->age;
}

bool Dog::getSubjectToDiscount() {
    return this->subjectToDiscount;
}

float Dog::getBasePremium() {
    return (weight < riskWeight) ? belowRiskWeightPremium : atOrAboveRiskWeightPremium;
}

string Dog::displayDogBreed() {
    return "a Dog";
}

Dog::~Dog() {
    //dtor
}
