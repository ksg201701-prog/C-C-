#include <stdio.h>

enum TraffcLight {
    Red,
    Yellow,
    Green
};

int main() {
    enum TraffcLight signal;

    signal = Green;

    switch (signal){
    case Red:
        printf("Stop\n");
        break;
    
    case Yellow:
        printf("Caution\n");
        break;
    case Green:
        printf("Go\n");
        break;

    default:
        printf("Unknown signal\n");
        break;
    }

    return 0;
}