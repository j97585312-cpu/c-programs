/*
name:Wanjiru Jilius Irungu
reg NO:CT101/G/26489/25
description:2D array to show vacant and occupied rooms in a hotel
date:29/10/2025
*/
#include <stdio.h>

// Define constants for the number of floors and rooms
#define FLOORS 5
#define ROOMS 10

void simulate_input(int occupancy[FLOORS][ROOMS]);
void display_occupancy_per_floor(int occupancy[FLOORS][ROOMS]);

int main() {
    int occupancy[FLOORS][ROOMS];

    // Simulate input to populate the occupancy array
    simulate_input(occupancy);

    // Display the number of occupied and vacant rooms per floor
    display_occupancy_per_floor(occupancy);

    return 0;
}


void simulate_input(int occupancy[FLOORS][ROOMS]) {
    int i, j;
    for (i = 0; i < FLOORS; i++) {
        for (j = 0; j < ROOMS; j++) {
            occupancy[i][j] = 0; // All rooms start as vacant
        }
    }

    // Occupation details
    occupancy[0][2] = 1;
    occupancy[0][5] = 1;
    occupancy[1][7] = 1;
    occupancy[2][0] = 1;
    occupancy[2][1] = 1;
    occupancy[3][4] = 1;
    occupancy[3][9] = 1;
    occupancy[4][6] = 1;
}


void display_occupancy_per_floor(int occupancy[FLOORS][ROOMS]) {
    int i, j;
    int occupied_count, vacant_count;



    // Loop through each floor to calculate occupancy statistics
    for (i = 0; i < FLOORS; i++) {
        occupied_count = 0;
        vacant_count = 0;

        // Loop through each room on the current floor
        for (j = 0; j < ROOMS; j++) {
            if (occupancy[i][j] == 1) {
                occupied_count++;
            } else {
                vacant_count++;
            }
        }
        
        // Display the results for the current floor
        printf("Floor %d: %d occupied, %d vacant\n", i + 1, occupied_count, vacant_count);
    }
}