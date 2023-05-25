/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Rekognition
{
namespace Model
{

  /**
   * <p> A filter that allows you to control the black frame detection by specifying
   * the black levels and pixel coverage of black pixels in a frame. As videos can
   * come from multiple sources, formats, and time periods, they may contain
   * different standards and varying noise levels for black frames that need to be
   * accounted for. For more information, see <a>StartSegmentDetection</a>.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/BlackFrame">AWS
   * API Reference</a></p>
   */
  class BlackFrame
  {
  public:
    AWS_REKOGNITION_API BlackFrame();
    AWS_REKOGNITION_API BlackFrame(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API BlackFrame& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> A threshold used to determine the maximum luminance value for a pixel to be
     * considered black. In a full color range video, luminance values range from
     * 0-255. A pixel value of 0 is pure black, and the most strict filter. The maximum
     * black pixel value is computed as follows: max_black_pixel_value =
     * minimum_luminance + MaxPixelThreshold *luminance_range. </p> <p>For example, for
     * a full range video with BlackPixelThreshold = 0.1, max_black_pixel_value is 0 +
     * 0.1 * (255-0) = 25.5.</p> <p>The default value of MaxPixelThreshold is 0.2,
     * which maps to a max_black_pixel_value of 51 for a full range video. You can
     * lower this threshold to be more strict on black levels.</p>
     */
    inline double GetMaxPixelThreshold() const{ return m_maxPixelThreshold; }

    /**
     * <p> A threshold used to determine the maximum luminance value for a pixel to be
     * considered black. In a full color range video, luminance values range from
     * 0-255. A pixel value of 0 is pure black, and the most strict filter. The maximum
     * black pixel value is computed as follows: max_black_pixel_value =
     * minimum_luminance + MaxPixelThreshold *luminance_range. </p> <p>For example, for
     * a full range video with BlackPixelThreshold = 0.1, max_black_pixel_value is 0 +
     * 0.1 * (255-0) = 25.5.</p> <p>The default value of MaxPixelThreshold is 0.2,
     * which maps to a max_black_pixel_value of 51 for a full range video. You can
     * lower this threshold to be more strict on black levels.</p>
     */
    inline bool MaxPixelThresholdHasBeenSet() const { return m_maxPixelThresholdHasBeenSet; }

    /**
     * <p> A threshold used to determine the maximum luminance value for a pixel to be
     * considered black. In a full color range video, luminance values range from
     * 0-255. A pixel value of 0 is pure black, and the most strict filter. The maximum
     * black pixel value is computed as follows: max_black_pixel_value =
     * minimum_luminance + MaxPixelThreshold *luminance_range. </p> <p>For example, for
     * a full range video with BlackPixelThreshold = 0.1, max_black_pixel_value is 0 +
     * 0.1 * (255-0) = 25.5.</p> <p>The default value of MaxPixelThreshold is 0.2,
     * which maps to a max_black_pixel_value of 51 for a full range video. You can
     * lower this threshold to be more strict on black levels.</p>
     */
    inline void SetMaxPixelThreshold(double value) { m_maxPixelThresholdHasBeenSet = true; m_maxPixelThreshold = value; }

    /**
     * <p> A threshold used to determine the maximum luminance value for a pixel to be
     * considered black. In a full color range video, luminance values range from
     * 0-255. A pixel value of 0 is pure black, and the most strict filter. The maximum
     * black pixel value is computed as follows: max_black_pixel_value =
     * minimum_luminance + MaxPixelThreshold *luminance_range. </p> <p>For example, for
     * a full range video with BlackPixelThreshold = 0.1, max_black_pixel_value is 0 +
     * 0.1 * (255-0) = 25.5.</p> <p>The default value of MaxPixelThreshold is 0.2,
     * which maps to a max_black_pixel_value of 51 for a full range video. You can
     * lower this threshold to be more strict on black levels.</p>
     */
    inline BlackFrame& WithMaxPixelThreshold(double value) { SetMaxPixelThreshold(value); return *this;}


    /**
     * <p> The minimum percentage of pixels in a frame that need to have a luminance
     * below the max_black_pixel_value for a frame to be considered a black frame.
     * Luminance is calculated using the BT.709 matrix. </p> <p>The default value is
     * 99, which means at least 99% of all pixels in the frame are black pixels as per
     * the <code>MaxPixelThreshold</code> set. You can reduce this value to allow more
     * noise on the black frame.</p>
     */
    inline double GetMinCoveragePercentage() const{ return m_minCoveragePercentage; }

    /**
     * <p> The minimum percentage of pixels in a frame that need to have a luminance
     * below the max_black_pixel_value for a frame to be considered a black frame.
     * Luminance is calculated using the BT.709 matrix. </p> <p>The default value is
     * 99, which means at least 99% of all pixels in the frame are black pixels as per
     * the <code>MaxPixelThreshold</code> set. You can reduce this value to allow more
     * noise on the black frame.</p>
     */
    inline bool MinCoveragePercentageHasBeenSet() const { return m_minCoveragePercentageHasBeenSet; }

    /**
     * <p> The minimum percentage of pixels in a frame that need to have a luminance
     * below the max_black_pixel_value for a frame to be considered a black frame.
     * Luminance is calculated using the BT.709 matrix. </p> <p>The default value is
     * 99, which means at least 99% of all pixels in the frame are black pixels as per
     * the <code>MaxPixelThreshold</code> set. You can reduce this value to allow more
     * noise on the black frame.</p>
     */
    inline void SetMinCoveragePercentage(double value) { m_minCoveragePercentageHasBeenSet = true; m_minCoveragePercentage = value; }

    /**
     * <p> The minimum percentage of pixels in a frame that need to have a luminance
     * below the max_black_pixel_value for a frame to be considered a black frame.
     * Luminance is calculated using the BT.709 matrix. </p> <p>The default value is
     * 99, which means at least 99% of all pixels in the frame are black pixels as per
     * the <code>MaxPixelThreshold</code> set. You can reduce this value to allow more
     * noise on the black frame.</p>
     */
    inline BlackFrame& WithMinCoveragePercentage(double value) { SetMinCoveragePercentage(value); return *this;}

  private:

    double m_maxPixelThreshold;
    bool m_maxPixelThresholdHasBeenSet = false;

    double m_minCoveragePercentage;
    bool m_minCoveragePercentageHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
