Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/
  #include <stdio.h>

int main() {
    int day, month, year;
    printf("Enter date in format dd/mm/yyyy: ");
    scanf("%d/%d/%d", &day, &month, &year);

    // Convert month number to string
    char monthName[10];
    switch(month) {
        case 1:  sprintf(monthName, "Jan"); break;
        case 2:  sprintf(monthName, "Feb"); break;
        case 3:  sprintf(monthName, "Mar"); break;
        case 4:  sprintf(monthName, "Apr"); break;
        case 5:  sprintf(monthName, "May"); break;
        case 6:  sprintf(monthName, "Jun"); break;
        case 7:  sprintf(monthName, "Jul"); break;
        case 8:  sprintf(monthName, "Aug"); break;
        case 9:  sprintf(monthName, "Sep"); break;
        case 10: sprintf(monthName, "Oct"); break;
        case 11: sprintf(monthName, "Nov"); break;
        case 12: sprintf(monthName, "Dec"); break;
        default: sprintf(monthName, "Invalid");
    }

    printf("Converted Date: %02d-%s-%d\n", day, monthName, year);
    return 0;
}
