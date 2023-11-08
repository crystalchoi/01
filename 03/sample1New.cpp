//
// Created by crystal on 2023/11/08.
//
#include <iostream>
using namespace  std;

#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
using namespace cv;

int main() {

    Mat lena = imread("../lena.jpg");

    if (!lena.data) {
        cout << "lena missing"<< endl;
        return -1;
    }

    namedWindow("Lena", WINDOW_AUTOSIZE);
    imshow("Lena", lena);

    waitKey(0);
    return 0;
}
