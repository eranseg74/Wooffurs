#ifndef ALASKANMALAMUTE_H
#define ALASKANMALAMUTE_H

#include "Dog.h"

class AlaskanMalamute : public Dog {
    public:
        /** Default constructor */
        AlaskanMalamute(string dogName, int age, int weight);
        string displayDogBreed();
        /** Default destructor */
        virtual ~AlaskanMalamute();
    protected:
    private:
};

#endif // ALASKANMALAMUTE_H
