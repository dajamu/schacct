#include "Base.h"

Base::Base()
{
	cout << "Creating base..." << endl;
}

Base::~Base()
{
	cout << "Destroying base..." << endl;
}

string Base::getProperty( const string &key )
{
	return this->properties.at( key );
}

bool Base::setProperty( const string &key, const string &val )
{
	this->properties.insert( pair<string,string>( key, val ) );
}
