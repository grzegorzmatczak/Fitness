#ifndef FITNESS_NONE_H
#define FITNESS_NONE_H

#include "basefitness.h"

class QJsonObject;

namespace Fitness {
class None : public BaseFitness {
 public:
	None();

	void process();

 private:
};
} // namespace Fitness

#endif // FITNESS_NONE_H