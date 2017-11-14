#include <opencv2/highgui.hpp>

using namespace cv;

int main(void)
{
	Mat file1 = imread("images/sample-1.jpg", CV_LOAD_IMAGE_UNCHANGED);
	Mat file2 = imread("images/sample-1.jpg", CV_LOAD_IMAGE_GRAYSCALE);

	namedWindow("Color", CV_WINDOW_AUTOSIZE);
	namedWindow("Fixed", CV_WINDOW_AUTOSIZE);

	imshow("Color", file1);
	imshow("Fixed", file2);
	int x = 100;
	resizeWindow("Color", file1.cols/x, file1.rows/x);
	resizeWindow("Fixed", file1.cols/x, file1.rows/x);

	moveWindow("Color", 800, 500);
	moveWindow("Fixed", 400, 500);

	waitKey();

	return (0);
}
