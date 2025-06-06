﻿/**
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
   * Required when you set Codec to the value FRAME_CAPTURE.<p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/FrameCaptureSettings">AWS
   * API Reference</a></p>
   */
  class FrameCaptureSettings
  {
  public:
    AWS_MEDIACONVERT_API FrameCaptureSettings() = default;
    AWS_MEDIACONVERT_API FrameCaptureSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API FrameCaptureSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Frame capture will encode the first frame of the output stream, then one frame
     * every framerateDenominator/framerateNumerator seconds. For example, settings of
     * framerateNumerator = 1 and framerateDenominator = 3 (a rate of 1/3 frame per
     * second) will capture the first frame, then 1 frame every 3s. Files will be named
     * as filename.n.jpg where n is the 0-based sequence number of each Capture.
     */
    inline int GetFramerateDenominator() const { return m_framerateDenominator; }
    inline bool FramerateDenominatorHasBeenSet() const { return m_framerateDenominatorHasBeenSet; }
    inline void SetFramerateDenominator(int value) { m_framerateDenominatorHasBeenSet = true; m_framerateDenominator = value; }
    inline FrameCaptureSettings& WithFramerateDenominator(int value) { SetFramerateDenominator(value); return *this;}
    ///@}

    ///@{
    /**
     * Frame capture will encode the first frame of the output stream, then one frame
     * every framerateDenominator/framerateNumerator seconds. For example, settings of
     * framerateNumerator = 1 and framerateDenominator = 3 (a rate of 1/3 frame per
     * second) will capture the first frame, then 1 frame every 3s. Files will be named
     * as filename.NNNNNNN.jpg where N is the 0-based frame sequence number zero padded
     * to 7 decimal places.
     */
    inline int GetFramerateNumerator() const { return m_framerateNumerator; }
    inline bool FramerateNumeratorHasBeenSet() const { return m_framerateNumeratorHasBeenSet; }
    inline void SetFramerateNumerator(int value) { m_framerateNumeratorHasBeenSet = true; m_framerateNumerator = value; }
    inline FrameCaptureSettings& WithFramerateNumerator(int value) { SetFramerateNumerator(value); return *this;}
    ///@}

    ///@{
    /**
     * Maximum number of captures (encoded jpg output files).
     */
    inline int GetMaxCaptures() const { return m_maxCaptures; }
    inline bool MaxCapturesHasBeenSet() const { return m_maxCapturesHasBeenSet; }
    inline void SetMaxCaptures(int value) { m_maxCapturesHasBeenSet = true; m_maxCaptures = value; }
    inline FrameCaptureSettings& WithMaxCaptures(int value) { SetMaxCaptures(value); return *this;}
    ///@}

    ///@{
    /**
     * JPEG Quality - a higher value equals higher quality.
     */
    inline int GetQuality() const { return m_quality; }
    inline bool QualityHasBeenSet() const { return m_qualityHasBeenSet; }
    inline void SetQuality(int value) { m_qualityHasBeenSet = true; m_quality = value; }
    inline FrameCaptureSettings& WithQuality(int value) { SetQuality(value); return *this;}
    ///@}
  private:

    int m_framerateDenominator{0};
    bool m_framerateDenominatorHasBeenSet = false;

    int m_framerateNumerator{0};
    bool m_framerateNumeratorHasBeenSet = false;

    int m_maxCaptures{0};
    bool m_maxCapturesHasBeenSet = false;

    int m_quality{0};
    bool m_qualityHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
