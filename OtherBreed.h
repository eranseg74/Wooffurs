#ifndef OTHERBREED_H
#define OTHERBREED_H

#include "Dog.h"

class OtherBreed : public Dog {
    public:
        /** Default constructor */
        OtherBreed(string dogName, int age, int weight);
        string displayDogBreed();
        /** Default destructor */
        virtual ~OtherBreed();
    protected:
    private:
};

#endif // OTHERBREED_H
