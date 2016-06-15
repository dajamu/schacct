#ifndef _CODE_H_
#define _CODE_H_

#include <vector>

#include "Base.h"

class Code : public Base
{
	protected:
		vector<string> fields = { "code_name", "team_name", "foo", "bar" };
	public:
		Code();
		~Code();

		bool save();
};

#endif /* _CODE_H_ */
