 /* Group D */

#ifndef __CPU_O3_REDUNDANT_OBJECT_HH__
#define __CPU_O3_REDUNDANT_OBJECT_HH__

#include <string>

class RedundantObject {
  public:
    void setRedundant(bool redundant){
        this->redundant = redundant;
    }
    bool isRedundant() const { return this->redundant; }

    std::string name() const { return this->redundant ? "redundant" : "orig"; }
  private:
    bool redundant = false;
};

#endif

/* Group D */
