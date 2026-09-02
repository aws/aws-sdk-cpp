/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/MediaPackageV2AbWatermarkerIrdetoSettings.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MediaLive {
namespace Model {

/**
 * A/B Watermarker settings for MediaPackage V2 output groups.<p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/MediaPackageV2WatermarkingSettings">AWS
 * API Reference</a></p>
 */
class MediaPackageV2WatermarkingSettings {
 public:
  AWS_MEDIALIVE_API MediaPackageV2WatermarkingSettings() = default;
  AWS_MEDIALIVE_API MediaPackageV2WatermarkingSettings(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIALIVE_API MediaPackageV2WatermarkingSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const MediaPackageV2AbWatermarkerIrdetoSettings& GetMediaPackageV2AbWatermarkerIrdetoSettings() const {
    return m_mediaPackageV2AbWatermarkerIrdetoSettings;
  }
  inline bool MediaPackageV2AbWatermarkerIrdetoSettingsHasBeenSet() const { return m_mediaPackageV2AbWatermarkerIrdetoSettingsHasBeenSet; }
  template <typename MediaPackageV2AbWatermarkerIrdetoSettingsT = MediaPackageV2AbWatermarkerIrdetoSettings>
  void SetMediaPackageV2AbWatermarkerIrdetoSettings(MediaPackageV2AbWatermarkerIrdetoSettingsT&& value) {
    m_mediaPackageV2AbWatermarkerIrdetoSettingsHasBeenSet = true;
    m_mediaPackageV2AbWatermarkerIrdetoSettings = std::forward<MediaPackageV2AbWatermarkerIrdetoSettingsT>(value);
  }
  template <typename MediaPackageV2AbWatermarkerIrdetoSettingsT = MediaPackageV2AbWatermarkerIrdetoSettings>
  MediaPackageV2WatermarkingSettings& WithMediaPackageV2AbWatermarkerIrdetoSettings(MediaPackageV2AbWatermarkerIrdetoSettingsT&& value) {
    SetMediaPackageV2AbWatermarkerIrdetoSettings(std::forward<MediaPackageV2AbWatermarkerIrdetoSettingsT>(value));
    return *this;
  }
  ///@}
 private:
  MediaPackageV2AbWatermarkerIrdetoSettings m_mediaPackageV2AbWatermarkerIrdetoSettings;
  bool m_mediaPackageV2AbWatermarkerIrdetoSettingsHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
