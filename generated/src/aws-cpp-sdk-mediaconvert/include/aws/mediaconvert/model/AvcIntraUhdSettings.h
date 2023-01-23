/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/AvcIntraUhdQualityTuningLevel.h>
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
namespace MediaConvert
{
namespace Model
{

  /**
   * Optional when you set AVC-Intra class (avcIntraClass) to Class 4K/2K
   * (CLASS_4K_2K). When you set AVC-Intra class to a different value, this object
   * isn't allowed.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/AvcIntraUhdSettings">AWS
   * API Reference</a></p>
   */
  class AvcIntraUhdSettings
  {
  public:
    AWS_MEDIACONVERT_API AvcIntraUhdSettings();
    AWS_MEDIACONVERT_API AvcIntraUhdSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API AvcIntraUhdSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Optional. Use Quality tuning level (qualityTuningLevel) to choose how many
     * transcoding passes MediaConvert does with your video. When you choose Multi-pass
     * (MULTI_PASS), your video quality is better and your output bitrate is more
     * accurate. That is, the actual bitrate of your output is closer to the target
     * bitrate defined in the specification. When you choose Single-pass (SINGLE_PASS),
     * your encoding time is faster. The default behavior is Single-pass (SINGLE_PASS).
     */
    inline const AvcIntraUhdQualityTuningLevel& GetQualityTuningLevel() const{ return m_qualityTuningLevel; }

    /**
     * Optional. Use Quality tuning level (qualityTuningLevel) to choose how many
     * transcoding passes MediaConvert does with your video. When you choose Multi-pass
     * (MULTI_PASS), your video quality is better and your output bitrate is more
     * accurate. That is, the actual bitrate of your output is closer to the target
     * bitrate defined in the specification. When you choose Single-pass (SINGLE_PASS),
     * your encoding time is faster. The default behavior is Single-pass (SINGLE_PASS).
     */
    inline bool QualityTuningLevelHasBeenSet() const { return m_qualityTuningLevelHasBeenSet; }

    /**
     * Optional. Use Quality tuning level (qualityTuningLevel) to choose how many
     * transcoding passes MediaConvert does with your video. When you choose Multi-pass
     * (MULTI_PASS), your video quality is better and your output bitrate is more
     * accurate. That is, the actual bitrate of your output is closer to the target
     * bitrate defined in the specification. When you choose Single-pass (SINGLE_PASS),
     * your encoding time is faster. The default behavior is Single-pass (SINGLE_PASS).
     */
    inline void SetQualityTuningLevel(const AvcIntraUhdQualityTuningLevel& value) { m_qualityTuningLevelHasBeenSet = true; m_qualityTuningLevel = value; }

    /**
     * Optional. Use Quality tuning level (qualityTuningLevel) to choose how many
     * transcoding passes MediaConvert does with your video. When you choose Multi-pass
     * (MULTI_PASS), your video quality is better and your output bitrate is more
     * accurate. That is, the actual bitrate of your output is closer to the target
     * bitrate defined in the specification. When you choose Single-pass (SINGLE_PASS),
     * your encoding time is faster. The default behavior is Single-pass (SINGLE_PASS).
     */
    inline void SetQualityTuningLevel(AvcIntraUhdQualityTuningLevel&& value) { m_qualityTuningLevelHasBeenSet = true; m_qualityTuningLevel = std::move(value); }

    /**
     * Optional. Use Quality tuning level (qualityTuningLevel) to choose how many
     * transcoding passes MediaConvert does with your video. When you choose Multi-pass
     * (MULTI_PASS), your video quality is better and your output bitrate is more
     * accurate. That is, the actual bitrate of your output is closer to the target
     * bitrate defined in the specification. When you choose Single-pass (SINGLE_PASS),
     * your encoding time is faster. The default behavior is Single-pass (SINGLE_PASS).
     */
    inline AvcIntraUhdSettings& WithQualityTuningLevel(const AvcIntraUhdQualityTuningLevel& value) { SetQualityTuningLevel(value); return *this;}

    /**
     * Optional. Use Quality tuning level (qualityTuningLevel) to choose how many
     * transcoding passes MediaConvert does with your video. When you choose Multi-pass
     * (MULTI_PASS), your video quality is better and your output bitrate is more
     * accurate. That is, the actual bitrate of your output is closer to the target
     * bitrate defined in the specification. When you choose Single-pass (SINGLE_PASS),
     * your encoding time is faster. The default behavior is Single-pass (SINGLE_PASS).
     */
    inline AvcIntraUhdSettings& WithQualityTuningLevel(AvcIntraUhdQualityTuningLevel&& value) { SetQualityTuningLevel(std::move(value)); return *this;}

  private:

    AvcIntraUhdQualityTuningLevel m_qualityTuningLevel;
    bool m_qualityTuningLevelHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
