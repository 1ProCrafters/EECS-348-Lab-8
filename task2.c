# include <stdio.h>

int main() {
    float temperature_C, temperature_F, temperature_K;
    float temperature = 0;
    char scale, target;
    
    printf("Enter the temperature value: ");
    scanf("%f", &temperature);
    printf("Enter the original scale (C, F, or K): ");
    scanf(" %c", &scale);

    switch (scale) {
        case 'C':
            temperature_C = temperature;
            temperature_F = temperature * 9/5 + 32;
            temperature_K = temperature + 273.15;
            break;
        case 'F':
            temperature_F = temperature;
            temperature_C = (temperature - 32) * 5/9;
            temperature_K = (temperature - 32) * 5/9 + 273.15;
            break;
        case 'K':
            temperature_K = temperature;
            temperature_C = temperature - 273.15;
            temperature_F = (temperature - 273.15) * 9/5 + 32;
            break;
        default:
            printf("Invalid scale, Try again!\n");
            main();
        }
    
    if (temperature_K < 0) {
        printf("Invalid temperature in Kelvin scale, Try again!\n");
        main();
    }
    
    printf("Enter the scale to convert to (C, F, or K): ");
    scanf(" %c", &target);

    switch (target) {
        case 'C':
            printf("Converted temperature: %f %c", temperature_C, target);
            break;
        case 'F':
            printf("Converted temperature: %f %c", temperature_F, target);
            break;
        case 'K':
            printf("Converted temperature: %f %c", temperature_K, target);
            break;
        default:
            printf("Invalid target scale, Try again!\n");
            main();
    }

    if (temperature_C < 0) {
        printf("\nFreezing\n");
        printf("Stay Warm!\n");
    } else if (temperature_C >= 0 && temperature_C < 10) {
        printf("\nCold\n");
        printf("Wear a jacket!\n");
    } else if (temperature_C >= 10 && temperature_C < 25) {
        printf("\nComfortable\n");
        printf("Go for a walk!\n");
    } else if (temperature_C >= 25 && temperature_C < 35) {
        printf("\nHot\n");
        printf("Drink lots of water!\n");
    } else {
        printf("\nExtreme Heat\n");
        printf("Stay Indoors!\n");
    }
    
    return 0;
}
