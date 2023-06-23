#include <stdio.h>
//structure for a box
struct Box {
    double length;
    double width;
    double height;
};

//calculation the volume of a box
double calculateVolume(struct Box *boxPtr) {
    return boxPtr->length * boxPtr->width * boxPtr->height;
}

//calculation the total surface area of a box
double calculateSurfaceArea(struct Box *boxPtr) {
    return 2 * (boxPtr->length * boxPtr->width + boxPtr->width * boxPtr->height + boxPtr->height * boxPtr->length);
}

int main() {

    struct Box myBox = { 10.0, 7.0, 10.0 };

    struct Box *boxPtr = &myBox;

    // Calculation of volume using the structure pointer and dot operator
    double volume = boxPtr->length * boxPtr->width * boxPtr->height;

    // Calculation of the total surface area using the structure pointer and arrow operator
    double surface_Area = 2 * (boxPtr->length * boxPtr->width + boxPtr->width * boxPtr->height + boxPtr->height * boxPtr->length);

    printf("The Volume of the box: %.2f\n", volume);
    printf("Total Surface area of the box: %.1f\n", surface_Area);

    return 0;
}