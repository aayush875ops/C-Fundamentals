#include <stdio.h>

int main() {
    int id, units, senior;
    int totalConsumers = 0, highUsage = 0;
    int totalRevenue = 0;

    
    scanf("%d", &id);

    while (id != -1) {
        scanf("%d %d", &units, &senior);
        
        totalConsumers++;
        int bill = 0;

        
        if (units <= 100) {
            bill = units * 3;
        } else if (units <= 200) {
            bill = (100 * 3) + (units - 100) * 5;
        } else {
            bill = (100 * 3) + (100 * 5) + (units - 200) * 8;
        }

        
        if (senior == 1 && bill >= 500) {
            bill -= 500;
        }

        
        if (units > 300) {
            highUsage++;
        }

        totalRevenue += bill;


        scanf("%d", &id);
    }

    
    printf("Total Revenue Collected: Rs. %d\n", totalRevenue);
    printf("Number of High-Usage Alerts: %d\n", highUsage);
    printf("Number of Consumers Processed: %d\n", totalConsumers);

    return 0;
}