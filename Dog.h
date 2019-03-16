#ifndef DOG_H
#define DOG_H

#include <string>

using namespace std;

class Dog {
    public:
        Dog(string dogName, int age, int weight);
        int getAge();
        bool getSubjectToDiscount();
        float getBasePremium();
        virtual string displayDogBreed();
        virtual ~Dog();
    protected:string dogName;
        char breed;
        int age;
        int weight;
        bool subjectToDiscount;
        int riskWeight;
        float belowRiskWeightPremium;
        float atOrAboveRiskWeightPremium;
    private:
};

#endif // DOG_H
