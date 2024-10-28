// 1)Define a structure named Time with members hours, minutes, and seconds.
//Write a C program to input two times, add them, and display the result in
//proper time format.
/*
#include <stdio.h>

struct time {
    int hours;
    int minutes;
    int seconds;
};

int main() {
    struct time T1, T2, sum;

    printf("Enter the first hours, minutes, seconds: ");
    scanf("%d %d %d", &T1.hours, &T1.minutes, &T1.seconds);

    printf("Enter the second hours, minutes, seconds: ");
    scanf("%d %d %d", &T2.hours, &T2.minutes, &T2.seconds);

    sum.seconds = T1.seconds + T2.seconds;
    sum.minutes = T1.minutes + T2.minutes + sum.seconds / 60;
    sum.seconds %= 60;

    sum.hours = T1.hours + T2.hours + sum.minutes / 60;
    sum.minutes %= 60;

    printf("The sum of two times is: %d hours, %d minutes, %d seconds\n", sum.hours, sum.minutes, sum.seconds);

    return 0;
}
*/

//Create a structure named Complex to represent a complex number with real
//and imaginary parts.Write a C program to add and multiply two complex
//numbers.

/*
#include <stdio.h>

struct Complex {
    int real;
    int imag;
};

struct Complex add(struct Complex a, struct Complex b) {
    struct Complex result;
    result.real = a.real + b.real;
    result.imag = a.imag + b.imag;
    return result;
}

struct Complex multiply(struct Complex a, struct Complex b) {
    struct Complex result;
    result.real = (a.real * b.real) - (a.imag * b.imag);
    result.imag = (a.real * b.imag) + (a.imag * b.real);
    return result;
}

int main() {
    struct Complex a, b, sum, product;

    printf("Enter real and imaginary parts of the first complex number: ");
    scanf("%d %d", &a.real, &a.imag);

    printf("Enter real and imaginary parts of the second complex number: ");
    scanf("%d %d", &b.real, &b.imag);

    sum = add(a, b);
    product = multiply(a, b);

    printf("Sum: %d + %di\n", sum.real, sum.imag);
    printf("Product: %d + %di\n", product.real, product.imag);

    return 0;
}

*/

//Create a union called SensorData that can store different types of sensor
//readings :
//– int temperature(for temperature sensors)
//– float pressure(for pressure sensors)
//– float humidity(for humidity sensors)
//Write a C program to :
//● Input the type of sensor and its reading.
//● Store the reading in the union.
//● Display the sensor type and the corresponding reading.


#include <stdio.h>

union SensorData {
    int temperature;
    float pressure;
    float humidity;
};

int main() {
    union SensorData data;
    int choice;

    printf("Enter the sensor type:\n");
    printf("1. Temperature\n");
    printf("2. Pressure\n");
    printf("3. Humidity\n");
    printf("Choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter temperature (in degrees): ");
        scanf("%d", &data.temperature);
        printf("Temperature sensor reading: %d degrees\n", data.temperature);
    }
    else if (choice == 2) {
        printf("Enter pressure (in Pascals): ");
        scanf("%f", &data.pressure);
        printf("Pressure sensor reading: %.2f Pascals\n", data.pressure);
    }
    else if (choice == 3) {
        printf("Enter humidity (in percentage): ");
        scanf("%f", &data.humidity);
        printf("Humidity sensor reading: %.2f%%\n", data.humidity);
    }
    else {
        printf("Invalid choice.\n");
    }

    return 0;
}
