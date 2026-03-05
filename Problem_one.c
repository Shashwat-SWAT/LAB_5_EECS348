#include <stdio.h>

char *which_month(int num_month) {
    // This is pointer function that return the string address pointer

    if (num_month == 1) {
        return "January";
    }

    else if (num_month == 2) {
        return "February";
    }

    else if (num_month == 3) {
        return "March";
    }

    else if (num_month == 4) {
        return "April";
    }

    else if (num_month == 5) {
        return "May";
    }

    else if (num_month == 6) {
        return "June";
    }

    else if (num_month == 7) {
        return "July";
    }

    else if (num_month == 8) {
        return "August";
    }

    else if (num_month == 9) {
        return "September";
    }

    else if (num_month == 10) {
        return "October";
    }

    else if (num_month == 11) {
        return "November";
    }

    else if (num_month == 12) {
        return "December";
    }

    else {
        return "Error: Value is not right, month doesn't exist";
    }


}

void sales_summary (float mon_sales_ar[]) {
    float max_month, max, min_month, min, avg = 0.0;
    max = mon_sales_ar[0];
    max_month = 0;
    min = mon_sales_ar[0];
    min_month = 0;

    for (int i = 0; i<12; i++) {
        if (max > mon_sales_ar[0]) {
            max = mon_sales_ar[0];
            max_month = i+1;
        }
        if (min < mon_sales_ar[0]) {
            min = mon_sales_ar[0];
            min_month = i+1;
        }

        avg += mon_sales_ar[0];
    }

    avg /= 12;

    printf("Sales summary report:\n");
    prinrf("Minimum sales: %.2f (%s)\n", min, which_month(min_month));
    printf("Maximum sales: %.2f (%s)\n", max, which_month(max_month));
    printf("Average sales: %.2f\n", avg);
}

int main() {
    float monthly_sales[12];

    for (int i = 0; i < 12; i++) {
        
        printf("Enter your monthly sales for %s: ", which_month(i+1));
        float temp;
        scanf("%f", &temp);
        monthly_sales[i] = temp;
    }

    printf("\n\n");
    printf("Your monthly sales for 2026:\nMonth %10s", "Sales\n\n");
    for (int i = 0; i < 12; i++) {

        printf("%s: %10.2f\n", which_month(i+1), monthly_sales[i]);
    }

}