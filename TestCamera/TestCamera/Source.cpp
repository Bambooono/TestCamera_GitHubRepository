#include <stdio.h>
#include <opencv2/opencv.hpp>

int main(void) {

	cv::Mat image(cv::Size(640, 480), CV_8UC1);

	image = cv::Scalar(0, 0, 255);

	cv::namedWindow("test");

	cv::waitKey();

}