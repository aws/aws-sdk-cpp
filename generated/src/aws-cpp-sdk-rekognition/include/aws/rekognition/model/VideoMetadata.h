/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rekognition/model/VideoColorRange.h>
#include <utility>

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
   * <p>Information about a video that Amazon Rekognition analyzed.
   * <code>Videometadata</code> is returned in every page of paginated responses from
   * a Amazon Rekognition video operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/VideoMetadata">AWS
   * API Reference</a></p>
   */
  class VideoMetadata
  {
  public:
    AWS_REKOGNITION_API VideoMetadata() = default;
    AWS_REKOGNITION_API VideoMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API VideoMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Type of compression used in the analyzed video. </p>
     */
    inline const Aws::String& GetCodec() const { return m_codec; }
    inline bool CodecHasBeenSet() const { return m_codecHasBeenSet; }
    template<typename CodecT = Aws::String>
    void SetCodec(CodecT&& value) { m_codecHasBeenSet = true; m_codec = std::forward<CodecT>(value); }
    template<typename CodecT = Aws::String>
    VideoMetadata& WithCodec(CodecT&& value) { SetCodec(std::forward<CodecT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Length of the video in milliseconds.</p>
     */
    inline long long GetDurationMillis() const { return m_durationMillis; }
    inline bool DurationMillisHasBeenSet() const { return m_durationMillisHasBeenSet; }
    inline void SetDurationMillis(long long value) { m_durationMillisHasBeenSet = true; m_durationMillis = value; }
    inline VideoMetadata& WithDurationMillis(long long value) { SetDurationMillis(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Format of the analyzed video. Possible values are MP4, MOV and AVI. </p>
     */
    inline const Aws::String& GetFormat() const { return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    template<typename FormatT = Aws::String>
    void SetFormat(FormatT&& value) { m_formatHasBeenSet = true; m_format = std::forward<FormatT>(value); }
    template<typename FormatT = Aws::String>
    VideoMetadata& WithFormat(FormatT&& value) { SetFormat(std::forward<FormatT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Number of frames per second in the video.</p>
     */
    inline double GetFrameRate() const { return m_frameRate; }
    inline bool FrameRateHasBeenSet() const { return m_frameRateHasBeenSet; }
    inline void SetFrameRate(double value) { m_frameRateHasBeenSet = true; m_frameRate = value; }
    inline VideoMetadata& WithFrameRate(double value) { SetFrameRate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Vertical pixel dimension of the video.</p>
     */
    inline long long GetFrameHeight() const { return m_frameHeight; }
    inline bool FrameHeightHasBeenSet() const { return m_frameHeightHasBeenSet; }
    inline void SetFrameHeight(long long value) { m_frameHeightHasBeenSet = true; m_frameHeight = value; }
    inline VideoMetadata& WithFrameHeight(long long value) { SetFrameHeight(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Horizontal pixel dimension of the video.</p>
     */
    inline long long GetFrameWidth() const { return m_frameWidth; }
    inline bool FrameWidthHasBeenSet() const { return m_frameWidthHasBeenSet; }
    inline void SetFrameWidth(long long value) { m_frameWidthHasBeenSet = true; m_frameWidth = value; }
    inline VideoMetadata& WithFrameWidth(long long value) { SetFrameWidth(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A description of the range of luminance values in a video, either LIMITED
     * (16 to 235) or FULL (0 to 255). </p>
     */
    inline VideoColorRange GetColorRange() const { return m_colorRange; }
    inline bool ColorRangeHasBeenSet() const { return m_colorRangeHasBeenSet; }
    inline void SetColorRange(VideoColorRange value) { m_colorRangeHasBeenSet = true; m_colorRange = value; }
    inline VideoMetadata& WithColorRange(VideoColorRange value) { SetColorRange(value); return *this;}
    ///@}
  private:

    Aws::String m_codec;
    bool m_codecHasBeenSet = false;

    long long m_durationMillis{0};
    bool m_durationMillisHasBeenSet = false;

    Aws::String m_format;
    bool m_formatHasBeenSet = false;

    double m_frameRate{0.0};
    bool m_frameRateHasBeenSet = false;

    long long m_frameHeight{0};
    bool m_frameHeightHasBeenSet = false;

    long long m_frameWidth{0};
    bool m_frameWidthHasBeenSet = false;

    VideoColorRange m_colorRange{VideoColorRange::NOT_SET};
    bool m_colorRangeHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
