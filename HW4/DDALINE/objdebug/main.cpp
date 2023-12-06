#include <iostream>
#include <graphics.h>
#include <math.h>

void drawDDALine(int x1, int y1, int x2, int y2) {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int dx = x2 - x1;
    int dy = y2 - y1;

    int steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);

    float xIncrement = static_cast<float>(dx) / steps;
    float yIncrement = static_cast<float>(dy) / steps;

    float x = x1;
    float y = y1;

    for (int i = 0; i <= steps; i++) {
        putpixel(round(x), round(y), WHITE);
        x += xIncrement;
        y += yIncrement;
    }

    delay(5000);
    closegraph();
}

int main() {
    int x1, y1, x2, y2;

    std::cout << "Masukkan koordinat titik awal (x1 y1): ";
    std::cin >> x1 >> y1;
    std::cout << "Masukkan koordinat titik akhir (x2 y2): ";
    std::cin >> x2 >> y2;

    drawDDALine(x1, y1, x2, y2);

    return 0;
}
