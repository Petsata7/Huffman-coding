#include "Archiver.h"

int main(int argc, char * argv[])
{

	Archiver * arch = new Archiver;
	argv[1] = "pack";
	argv[2] = "help";
	argv[3] = "arch.arc";
	argv[4] = "unpack";
	argv[5] = "arch.arc";
	argv[6] = "C:\\Users\\Petar\\Desktop";
	argv[7] = "list";
	argv[8] = "arch.arc";
	argc = 9;
	arch->startProgram(argc, argv);

	delete arch;
	
	return 0;
}