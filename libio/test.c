
#include "../lib/libio.h"


int main(int argc, char** argv){


	writeb(TRUE);		//TRUE
	writee();
	writeb(FALSE);		//FALSE
	writee();

	writef(2.3495923);	
	writee();
	writef(24435.223223);
	writee();
	writef(2);
	writee();
	writef(0.12345678910);
	writee();

	writeb(fwritec(5,'\r'));
	writee();
	writeb(writec('\r'));
	writee();

}

