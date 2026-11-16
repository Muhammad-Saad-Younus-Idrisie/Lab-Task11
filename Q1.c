#include <stdio.h>

int calculateChecksum(int transactionID){
    if (transactionID < 0) {
        return 0; //This is the base condtiion to stop
    }

    int Total = (transactionID % 10) + calculateChecksum(transactionID / 10);

    if (Total >= 10){
        return calculateChecksum(Total);
    }

    return Total;

}

int main(){
    int transactionID;
    printf("Enter the transaction ID: ");
    scanf("%d", &transactionID);
    printf("Checksum: %d\n", calculateChecksum(transactionID));
    return 0;
}