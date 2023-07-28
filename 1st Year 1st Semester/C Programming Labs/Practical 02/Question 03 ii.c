#include <stdio.h>

int main()
{
    float avspeed, distance, time;

    //the distance of car traveled in meters
    printf("What is the distance the car traveled? (meters)\n");
    scanf("%f", &distance);
    //the time take to travel in seconds
    printf("How long did the car take to travel? (seconds)\n");
    scanf("%f", &time);
    printf("\n");

    //average speed = distance traveled / time taken
    avspeed= distance/time;

    printf("The Average Speed of car traveled is %.2f meters per second\n", avspeed);

    return 0;
}
