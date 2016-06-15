#include "Code.h"

int main( int argc, char** argv )
{
	std::cout << "Hello World" << std::endl;

	Code c;

	c.setProperty( "foo", "bar" );
	c.setProperty( "hello", "world" );

	cout << "Property foo = " << c.getProperty( "foo" ) << endl;
	cout << "Property hello = " << c.getProperty( "hello" ) << endl;
}
