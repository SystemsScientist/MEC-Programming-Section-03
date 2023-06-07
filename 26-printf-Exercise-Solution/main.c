/*
    Author: Matt Johnson
    Subject: escape sequences in C exercise solution
    Purpose:
    Date: 06/06/2023

    Requirements:

    - program displays the following

        David says , " Programming is fun !"
        **Conditions apply, "Offers valid until tomorrow"
        C:\My computer\My folder
        D:/My documents/My file
        \\\\Today is holiday\\\\
        This is a triple quoted string """This month has 30 days"""
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    printf("David says , \" Programming is fun !\"\n");
    printf("***Conditions apply, \"Offers valid until tomorrow\"\n");
    printf("C:\\My computer\\My folder\n");
    printf("D:/My document/My file\n");
    printf("\\\\\\\\Today is holiday\\\\\\\\\n");
    printf("This is a triple quoted string \"\"\"This month has 30 days\"\"\"\n");

    return 0;
}
