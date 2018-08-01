#include <iostream>
#include <windows.h>
#include "SerialPort.h"

using namespace std;

int main ( int argc, char** argv ) {

	SerialPort sp;
	sp.connect ( );
	unsigned char buffer[] = "HelloHowae";
	//sp.sendArray ( buffer,10);
	//sp.sendArray ( buffer, 1 );
	
	sp.clear ( );
	sp.disconnect ( );


	return 0;
}