#ifndef __SEAVISION_LASER_DETECTOR_HPP__
#define __SEAVISION_LASER_DETECTOR_HPP__

#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>

namespace seavision
{
    class CV_EXPORTS_W LineDetector
    {
        public:
            CV_WRAP LineDetector(){};

            /**
             * \brief Detect vertical laser lines in a given raw image
             *
             * \param[in] image Input image 
             * \param[in] keypoints The detected laser line as a vector of keypoints
             * \param[in] mask Optional mask for masking valid image regions (must have the same size like image and type CV_8UC1, 0 = invalid, otherwise valid)
             *
             */
            CV_WRAP void detect(cv::InputArray image,CV_OUT std::vector<cv::KeyPoint>& keypoints,cv::InputArray mask=cv::noArray()){};
    };
}

#endif
