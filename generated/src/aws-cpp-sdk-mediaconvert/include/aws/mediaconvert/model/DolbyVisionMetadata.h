/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/DolbyVisionPresence.h>

#include <utility>

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
 * Dolby Vision characteristics of the video track: the profile and level, and
 * whether the RPU (dynamic metadata), base layer, and enhancement layer are
 * present. Use this to distinguish Dolby Vision content from standard HEVC and to
 * choose your encoding or passthrough settings. Omitted when the content is not
 * Dolby Vision.<p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/DolbyVisionMetadata">AWS
 * API Reference</a></p>
 */
class DolbyVisionMetadata {
 public:
  AWS_MEDIACONVERT_API DolbyVisionMetadata() = default;
  AWS_MEDIACONVERT_API DolbyVisionMetadata(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONVERT_API DolbyVisionMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * Whether a Dolby Vision component is present in the track.
   */
  inline DolbyVisionPresence GetBaseLayer() const { return m_baseLayer; }
  inline bool BaseLayerHasBeenSet() const { return m_baseLayerHasBeenSet; }
  inline void SetBaseLayer(DolbyVisionPresence value) {
    m_baseLayerHasBeenSet = true;
    m_baseLayer = value;
  }
  inline DolbyVisionMetadata& WithBaseLayer(DolbyVisionPresence value) {
    SetBaseLayer(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * Whether a Dolby Vision component is present in the track.
   */
  inline DolbyVisionPresence GetEnhancementLayer() const { return m_enhancementLayer; }
  inline bool EnhancementLayerHasBeenSet() const { return m_enhancementLayerHasBeenSet; }
  inline void SetEnhancementLayer(DolbyVisionPresence value) {
    m_enhancementLayerHasBeenSet = true;
    m_enhancementLayer = value;
  }
  inline DolbyVisionMetadata& WithEnhancementLayer(DolbyVisionPresence value) {
    SetEnhancementLayer(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * The Dolby Vision level, which indicates the maximum resolution and frame rate.
   */
  inline int GetLevel() const { return m_level; }
  inline bool LevelHasBeenSet() const { return m_levelHasBeenSet; }
  inline void SetLevel(int value) {
    m_levelHasBeenSet = true;
    m_level = value;
  }
  inline DolbyVisionMetadata& WithLevel(int value) {
    SetLevel(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * The Dolby Vision profile, for example 5, 7, or 8. The profile determines the
   * layer structure and playback compatibility of the content.
   */
  inline int GetProfile() const { return m_profile; }
  inline bool ProfileHasBeenSet() const { return m_profileHasBeenSet; }
  inline void SetProfile(int value) {
    m_profileHasBeenSet = true;
    m_profile = value;
  }
  inline DolbyVisionMetadata& WithProfile(int value) {
    SetProfile(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * Whether a Dolby Vision component is present in the track.
   */
  inline DolbyVisionPresence GetRpu() const { return m_rpu; }
  inline bool RpuHasBeenSet() const { return m_rpuHasBeenSet; }
  inline void SetRpu(DolbyVisionPresence value) {
    m_rpuHasBeenSet = true;
    m_rpu = value;
  }
  inline DolbyVisionMetadata& WithRpu(DolbyVisionPresence value) {
    SetRpu(value);
    return *this;
  }
  ///@}
 private:
  DolbyVisionPresence m_baseLayer{DolbyVisionPresence::NOT_SET};

  DolbyVisionPresence m_enhancementLayer{DolbyVisionPresence::NOT_SET};

  int m_level{0};

  int m_profile{0};

  DolbyVisionPresence m_rpu{DolbyVisionPresence::NOT_SET};
  bool m_baseLayerHasBeenSet = false;
  bool m_enhancementLayerHasBeenSet = false;
  bool m_levelHasBeenSet = false;
  bool m_profileHasBeenSet = false;
  bool m_rpuHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
