#pragma once

#include <string>

class Ceep
{
public :
		Ceep() {}
		Ceep(std::string in_sRef);
		Ceep(int in_iRef);
		Ceep(Ceep &in_ceep);
		~Ceep() {}

		int ref() const;
private : 
	int _ref = 0;
};

namespace ceep
{
	template <typename TYPE>
	TYPE* deep_copy(TYPE *ele)
	{
		TYPE *out = new TYPE(*ele);
		return out;
	}
};

