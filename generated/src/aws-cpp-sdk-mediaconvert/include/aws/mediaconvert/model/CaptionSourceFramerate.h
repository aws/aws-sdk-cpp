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
   * Ignore this setting unless your input captions format is SCC. To have the
   * service compensate for differing frame rates between your input captions and
   * input video, specify the frame rate of the captions file. Specify this value as
   * a fraction. For example, you might specify 24 / 1 for 24 fps, 25 / 1 for 25 fps,
   * 24000 / 1001 for 23.976 fps, or 30000 / 1001 for 29.97 fps.<p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/CaptionSourceFramerate">AWS
   * API Reference</a></p>
   */
  class CaptionSourceFramerate
  {
  public:
    AWS_MEDIACONVERT_API CaptionSourceFramerate() = default;
    AWS_MEDIACONVERT_API CaptionSourceFramerate(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API CaptionSourceFramerate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Specify the denominator of the fraction that represents the frame rate for the
     * setting Caption source frame rate. Use this setting along with the setting
     * Framerate numerator.
     */
    inline int GetFramerateDenominator() const { return m_framerateDenominator; }
    inline bool FramerateDenominatorHasBeenSet() const { return m_framerateDenominatorHasBeenSet; }
    inline void SetFramerateDenominator(int value) { m_framerateDenominatorHasBeenSet = true; m_framerateDenominator = value; }
    inline CaptionSourceFramerate& WithFramerateDenominator(int value) { SetFramerateDenominator(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the numerator of the fraction that represents the frame rate for the
     * setting Caption source frame rate. Use this setting along with the setting
     * Framerate denominator.
     */
    inline int GetFramerateNumerator() const { return m_framerateNumerator; }
    inline bool FramerateNumeratorHasBeenSet() const { return m_framerateNumeratorHasBeenSet; }
    inline void SetFramerateNumerator(int value) { m_framerateNumeratorHasBeenSet = true; m_framerateNumerator = value; }
    inline CaptionSourceFramerate& WithFramerateNumerator(int value) { SetFramerateNumerator(value); return *this;}
    ///@}
  private:

    int m_framerateDenominator{0};
    bool m_framerateDenominatorHasBeenSet = false;

    int m_framerateNumerator{0};
    bool m_framerateNumeratorHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
