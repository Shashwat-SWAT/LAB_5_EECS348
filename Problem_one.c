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

void monthly_sales_print(float mon_sales_ar[]) {
    
    printf("Your monthly sales for 2026:\n\n");
    printf("%-10s Sales\n", "Month");

    for (int i = 0; i < 12; i++) {

        printf("%-10s %.2f\n", which_month(i+1), mon_sales_ar[i]);
    }
}

void sales_summary (float mon_sales_ar[]) {
    
    float max_month, max, min_month, min, avg = 0.0;
    max = mon_sales_ar[0];
    max_month = 0;
    min = mon_sales_ar[0];
    min_month = 0;

    for (int i = 0; i<12; i++) {
        if (max > mon_sales_ar[i]) {
            max = mon_sales_ar[i];
            max_month = i+1;
        }
        if (min < mon_sales_ar[i]) {
            min = mon_sales_ar[i];
            min_month = i+1;
        }

        avg += mon_sales_ar[i];
    }

    avg /= 12;

    printf("Sales summary report:\n");
    printf("Minimum sales: %-10.2f (%s)\n", min, which_month(min_month));
    printf("Maximum sales: %-10.2f (%s)\n", max, which_month(max_month));
    printf("Average sales: %.2f\n", avg);
}

void six_mon_move_avg(float mon_sales_ar[]) {

    float moving_avg_6_mon = 0.0;
    ("Six-Month moving average report:\n\n");

    for (int i=0; i<7; i++) {
        for (int j=i; j<i+6; j++) {
            // starts from any iteration of i and ends with the 6th value you get from starting at i.
            moving_avg_6_mon += mon_sales_ar[j];
        }
        moving_avg_6_mon /= 6;
        printf("%s-%-10s %.2f\n", which_month(i+1), which_month(i+6), moving_avg_6_mon);
    }

}

void high_t_low_sales(float mon_sales_ar[]) {


    float copy_ar[12];

    for (int i=0; i<12; i++) {
        copy_ar[i] = mon_sales_ar[i];
    }

    for (int i=0; i<12; i++) {
        float temp = copy_ar[i];

        for (int j=0; j<12; j++) {
            float temp_j = copy_ar[j];

            if (temp < copy_ar[j]) {
                // replacing the smaller value to later position, and vise versa

                copy_ar[j] = temp;
                copy_ar[i] = temp_j;
            }
        }
    }

    printf("Sales report (highest to lowest):\n\n");
    printf("%-10s Sales\n", "Month");

        for (int i=0; i<12; i++) {
        printf("%-10s %.2f\n", which_month(i+1), copy_ar[i]);
    }
    


}

int main() {

    float monthly_sales[12];

    for (int i = 0; i < 12; i++) {
        
        printf("Enter your monthly sales for %s: ", which_month(i+1));
        float temp;
        scanf("%f", &temp);
        monthly_sales[i] = temp;
    }
    
    // //Monthly sales
    // printf("\n");
    // monthly_sales_print(monthly_sales);

    // //Sales summary report
    // printf("\n");
    // sales_summary(monthly_sales);

    // //Moving avg of six months
    // printf("\n");
    // six_mon_move_avg(monthly_sales);

    //Monthly sales from highest to lowest
    printf("\n");
    high_t_low_sales(monthly_sales);


}