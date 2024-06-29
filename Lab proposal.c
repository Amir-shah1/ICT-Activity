#include <stdio.h>
int main(void)
{
    // take input form user for their weight and height
    float weight, height, bmi;
    printf("Enter your weight : ");
    scanf("%f", &weight);
    printf("Enter your height in cm : ");
    scanf("%f", &height);
    
    // BMI calculation formula
	bmi = weight / (height * height) * 10000;
	
	// checking for underweight overwight and normal
	if (bmi < 18.5) {
		printf("Your bmi is %.1f and you are under weight.\n", bmi);
		printf("You need 3300 - 3800 calories per day for gaining weight.\n");
		
	} else if (bmi >= 18.5 && bmi <= 24.5){
		printf("Your bmi is %.1f and you are fit. \n", bmi);
		printf("You need 2800 - 3300 calories per day to remain fit.\n");
		
	} else if (bmi > 24.5){
		printf("Your bmi is %.1f and you are over weight.\n", bmi);
		printf("You need 2300 - 2800 calories per day to loss weight.\n");
	}

	
	// Takig input form user for their calories count;
	int breakfast, lunch, dinner, total_calories;
	printf("\n Answer below questions for calories count:\n");
	
	printf("How much calories you have take in breakfast: ");
	scanf("\n %d", &breakfast);
	printf("How much calories you have take in lunch : ");
	scanf("\n %d", &lunch);
	printf("How much calories you have take in dinner : ");
	scanf("\n %d", &dinner);
	total_calories = breakfast + lunch + dinner;
	
	// comparing calories intake of under weight
	if (bmi < 18.5 && total_calories < 3300){
		printf("You are taking %d calories, Increase your calories intake for weight gain.\n", total_calories);
	} else if (bmi < 18.5 && (total_calories >= 3300 || total_calories > 3500)){
		printf("You are taking %d calories, Your calories intake is enough for weight gain.\n", total_calories);
	
	// comparing calories intake for normal (fit)
	} else if ((bmi >= 18.5 && bmi <=24.5) && (total_calories > 2800 && total_calories <3300)){
		printf("You are taking %d calories, Your caloriess intake is enough for staying fit.\n", total_calories);
	} else if((bmi >= 18.5 && bmi <=24.5) && (total_calories < 2800)){
		printf("You are taking %d calories, Your calories intake is less then requried. \n", total_calories);
	} else if((bmi >= 18.5 && bmi <=24.5) && (total_calories > 3300)){
		printf("You are taking %d calories, Your calories intake is higher then requried. \n", total_calories);
		
	// comparing calories intake for over weight
	} else if(bmi > 24.5 && total_calories < 2800){
		printf("You are taking %d calories, Your calories intake is enought for weight loss. \n", total_calories);
	} else if(bmi > 24.5 && total_calories > 2800){
		printf("You are taking %d calories, Your calories intake is greater then requried.", total_calories);
	}
	
    return 0;
}