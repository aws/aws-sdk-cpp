/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/ContentLightLevel.h>
#include <aws/mediaconvert/model/MasteringDisplayColorVolume.h>

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
 * HDR (High Dynamic Range) metadata extracted from the container, including
 * mastering display color volume and content light level information. This
 * metadata is present in HDR10 and similar HDR content.<p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/HdrMetadata">AWS
 * API Reference</a></p>
 */
class HdrMetadata {
 public:
  AWS_MEDIACONVERT_API HdrMetadata() = default;
  AWS_MEDIACONVERT_API HdrMetadata(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONVERT_API HdrMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * Content light level information (CTA-861.3). Describes the light level
   * characteristics of the content.
   */
  inline const ContentLightLevel& GetContentLightLevel() const { return m_contentLightLevel; }
  inline bool ContentLightLevelHasBeenSet() const { return m_contentLightLevelHasBeenSet; }
  template <typename ContentLightLevelT = ContentLightLevel>
  void SetContentLightLevel(ContentLightLevelT&& value) {
    m_contentLightLevelHasBeenSet = true;
    m_contentLightLevel = std::forward<ContentLightLevelT>(value);
  }
  template <typename ContentLightLevelT = ContentLightLevel>
  HdrMetadata& WithContentLightLevel(ContentLightLevelT&& value) {
    SetContentLightLevel(std::forward<ContentLightLevelT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * Mastering display color volume metadata (SMPTE ST 2086). Describes the color
   * volume of the display used to master the content. Chromaticity coordinates are
   * in units of 0.00002. Luminance values are in units of 0.0001 cd/m².
   */
  inline const MasteringDisplayColorVolume& GetMasteringDisplayColorVolume() const { return m_masteringDisplayColorVolume; }
  inline bool MasteringDisplayColorVolumeHasBeenSet() const { return m_masteringDisplayColorVolumeHasBeenSet; }
  template <typename MasteringDisplayColorVolumeT = MasteringDisplayColorVolume>
  void SetMasteringDisplayColorVolume(MasteringDisplayColorVolumeT&& value) {
    m_masteringDisplayColorVolumeHasBeenSet = true;
    m_masteringDisplayColorVolume = std::forward<MasteringDisplayColorVolumeT>(value);
  }
  template <typename MasteringDisplayColorVolumeT = MasteringDisplayColorVolume>
  HdrMetadata& WithMasteringDisplayColorVolume(MasteringDisplayColorVolumeT&& value) {
    SetMasteringDisplayColorVolume(std::forward<MasteringDisplayColorVolumeT>(value));
    return *this;
  }
  ///@}
 private:
  ContentLightLevel m_contentLightLevel;

  MasteringDisplayColorVolume m_masteringDisplayColorVolume;
  bool m_contentLightLevelHasBeenSet = false;
  bool m_masteringDisplayColorVolumeHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
