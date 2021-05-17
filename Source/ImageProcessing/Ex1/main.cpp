#include <"../opencv/include/opencv2/opencv.hpp">
int main()
{
    cv::Mat image;
    image = cv::imread("./cat.jpeg", cv::IMREAD_COLOR);
    cv::imshow("TEST IMAGE", image);
    cv::waitKey(0);
    return 0;
}
