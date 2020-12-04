{printa}
=====

Simple, (nearly) single-header **fmtlib/fmt** wrapper library written in c++

Example:
--------
.. image:: https://imgur.com/nv5UfSr.png

**Code**

.. code:: c++

	#include "printa/printa.hpp"

	auto main( int argc, char** argv ) -> int
	{
		printa->project<3>( "printa" );

		printa->print<ok>( "hello world\n" );
		printa->print<input>( "input : \n" );
		printa->print<loading>( "loading...\n" );
		printa->print<fail>( "error!\n" );
		
		return std::getchar( );
	}
	
Credits:
--------
* https://github.com/fmtlib/fmt
* myself
