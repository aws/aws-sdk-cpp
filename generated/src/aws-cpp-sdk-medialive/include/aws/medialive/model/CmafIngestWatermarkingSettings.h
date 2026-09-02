/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/CmafIngestAbWatermarkerIrdetoSettings.h>

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
 * A/B Watermarker settings for CMAF Ingest output groups.<p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CmafIngestWatermarkingSettings">AWS
 * API Reference</a></p>
 */
class CmafIngestWatermarkingSettings {
 public:
  AWS_MEDIALIVE_API CmafIngestWatermarkingSettings() = default;
  AWS_MEDIALIVE_API CmafIngestWatermarkingSettings(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIALIVE_API CmafIngestWatermarkingSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const CmafIngestAbWatermarkerIrdetoSettings& GetCmafIngestAbWatermarkerIrdetoSettings() const {
    return m_cmafIngestAbWatermarkerIrdetoSettings;
  }
  inline bool CmafIngestAbWatermarkerIrdetoSettingsHasBeenSet() const { return m_cmafIngestAbWatermarkerIrdetoSettingsHasBeenSet; }
  template <typename CmafIngestAbWatermarkerIrdetoSettingsT = CmafIngestAbWatermarkerIrdetoSettings>
  void SetCmafIngestAbWatermarkerIrdetoSettings(CmafIngestAbWatermarkerIrdetoSettingsT&& value) {
    m_cmafIngestAbWatermarkerIrdetoSettingsHasBeenSet = true;
    m_cmafIngestAbWatermarkerIrdetoSettings = std::forward<CmafIngestAbWatermarkerIrdetoSettingsT>(value);
  }
  template <typename CmafIngestAbWatermarkerIrdetoSettingsT = CmafIngestAbWatermarkerIrdetoSettings>
  CmafIngestWatermarkingSettings& WithCmafIngestAbWatermarkerIrdetoSettings(CmafIngestAbWatermarkerIrdetoSettingsT&& value) {
    SetCmafIngestAbWatermarkerIrdetoSettings(std::forward<CmafIngestAbWatermarkerIrdetoSettingsT>(value));
    return *this;
  }
  ///@}
 private:
  CmafIngestAbWatermarkerIrdetoSettings m_cmafIngestAbWatermarkerIrdetoSettings;
  bool m_cmafIngestAbWatermarkerIrdetoSettingsHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
