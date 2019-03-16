#ifndef CHOWCHOW_H
#define CHOWCHOW_H

#include "Dog.h"

class ChowChow : public Dog {
    public:
        /** Default constructor */
        ChowChow(string dogName, int age, int weight);
        string displayDogBreed();
        /** Default destructor */
        virtual ~ChowChow();
    protected:
    private:
};

#endif // CHOWCHOW_H
