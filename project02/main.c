//
//  main.c
//  project02
//
//  Created by Robert Bobino on 8/5/16.
//  Copyright © 2016 bobino.co. All rights reserved.
//
//	Convert miles into kilometers

#include <stdio.h>

#define KMS_PER_MILE 1.609

int main(int argc, const char * argv[]) {
	
	// Init variables
	double miles, kms;
	
	// Get distance in miles
	printf("Enter the distance in miles: ");
	scanf("%lf", &miles);
	
	// Convert the distance to kilometers
	kms = KMS_PER_MILE * miles;
	
	// Display the distance in kilometers
	printf("%f miles equals %f kilometers.\n", miles, kms);
	
	return 0;
}
