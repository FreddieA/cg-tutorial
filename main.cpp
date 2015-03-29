#include "tgaimage.h"
#include <iostream>

const TGAColor white = TGAColor(255, 255, 255, 255);
const TGAColor red   = TGAColor(255, 0,   0,   255);

void line(int x0, int y0, int x1, int y1, TGAImage &image, TGAColor color) {
    for (float t=0.; t<1.; t+=.01) {
        int x = x0*(1.-t) + x1*t;
        int y = y0*(1.-t) + y1*t;
        image.set(x, y, color);
    }
}

int main(int argc, char** argv) {
    TGAImage image(100, 100, TGAImage::RGB);
   // image.set(52, 41, red);
   // image.flip_vertically();
    line(0, 0, 30, 30, image, white);

    std::ifstream infile("/Users/admin/Desktop/output.tga");

    if(infile.good())
    {
        image.write_tga_file("/Users/admin/Desktop/output.tga");
    } else {
        std::cout <<"no output file";
    }

    return 0;
}

