#include <stdio.h>

#define TOLL_RATE 50

void processVehicle(char vehicleType[]) {
    static int totalVehicles = 0;
    static int totalRevenue = 0;

    totalVehicles++;
    totalRevenue += TOLL_RATE;

    printf("Processed: %-10s | Fee: %d PKR | Total Vehicles: %d | Running Total: %d PKR\n",
           vehicleType, TOLL_RATE, totalVehicles, totalRevenue);
}

int main() {
    printf("=== Highway Toll Booth System ===\n\n");

    processVehicle("Car");
    processVehicle("Truck");
    processVehicle("Bus");
    processVehicle("Van");
    processVehicle("Car");

    return 0;
}