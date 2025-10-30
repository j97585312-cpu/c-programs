/*
name:Wanjiru Jilius Irungu
reg NO:CT101/G/26489/25
description:3D array to show vacant and occupied rooms in a hotel
date:29/10/2025
*/
#include <stdio.h>
//researched header files necessary for execution of this program
#include <stdlib.h>
#include <time.h>

int main() {
    int chain[3][5][10];   // 3 branches, 5 floors, 10 rooms per floor
    int branch, floor, room;
    int totalOccupied = 0, branchOccupied;

    srand(time(0)); // Seed for random numbers

    printf("=== Hotel Chain Room Occupancy (1 = occupied, 0 = vacant) ===\n\n");

    // Generate random occupancy data and display
    for(branch = 0; branch < 3; branch++) {
        printf("Branch %d:\n", branch + 1);
        for(floor = 0; floor < 5; floor++) {
            printf("  Floor %d: ", floor + 1);
            for(room = 0; room < 10; room++) {
                chain[branch][floor][room] = rand() % 2;
                printf("%d ", chain[branch][floor][room]);
            }
            printf("\n");
        }
        printf("\n");
    }

    // Calculate total occupied rooms per branch and across all branches
    printf("=== Occupancy Summary ===\n");
    for(branch = 0; branch < 3; branch++) {
        branchOccupied = 0;
        for(floor = 0; floor < 5; floor++) {
            for(room = 0; room < 10; room++) {
                if(chain[branch][floor][room] == 1)
                    branchOccupied++;
            }
        }
        printf("Branch %d -> Occupied rooms: %d\n", branch + 1, branchOccupied);
        totalOccupied += branchOccupied;
    }

    printf("\nTotal occupied rooms across all branches: %d\n", totalOccupied);

    return 0;
}