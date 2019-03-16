#include <iostream>
#include <iomanip>
#include <string>

#include "Pitbull.h"
#include "Doberman.h"
#include "Rottweiler.h"
#include "GermanShepherd.h"
#include "ChowChow.h"
#include "GreatDane.h"
#include "PresaCanario.h"
#include "Akita.h"
#include "AlaskanMalamute.h"
#include "Husky.h"
#include "OtherBreed.h"

using namespace std;

int main() {
    cout << setiosflags(ios::fixed);
    cout << setprecision(2);
    string codeOptions = "pdrgctskmhb";
    int dogCount = 0;
    float totalPremium = 0.0f;
    cout << "Please enter the number of dogs in your household." << endl;
    cin >> dogCount;
    for(int i = 1; i <= dogCount; i++) {
        // Declare a Dog pointer without initializing it
        Dog *dog;
        float basePremium = 0.0f;
        float actualPremium = 0.0f;
        int weight = 0;
        int age = 0;
        bool subjectToDiscount;
        char breedCode = 'a';
        string dogName = "";
        cout << "Enter the name of dog #" << i <<":" << endl;
        cin.ignore();
        getline(cin, dogName);
        cout << "Enter the breed code for " << dogName << ": ";
        cin >> breedCode;
        // Validate the breed code
        if(codeOptions.find(breedCode) == string::npos) {
            cout << "Sorry. That is not a valid breed code. Please re-enter this dog's information" << endl;
            basePremium = 0.0f;
            i--;
        } else {
            cout << "Enter the current age for " << dogName << ": ";
            cin >> age;
            cout << "Enter the weight for " << dogName << ": ";
            cin >> weight;
            // Create a specific dog object according to the dog's breed
            switch(breedCode) {
                case 'p': {
                    dog = new Pitbull(dogName, age, weight);
                    break;
                }
                case 'd': {
                    dog = new Doberman(dogName, age, weight);
                    break;
                }
                case 'r': {
                    dog = new Rottweiler(dogName, age, weight);
                    break;
                }
                case 'g': {
                    dog = new GermanShepherd(dogName, age, weight);
                    break;
                }
                case 'c': {
                    dog = new ChowChow(dogName, age, weight);
                    break;
                }
                case 't': {
                    dog = new GreatDane(dogName, age, weight);
                    break;
                }
                case 's': {
                    dog = new PresaCanario(dogName, age, weight);
                    break;
                }
                case 'k': {
                    dog = new Akita(dogName, age, weight);
                    break;
                }
                case 'm': {
                    dog = new AlaskanMalamute(dogName, age, weight);
                    break;
                }
                case 'h': {
                    dog = new Husky(dogName, age, weight);
                    break;
                }
                case 'b': {
                    dog = new OtherBreed(dogName, age, weight);
                    break;
                }
                default:
                    cout << "Could not create dog" << endl;
            }
            cout << dogName << " is " << dog->displayDogBreed() << "." << endl;
            // Calculate the base premium depending on the risk weight
            basePremium = dog->getBasePremium();
            // Check the dog's entitlement to discount
            subjectToDiscount = dog->getSubjectToDiscount();
            // Update the actual premium according to the dog's age (depending on its entitlement) and its weight
            actualPremium = (subjectToDiscount && dog->getAge() > 13) ? basePremium * 0.8 : basePremium;
            actualPremium = (weight > 50) ? actualPremium + basePremium / 4 : actualPremium;

            cout << "The monthly premium for " << dogName << " is " << actualPremium << "." << endl;
            totalPremium += actualPremium;
        }
    }
    cout << endl;
    cout << "The total monthly premium for all dogs is " << totalPremium << "." << endl;
    return 0;
}
