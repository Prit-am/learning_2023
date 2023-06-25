#include <stdio.h>

struct Box {
    float length;
    float width;
    float height;
};

float calculateVolume(struct Box* boxPtr) {
    return (*boxPtr).length * (*boxPtr).width * (*boxPtr).height;
}

float calculateSurfaceArea(struct Box* boxPtr) {
    return 2 * ((*boxPtr).length * (*boxPtr).width + (*boxPtr).length * (*boxPtr).height + (*boxPtr).width * (*boxPtr).height);
}

int main() {
    struct Box myBox;

    // Assign values to the members of the structure
    myBox.length = 5.0;
    myBox.width = 3.0;
    myBox.height = 2.0;

    // Access the structure members using the pointer with (*) asterisk and (.) dot operators
    struct Box* boxPtr = &myBox;

    // Access the members using the pointer and calculate the volume and surface area
    float volume = calculateVolume(boxPtr);
    float surfaceArea = calculateSurfaceArea(boxPtr);

    printf("Volume: %.2f\n", volume);
    printf("Surface Area: %.2f\n", surfaceArea);

    return 0;
}
