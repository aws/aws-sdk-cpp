/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/AutoFilterSettings.h>
#include <aws/medialive/model/BandwidthReductionFilterSettings.h>
#include <aws/medialive/model/NoneFilterSettings.h>
#include <aws/medialive/model/PerceptualFilterSettings.h>
#include <aws/medialive/model/TemporalFilterSettings.h>

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
 * H264 Filter Settings<p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/H264FilterSettings">AWS
 * API Reference</a></p>
 */
class H264FilterSettings {
 public:
  AWS_MEDIALIVE_API H264FilterSettings() = default;
  AWS_MEDIALIVE_API H264FilterSettings(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIALIVE_API H264FilterSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const TemporalFilterSettings& GetTemporalFilterSettings() const { return m_temporalFilterSettings; }
  inline bool TemporalFilterSettingsHasBeenSet() const { return m_temporalFilterSettingsHasBeenSet; }
  template <typename TemporalFilterSettingsT = TemporalFilterSettings>
  void SetTemporalFilterSettings(TemporalFilterSettingsT&& value) {
    m_temporalFilterSettingsHasBeenSet = true;
    m_temporalFilterSettings = std::forward<TemporalFilterSettingsT>(value);
  }
  template <typename TemporalFilterSettingsT = TemporalFilterSettings>
  H264FilterSettings& WithTemporalFilterSettings(TemporalFilterSettingsT&& value) {
    SetTemporalFilterSettings(std::forward<TemporalFilterSettingsT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const BandwidthReductionFilterSettings& GetBandwidthReductionFilterSettings() const { return m_bandwidthReductionFilterSettings; }
  inline bool BandwidthReductionFilterSettingsHasBeenSet() const { return m_bandwidthReductionFilterSettingsHasBeenSet; }
  template <typename BandwidthReductionFilterSettingsT = BandwidthReductionFilterSettings>
  void SetBandwidthReductionFilterSettings(BandwidthReductionFilterSettingsT&& value) {
    m_bandwidthReductionFilterSettingsHasBeenSet = true;
    m_bandwidthReductionFilterSettings = std::forward<BandwidthReductionFilterSettingsT>(value);
  }
  template <typename BandwidthReductionFilterSettingsT = BandwidthReductionFilterSettings>
  H264FilterSettings& WithBandwidthReductionFilterSettings(BandwidthReductionFilterSettingsT&& value) {
    SetBandwidthReductionFilterSettings(std::forward<BandwidthReductionFilterSettingsT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const AutoFilterSettings& GetAutoFilterSettings() const { return m_autoFilterSettings; }
  inline bool AutoFilterSettingsHasBeenSet() const { return m_autoFilterSettingsHasBeenSet; }
  template <typename AutoFilterSettingsT = AutoFilterSettings>
  void SetAutoFilterSettings(AutoFilterSettingsT&& value) {
    m_autoFilterSettingsHasBeenSet = true;
    m_autoFilterSettings = std::forward<AutoFilterSettingsT>(value);
  }
  template <typename AutoFilterSettingsT = AutoFilterSettings>
  H264FilterSettings& WithAutoFilterSettings(AutoFilterSettingsT&& value) {
    SetAutoFilterSettings(std::forward<AutoFilterSettingsT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const NoneFilterSettings& GetNoneFilterSettings() const { return m_noneFilterSettings; }
  inline bool NoneFilterSettingsHasBeenSet() const { return m_noneFilterSettingsHasBeenSet; }
  template <typename NoneFilterSettingsT = NoneFilterSettings>
  void SetNoneFilterSettings(NoneFilterSettingsT&& value) {
    m_noneFilterSettingsHasBeenSet = true;
    m_noneFilterSettings = std::forward<NoneFilterSettingsT>(value);
  }
  template <typename NoneFilterSettingsT = NoneFilterSettings>
  H264FilterSettings& WithNoneFilterSettings(NoneFilterSettingsT&& value) {
    SetNoneFilterSettings(std::forward<NoneFilterSettingsT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const PerceptualFilterSettings& GetPerceptualFilterSettings() const { return m_perceptualFilterSettings; }
  inline bool PerceptualFilterSettingsHasBeenSet() const { return m_perceptualFilterSettingsHasBeenSet; }
  template <typename PerceptualFilterSettingsT = PerceptualFilterSettings>
  void SetPerceptualFilterSettings(PerceptualFilterSettingsT&& value) {
    m_perceptualFilterSettingsHasBeenSet = true;
    m_perceptualFilterSettings = std::forward<PerceptualFilterSettingsT>(value);
  }
  template <typename PerceptualFilterSettingsT = PerceptualFilterSettings>
  H264FilterSettings& WithPerceptualFilterSettings(PerceptualFilterSettingsT&& value) {
    SetPerceptualFilterSettings(std::forward<PerceptualFilterSettingsT>(value));
    return *this;
  }
  ///@}
 private:
  TemporalFilterSettings m_temporalFilterSettings;

  BandwidthReductionFilterSettings m_bandwidthReductionFilterSettings;

  AutoFilterSettings m_autoFilterSettings;

  NoneFilterSettings m_noneFilterSettings;

  PerceptualFilterSettings m_perceptualFilterSettings;
  bool m_temporalFilterSettingsHasBeenSet = false;
  bool m_bandwidthReductionFilterSettingsHasBeenSet = false;
  bool m_autoFilterSettingsHasBeenSet = false;
  bool m_noneFilterSettingsHasBeenSet = false;
  bool m_perceptualFilterSettingsHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
