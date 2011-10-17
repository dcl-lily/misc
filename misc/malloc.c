
/*
 Copyright 2011, Tomas Edwardsson 

 This script is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.

 This script is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/


#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main(void) {

	int i;
	char *mempointers[100];
	for (i = 1; i <= 100 ; i++) {
		mempointers[(i - 1)] = malloc(1024 * 1024 * 256);
		memset(mempointers[(i - 1)], 0, 1024 * 1024 * 256);
		printf("Allocating 256MB memory - Run %i Total %iMB\n", i, (i * 256) );
		if (mempointers[(i - 1)] == NULL) {
			printf("Unable to allocate memory\n");
			return(1);
		}
		printf("Sleeping for 1 seconds\n");
		sleep(1);
	}
	return(0);
}
