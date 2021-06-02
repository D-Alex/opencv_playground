#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <iostream>

#include "line_detector.hpp"

int main(int argc, char**argv)
{
    std::cout << "playground for laser detection" << std::endl;
    if(argc != 2)
    {
        std::cerr << "call ./opencv-playground IMAGE";
        return -1;
    }

    std::string file_path(argv[1]);
    std::cout << "loading image " << file_path <<std::endl;
    cv::Mat image = cv::imread(file_path,-1);
    if(image.empty())
    {
        std::cerr << "could not load " << file_path << std::endl;
        return -1;
    }

    std::cout << "loaded " << image.size() << " type " << image.type() << std::endl;
    cv::imshow("image",image);
    cv::waitKey(-10);

    seavision::LineDetector detector;
    std::vector<cv::KeyPoint> result;
    detector.detect(image,result);

    return 0;
}

