#include <stdio.h>
#include<stdlib.h>
#include <stdbool.h>

// This program will implement a cocktail shaker sort on a list of 100 positive integers.
int main () {
	// This is the array that will be sorted.
	int randArray[100] = {16807, 282475249, 1622650073, 984943658, 1144108930, 470211272, 101027544, 1457850878, 1458777923, 2007237709, 823564440, 1115438165, 1784484492, 74243042, 114807987, 1137522503, 1441282327, 16531729, 823378840, 143542612, 896544303, 1474833169, 1264817709, 1998097157, 1817129560, 1131570933, 197493099, 1404280278, 893351816, 1505795335, 1954899097, 1636807826, 563613512, 101929267, 1580723810, 704877633, 1358580979, 1624379149, 2128236579, 784558821, 530511967, 2110010672, 1551901393, 1617819336, 1399125485, 156091745, 1356425228, 1899894091, 585640194, 937186357, 1646035001, 1025921153, 510616708, 590357944, 771515668, 357571490, 1044788124, 1927702196, 1952509530, 130060903, 1942727722, 1083454666, 1108728549, 685118024, 2118797801, 1060806853, 571540977, 194847408, 2035308228, 158374933, 1075260298, 824938981, 595028635, 1962408013, 1137623865, 997389814, 2020739063, 107554536, 1635339425, 1654001669, 1777724115, 269220094, 34075629, 1478446501, 1864546517, 1351934195, 1581030105, 1557810404, 2146319451, 1908194298, 500782188, 657821123, 753799505, 1102246882, 1269406752, 1816731566, 884936716, 1807130337, 578354438, 892053144};
	bool sorted = false;
	int passCount = 0;
	// This loop will continue until the list is deemed to be sorted.
	while (sorted == false) {
		sorted = true;
		// Forward pass over the integers, swapping any consecutive numbers in the wrong order.
		for (int i = 0 + passCount; i < (99 - passCount); i++) {
			// If two consectuive integers are in the wrong order...
			if (randArray[i] > randArray[i+1]) {
			// Swap the integers.
				int holder = randArray[i];
				randArray[i] = randArray[i+1];
				randArray[i+1] = holder;
				sorted = false;
			}
		}
		// Backward pass over the integers, swapping any consecutive numbers in the wrong order.
		for (int i = 98 - passCount; i >(0 + passCount); i = i-1) {
			// If two consectuive integers are in the wrong order...
			if (randArray[i] < randArray[i-1]) {
				// Swap the integers.
				int holder = randArray[i];
				randArray[i] = randArray[i-1];
				randArray[i-1] = holder;
				sorted = false;
			}
		}
		/* After the first forward pass, the greatest number will be at the end of the list.
		After the first backward pass, the smallest number will be at the start of the list.
		Repeat this loop, ignoring the numbers that are already sorted */
		passCount++;	
	}
	// Print the now sorted list.
	for (int i = 0; i < 100; i++){
		printf("%d, ", randArray[i]);
	}
}

	
	
	
	