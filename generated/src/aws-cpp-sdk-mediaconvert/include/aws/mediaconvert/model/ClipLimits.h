/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>

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
namespace MediaConvert
{
namespace Model
{

  /**
   * Specify YUV limits and RGB tolerances when you set Sample range conversion to
   * Limited range clip.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/ClipLimits">AWS
   * API Reference</a></p>
   */
  class ClipLimits
  {
  public:
    AWS_MEDIACONVERT_API ClipLimits();
    AWS_MEDIACONVERT_API ClipLimits(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API ClipLimits& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Specify the Maximum RGB color sample range tolerance for your output.
     * MediaConvert corrects any YUV values that, when converted to RGB, would be
     * outside the upper tolerance that you specify. Enter an integer from 90 to 105 as
     * an offset percentage to the maximum possible value. Leave blank to use the
     * default value 100. When you specify a value for Maximum RGB tolerance, you must
     * set Sample range conversion to Limited range clip.
     */
    inline int GetMaximumRGBTolerance() const{ return m_maximumRGBTolerance; }

    /**
     * Specify the Maximum RGB color sample range tolerance for your output.
     * MediaConvert corrects any YUV values that, when converted to RGB, would be
     * outside the upper tolerance that you specify. Enter an integer from 90 to 105 as
     * an offset percentage to the maximum possible value. Leave blank to use the
     * default value 100. When you specify a value for Maximum RGB tolerance, you must
     * set Sample range conversion to Limited range clip.
     */
    inline bool MaximumRGBToleranceHasBeenSet() const { return m_maximumRGBToleranceHasBeenSet; }

    /**
     * Specify the Maximum RGB color sample range tolerance for your output.
     * MediaConvert corrects any YUV values that, when converted to RGB, would be
     * outside the upper tolerance that you specify. Enter an integer from 90 to 105 as
     * an offset percentage to the maximum possible value. Leave blank to use the
     * default value 100. When you specify a value for Maximum RGB tolerance, you must
     * set Sample range conversion to Limited range clip.
     */
    inline void SetMaximumRGBTolerance(int value) { m_maximumRGBToleranceHasBeenSet = true; m_maximumRGBTolerance = value; }

    /**
     * Specify the Maximum RGB color sample range tolerance for your output.
     * MediaConvert corrects any YUV values that, when converted to RGB, would be
     * outside the upper tolerance that you specify. Enter an integer from 90 to 105 as
     * an offset percentage to the maximum possible value. Leave blank to use the
     * default value 100. When you specify a value for Maximum RGB tolerance, you must
     * set Sample range conversion to Limited range clip.
     */
    inline ClipLimits& WithMaximumRGBTolerance(int value) { SetMaximumRGBTolerance(value); return *this;}


    /**
     * Specify the Maximum YUV color sample limit. MediaConvert conforms any pixels in
     * your input above the value that you specify to typical limited range bounds.
     * Enter an integer from 920 to 1023. Leave blank to use the default value 940. The
     * value that you enter applies to 10-bit ranges. For 8-bit ranges, MediaConvert
     * automatically scales this value down. When you specify a value for Maximum YUV,
     * you must set Sample range conversion to Limited range clip.
     */
    inline int GetMaximumYUV() const{ return m_maximumYUV; }

    /**
     * Specify the Maximum YUV color sample limit. MediaConvert conforms any pixels in
     * your input above the value that you specify to typical limited range bounds.
     * Enter an integer from 920 to 1023. Leave blank to use the default value 940. The
     * value that you enter applies to 10-bit ranges. For 8-bit ranges, MediaConvert
     * automatically scales this value down. When you specify a value for Maximum YUV,
     * you must set Sample range conversion to Limited range clip.
     */
    inline bool MaximumYUVHasBeenSet() const { return m_maximumYUVHasBeenSet; }

    /**
     * Specify the Maximum YUV color sample limit. MediaConvert conforms any pixels in
     * your input above the value that you specify to typical limited range bounds.
     * Enter an integer from 920 to 1023. Leave blank to use the default value 940. The
     * value that you enter applies to 10-bit ranges. For 8-bit ranges, MediaConvert
     * automatically scales this value down. When you specify a value for Maximum YUV,
     * you must set Sample range conversion to Limited range clip.
     */
    inline void SetMaximumYUV(int value) { m_maximumYUVHasBeenSet = true; m_maximumYUV = value; }

    /**
     * Specify the Maximum YUV color sample limit. MediaConvert conforms any pixels in
     * your input above the value that you specify to typical limited range bounds.
     * Enter an integer from 920 to 1023. Leave blank to use the default value 940. The
     * value that you enter applies to 10-bit ranges. For 8-bit ranges, MediaConvert
     * automatically scales this value down. When you specify a value for Maximum YUV,
     * you must set Sample range conversion to Limited range clip.
     */
    inline ClipLimits& WithMaximumYUV(int value) { SetMaximumYUV(value); return *this;}


    /**
     * Specify the Minimum RGB color sample range tolerance for your output.
     * MediaConvert corrects any YUV values that, when converted to RGB, would be
     * outside the lower tolerance that you specify. Enter an integer from -5 to 10 as
     * an offset percentage to the minimum possible value. Leave blank to use the
     * default value 0. When you specify a value for Minimum RGB tolerance, you must
     * set Sample range conversion to Limited range clip.
     */
    inline int GetMinimumRGBTolerance() const{ return m_minimumRGBTolerance; }

    /**
     * Specify the Minimum RGB color sample range tolerance for your output.
     * MediaConvert corrects any YUV values that, when converted to RGB, would be
     * outside the lower tolerance that you specify. Enter an integer from -5 to 10 as
     * an offset percentage to the minimum possible value. Leave blank to use the
     * default value 0. When you specify a value for Minimum RGB tolerance, you must
     * set Sample range conversion to Limited range clip.
     */
    inline bool MinimumRGBToleranceHasBeenSet() const { return m_minimumRGBToleranceHasBeenSet; }

    /**
     * Specify the Minimum RGB color sample range tolerance for your output.
     * MediaConvert corrects any YUV values that, when converted to RGB, would be
     * outside the lower tolerance that you specify. Enter an integer from -5 to 10 as
     * an offset percentage to the minimum possible value. Leave blank to use the
     * default value 0. When you specify a value for Minimum RGB tolerance, you must
     * set Sample range conversion to Limited range clip.
     */
    inline void SetMinimumRGBTolerance(int value) { m_minimumRGBToleranceHasBeenSet = true; m_minimumRGBTolerance = value; }

    /**
     * Specify the Minimum RGB color sample range tolerance for your output.
     * MediaConvert corrects any YUV values that, when converted to RGB, would be
     * outside the lower tolerance that you specify. Enter an integer from -5 to 10 as
     * an offset percentage to the minimum possible value. Leave blank to use the
     * default value 0. When you specify a value for Minimum RGB tolerance, you must
     * set Sample range conversion to Limited range clip.
     */
    inline ClipLimits& WithMinimumRGBTolerance(int value) { SetMinimumRGBTolerance(value); return *this;}


    /**
     * Specify the Minimum YUV color sample limit. MediaConvert conforms any pixels in
     * your input below the value that you specify to typical limited range bounds.
     * Enter an integer from 0 to 128. Leave blank to use the default value 64. The
     * value that you enter applies to 10-bit ranges. For 8-bit ranges, MediaConvert
     * automatically scales this value down. When you specify a value for Minumum YUV,
     * you must set Sample range conversion to Limited range clip.
     */
    inline int GetMinimumYUV() const{ return m_minimumYUV; }

    /**
     * Specify the Minimum YUV color sample limit. MediaConvert conforms any pixels in
     * your input below the value that you specify to typical limited range bounds.
     * Enter an integer from 0 to 128. Leave blank to use the default value 64. The
     * value that you enter applies to 10-bit ranges. For 8-bit ranges, MediaConvert
     * automatically scales this value down. When you specify a value for Minumum YUV,
     * you must set Sample range conversion to Limited range clip.
     */
    inline bool MinimumYUVHasBeenSet() const { return m_minimumYUVHasBeenSet; }

    /**
     * Specify the Minimum YUV color sample limit. MediaConvert conforms any pixels in
     * your input below the value that you specify to typical limited range bounds.
     * Enter an integer from 0 to 128. Leave blank to use the default value 64. The
     * value that you enter applies to 10-bit ranges. For 8-bit ranges, MediaConvert
     * automatically scales this value down. When you specify a value for Minumum YUV,
     * you must set Sample range conversion to Limited range clip.
     */
    inline void SetMinimumYUV(int value) { m_minimumYUVHasBeenSet = true; m_minimumYUV = value; }

    /**
     * Specify the Minimum YUV color sample limit. MediaConvert conforms any pixels in
     * your input below the value that you specify to typical limited range bounds.
     * Enter an integer from 0 to 128. Leave blank to use the default value 64. The
     * value that you enter applies to 10-bit ranges. For 8-bit ranges, MediaConvert
     * automatically scales this value down. When you specify a value for Minumum YUV,
     * you must set Sample range conversion to Limited range clip.
     */
    inline ClipLimits& WithMinimumYUV(int value) { SetMinimumYUV(value); return *this;}

  private:

    int m_maximumRGBTolerance;
    bool m_maximumRGBToleranceHasBeenSet = false;

    int m_maximumYUV;
    bool m_maximumYUVHasBeenSet = false;

    int m_minimumRGBTolerance;
    bool m_minimumRGBToleranceHasBeenSet = false;

    int m_minimumYUV;
    bool m_minimumYUVHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
