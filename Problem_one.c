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
        return "Don't exist";
    }


}

int main() {
    float monthly_sales[12];

    for (int i = 1; i <= 12; i++) {
        
        printf("Enter your monthly sales for %s: ", which_month(i));
        float temp;
        scanf("%f", &temp);
        monthly_sales[i] = temp;
    }

    printf("\n\n");

    for (int i = 1; i <= 12; i++) {
        printf("Your monthly sales for 2026:\nMonth %10s", "Sales");
        printf("%s: %10.2f\n", which_month(i), monthly_sales[i]);
    }

}