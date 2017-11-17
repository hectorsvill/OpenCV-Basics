#include <opencv2/highgui.hpp>
#include <stdint.h>

const int FPS = 20;

using namespace cv;

int main(void)
{
	Mat frame;
	VideoCapture vid(0);
	if (!vid.isOpened())
	{
		return -1;
	}

	while (vid.read(frame))
	{
		imshow("webcam", frame);

		if (waitKey(1000 / FPS) >= 0)
		{
			break ;
		}
	}

	return (1);
}
