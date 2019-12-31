// OpenCV.CMake.cpp : Defines the entry point for the application.
//

#include <iostream>
#include <opencv2/imgcodecs.hpp>


using namespace std;

int main()
{
	const auto img = cv::imread("e:\\Capture.JPG");
	cout << "image size: " << img.cols << "x" << img.rows << endl;
	return 0;
}
