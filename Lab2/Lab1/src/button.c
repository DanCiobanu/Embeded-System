

#include "Header Files/button.h"

int isButtonPressed() {
	if ((PINC & (1<<PC0)) == 1) {
		return 1;
	}
	return 0;
}