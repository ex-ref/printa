#include "printa/printa.hpp"

auto main( int argc, char** argv ) -> int
{
	printa->project<3>( "printa" );

	printa->print<ok>( "hello world\n" );
	printa->print<input>( "input smthn : \n" );
	printa->print<loading>( "loading somwfing...\n" );
	printa->print<fail>( "stupid errorr!\n" );
	return std::getchar( );
}