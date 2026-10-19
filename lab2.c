#include <stdio.h>
#include <math.h>
#include <string.h>

int group_number = 79;
int variant_number = 11;

const int NAME_NUMBER = 6;

void check_sqrt(int group, const char *name) {
    double root = sqrt(group);
    size_t len = strlen(name);

    if (root > (double)len) {
        printf("Result: %.2fs\n", root + len);
    } else if (root < (double)len) {
        printf("Result: %.2fn\n", root * len);
    } else {
        printf("Values are equal: root = %.2f, length = %zu\n", root, len);
    }
}

void show_course(int group) {
    switch (group) {
        case 92: case 93: case 94: case 95:
        case 96: case 97: case 98: case 99:
            printf("Group %d studies in year I\n", group);
            break;
        case 87: case 88: case 89: case 90: case 91:
            printf("Group %d studies in year II\n", group);
            break;
        case 81: case 82: case 83: case 84: case 85: case 86:
            printf("Group %d studies in year III\n", group);
            break;
        case 75: case 76: case 77: case 78: case 79: case 80:
            printf("Group %d studies in year IV\n", group);
            break;
        default:
            printf("There is no group %d in the college\n", group);
            break;
    }
}

int main() {
    if (variant_number % 2 == 0) {
        printf("My journal number is %d. Its Sin = %f\n",
               variant_number, sin(variant_number));
    } else {
        printf("My journal number is %d. Its Cos = %f\n",
               variant_number, cos(variant_number));
    }

    char name[] = "Daniil";
    printf("Group: %d, Variant: %d, Name: %s\n",
           group_number, variant_number, name);

    double product = variant_number * 3.14;
    int converted = (int)product;
    printf("Product = %.2f, Converted = %d\n", product, converted);

    int start = variant_number + NAME_NUMBER;
    int sum = 0;
    for (int i = start; i >= 1; i--) {
        sum += i;
    }
    printf("Number of letters in full name (name_number): %d\n", NAME_NUMBER);
    printf("Journal number: %d\n", variant_number);
    printf("Sum of all numbers from 1 to %d: %d\n", start, sum);

    check_sqrt(group_number, name);

    int user_group;
    printf("Enter group number: ");
    scanf("%d", &user_group);
    show_course(user_group);

    return 0;
}