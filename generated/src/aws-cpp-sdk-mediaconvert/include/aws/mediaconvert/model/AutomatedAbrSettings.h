/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconvert/model/AutomatedAbrRule.h>
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
   * Use automated ABR to have MediaConvert set up the renditions in your ABR package
   * for you automatically, based on characteristics of your input video. This
   * feature optimizes video quality while minimizing the overall size of your ABR
   * package.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/AutomatedAbrSettings">AWS
   * API Reference</a></p>
   */
  class AutomatedAbrSettings
  {
  public:
    AWS_MEDIACONVERT_API AutomatedAbrSettings() = default;
    AWS_MEDIACONVERT_API AutomatedAbrSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API AutomatedAbrSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Specify the maximum average bitrate for MediaConvert to use in your automated
     * ABR stack. If you don't specify a value, MediaConvert uses 8,000,000 (8 mb/s) by
     * default. The average bitrate of your highest-quality rendition will be equal to
     * or below this value, depending on the quality, complexity, and resolution of
     * your content. Note that the instantaneous maximum bitrate may vary above the
     * value that you specify.
     */
    inline int GetMaxAbrBitrate() const { return m_maxAbrBitrate; }
    inline bool MaxAbrBitrateHasBeenSet() const { return m_maxAbrBitrateHasBeenSet; }
    inline void SetMaxAbrBitrate(int value) { m_maxAbrBitrateHasBeenSet = true; m_maxAbrBitrate = value; }
    inline AutomatedAbrSettings& WithMaxAbrBitrate(int value) { SetMaxAbrBitrate(value); return *this;}
    ///@}

    ///@{
    /**
     * Optional. Specify the QVBR quality level to use for all renditions in your
     * automated ABR stack. To have MediaConvert automatically determine the quality
     * level: Leave blank. To manually specify a quality level: Enter a value from 1 to
     * 10. MediaConvert will use a quality level up to the value that you specify,
     * depending on your source. For more information about QVBR quality levels, see:
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/qvbr-guidelines.html
     */
    inline double GetMaxQualityLevel() const { return m_maxQualityLevel; }
    inline bool MaxQualityLevelHasBeenSet() const { return m_maxQualityLevelHasBeenSet; }
    inline void SetMaxQualityLevel(double value) { m_maxQualityLevelHasBeenSet = true; m_maxQualityLevel = value; }
    inline AutomatedAbrSettings& WithMaxQualityLevel(double value) { SetMaxQualityLevel(value); return *this;}
    ///@}

    ///@{
    /**
     * Optional. The maximum number of renditions that MediaConvert will create in your
     * automated ABR stack. The number of renditions is determined automatically, based
     * on analysis of each job, but will never exceed this limit. When you set this to
     * Auto in the console, which is equivalent to excluding it from your JSON job
     * specification, MediaConvert defaults to a limit of 15.
     */
    inline int GetMaxRenditions() const { return m_maxRenditions; }
    inline bool MaxRenditionsHasBeenSet() const { return m_maxRenditionsHasBeenSet; }
    inline void SetMaxRenditions(int value) { m_maxRenditionsHasBeenSet = true; m_maxRenditions = value; }
    inline AutomatedAbrSettings& WithMaxRenditions(int value) { SetMaxRenditions(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the minimum average bitrate for MediaConvert to use in your automated
     * ABR stack. If you don't specify a value, MediaConvert uses 600,000 (600 kb/s) by
     * default. The average bitrate of your lowest-quality rendition will be near this
     * value. Note that the instantaneous minimum bitrate may vary below the value that
     * you specify.
     */
    inline int GetMinAbrBitrate() const { return m_minAbrBitrate; }
    inline bool MinAbrBitrateHasBeenSet() const { return m_minAbrBitrateHasBeenSet; }
    inline void SetMinAbrBitrate(int value) { m_minAbrBitrateHasBeenSet = true; m_minAbrBitrate = value; }
    inline AutomatedAbrSettings& WithMinAbrBitrate(int value) { SetMinAbrBitrate(value); return *this;}
    ///@}

    ///@{
    /**
     * Optional. Use Automated ABR rules to specify restrictions for the rendition
     * sizes MediaConvert will create in your ABR stack. You can use these rules if
     * your ABR workflow has specific rendition size requirements, but you still want
     * MediaConvert to optimize for video quality and overall file size.
     */
    inline const Aws::Vector<AutomatedAbrRule>& GetRules() const { return m_rules; }
    inline bool RulesHasBeenSet() const { return m_rulesHasBeenSet; }
    template<typename RulesT = Aws::Vector<AutomatedAbrRule>>
    void SetRules(RulesT&& value) { m_rulesHasBeenSet = true; m_rules = std::forward<RulesT>(value); }
    template<typename RulesT = Aws::Vector<AutomatedAbrRule>>
    AutomatedAbrSettings& WithRules(RulesT&& value) { SetRules(std::forward<RulesT>(value)); return *this;}
    template<typename RulesT = AutomatedAbrRule>
    AutomatedAbrSettings& AddRules(RulesT&& value) { m_rulesHasBeenSet = true; m_rules.emplace_back(std::forward<RulesT>(value)); return *this; }
    ///@}
  private:

    int m_maxAbrBitrate{0};
    bool m_maxAbrBitrateHasBeenSet = false;

    double m_maxQualityLevel{0.0};
    bool m_maxQualityLevelHasBeenSet = false;

    int m_maxRenditions{0};
    bool m_maxRenditionsHasBeenSet = false;

    int m_minAbrBitrate{0};
    bool m_minAbrBitrateHasBeenSet = false;

    Aws::Vector<AutomatedAbrRule> m_rules;
    bool m_rulesHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
