// Your code goes in this file.
// This is the ONLY file you submit.

#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "ppm.h"

int main() {
int i;
int suit;
char * color;
// v This is the filename for the letter or number in the upper left and lower right.
char * symbolfilename;

/*I figured we could set each card to a numerical value and do the 4 suits
 *  for each type of card. This should make it easy to pass through the
 *  card numbers without having to convert them.
 *
 */

typedef struct card{
	int *i;

};
	for(i=1;i<15;i++){
		if(i<10){
			//TODO: create numbered cards
			for(suit=1;suit<5;suit++){
				char color[8];
				//Different suits go here...1-4=Clubs, Spades, Hearts, Diamonds?
			if(suit<=2){
				 strcpy(color,"black");
			}
			else if(suit>2){
				strcpy(color,"red");

			}
			//This part doesn't work
			sprintf(symbolfilename,"/images/%s-%i.ppm", color, i);
			printf("%s\n",symbolfilename);

			//loadPpm(symbolfilename);
			}
		}
	}
}
