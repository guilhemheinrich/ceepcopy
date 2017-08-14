#include "ceep.h"




Ceep::Ceep(int in_iRef) :
	_ref(in_iRef)
{
}

Ceep::Ceep(Ceep & in_ceep)
{
	_ref = (int) &in_ceep;
}

int Ceep::ref() const
{
	return _ref;
}

namespace ceep {


}
