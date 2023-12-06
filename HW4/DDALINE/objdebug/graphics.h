#include <graphics.h> // Header utama

int main() {
    int gd = DETECT, gm; // gd (graphics driver) dan gm (graphics mode)
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI"); // Inisialisasi grafis, sesuaikan dengan direktori BGI Anda

    // Fungsi-fungsi penggambaran
    line(x1, y1, x2, y2); // Menggambar garis dari (x1, y1) ke (x2, y2)
    rectangle(left, top, right, bottom); // Menggambar persegi panjang
    circle(x, y, radius); // Menggambar lingkaran
    bar(left, top, right, bottom); // Menggambar kotak diisi
    putpixel(x, y, color); // Menaruh titik pada koordinat (x, y)

    delay(5000); // Tahan gambar selama 5 detik
    closegraph(); // Menutup grafik

    return 0;
}
