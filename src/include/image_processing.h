#pragma once
#include <map>
#include <vector>

/**
 * @enum Filter
 * @brief Enum class to maintain a strong type for different types of filters.
 */
enum class Filter {
  LowPass3x3,  ///< Low pass filter with a 3x3 kernel.
  LowPass5x5,  ///< Low pass filter with a 5x5 kernel.
  HighPass3x3, ///< High pass filter with a 3x3 kernel.
  HighPass5x5, ///< High pass filter with a 5x5 kernel.
  Gaussian     ///< Gaussian blur filter.
};
/**
 * @typedef Kernel
 * @brief Typedef for a 2D vector of floats to represent the convolution kernel
 * matrix.
 */
using Kernel = std::vector<std::vector<float>>;

extern std::map<Filter, Kernel> kernels;

void applyKernel(const unsigned char *input, unsigned char *output, int width,
                 int height, int channels, const Kernel &kernel);

/**
 * @var kernels
 * @brief Map to store various predefined kernels, accessible by filter type.
 */