#ifndef _BASE_H_
#define _BASE_H_

#include <iostream>
#include <map>

using namespace std;

class Base
{
	protected:
		int id = -1;
		map<string,string> properties;

	public:
		Base();
		~Base();

		void debug();
		string getProperty( const string &key );
		bool setProperty( const string &key, const string &val );

		virtual bool save() = 0;
};

#endif /* _BASE_H_ */
