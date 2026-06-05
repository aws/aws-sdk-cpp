/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MediaConvert {
namespace Model {

/**
 * Content light level information (CTA-861.3). Describes the light level
 * characteristics of the content.<p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/ContentLightLevel">AWS
 * API Reference</a></p>
 */
class ContentLightLevel {
 public:
  AWS_MEDIACONVERT_API ContentLightLevel() = default;
  AWS_MEDIACONVERT_API ContentLightLevel(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONVERT_API ContentLightLevel& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * Maximum content light level (MaxCLL), in cd/m².
   */
  inline int GetMaxContentLightLevel() const { return m_maxContentLightLevel; }
  inline bool MaxContentLightLevelHasBeenSet() const { return m_maxContentLightLevelHasBeenSet; }
  inline void SetMaxContentLightLevel(int value) {
    m_maxContentLightLevelHasBeenSet = true;
    m_maxContentLightLevel = value;
  }
  inline ContentLightLevel& WithMaxContentLightLevel(int value) {
    SetMaxContentLightLevel(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * Maximum frame-average light level (MaxFALL), in cd/m².
   */
  inline int GetMaxFrameAverageLightLevel() const { return m_maxFrameAverageLightLevel; }
  inline bool MaxFrameAverageLightLevelHasBeenSet() const { return m_maxFrameAverageLightLevelHasBeenSet; }
  inline void SetMaxFrameAverageLightLevel(int value) {
    m_maxFrameAverageLightLevelHasBeenSet = true;
    m_maxFrameAverageLightLevel = value;
  }
  inline ContentLightLevel& WithMaxFrameAverageLightLevel(int value) {
    SetMaxFrameAverageLightLevel(value);
    return *this;
  }
  ///@}
 private:
  int m_maxContentLightLevel{0};

  int m_maxFrameAverageLightLevel{0};
  bool m_maxContentLightLevelHasBeenSet = false;
  bool m_maxFrameAverageLightLevelHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
