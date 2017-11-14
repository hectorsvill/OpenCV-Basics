#include <opencv2/highgui.hpp>

using namespace cv;
int main(void)
{
	Mat testColor = imread("sample.jpg", CV_LOAD_IMAGE_COLOR);
	Mat testGray = imread("sample.jpg", CV_LOAD_IMAGE_GRAYSCALE);



	imshow("color", testColor);
	imshow("Gray", testGray);

	imwrite("outputGray.jpg", testGray);

	waitKey();
	return (0);
}
