#include <opencv2/highgui.hpp>
#include <stdint.h>

using namespace cv;

int main(void)
{

	//iterate 2 channels
	// Mat original = imread("images/sample-3.jpeg", CV_LOAD_IMAGE_GRAYSCALE);
	// Mat modified = imread("images/sample-3.jpeg", CV_LOAD_IMAGE_GRAYSCALE);
    //
	// for (int r = 0; r < modified.rows; r++)
	// {
	// 	for (int c = 0; c < modified.cols; c++)
	// 	{
	// 		//uint8_t is used fot 258 values
	// 		modified.at<uint8_t>(r, c) = modified.at<uint8_t>(r,c) * 10.9f;
	// 	}
	// }

	//iterate 3 channels
	 Mat original = imread("images/sample-3.jpeg", CV_LOAD_IMAGE_ANYCOLOR);
	 Mat modified = imread("images/sample-3.jpeg", CV_LOAD_IMAGE_ANYCOLOR);

	for (int r = 0; r < modified.rows; r++)
	{
		for (int c = 0; c < modified.cols; c++)
		{
			//uint8_t is used fot 258 values
            //[0] is blue channel
            modified.at<Vec3b>(r, c)[1] = modified.at<Vec3b>(r,c)[1] * 0;
		}
	}

	imshow("Original", original);
	imshow("Modified", modified);
	imwrite("sample-4.jpg", modified);
	waitKey();
    //just know that at is to acces the size of the value of each image weather grey or color.
	return (0);
}
