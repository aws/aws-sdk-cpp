/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/AutoFilterSettings.h>
#include <aws/medialive/model/NoneFilterSettings.h>
#include <aws/medialive/model/PerceptualFilterSettings.h>

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
 * Av1 Filter Settings<p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/Av1FilterSettings">AWS
 * API Reference</a></p>
 */
class Av1FilterSettings {
 public:
  AWS_MEDIALIVE_API Av1FilterSettings() = default;
  AWS_MEDIALIVE_API Av1FilterSettings(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIALIVE_API Av1FilterSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const AutoFilterSettings& GetAutoFilterSettings() const { return m_autoFilterSettings; }
  inline bool AutoFilterSettingsHasBeenSet() const { return m_autoFilterSettingsHasBeenSet; }
  template <typename AutoFilterSettingsT = AutoFilterSettings>
  void SetAutoFilterSettings(AutoFilterSettingsT&& value) {
    m_autoFilterSettingsHasBeenSet = true;
    m_autoFilterSettings = std::forward<AutoFilterSettingsT>(value);
  }
  template <typename AutoFilterSettingsT = AutoFilterSettings>
  Av1FilterSettings& WithAutoFilterSettings(AutoFilterSettingsT&& value) {
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
  Av1FilterSettings& WithNoneFilterSettings(NoneFilterSettingsT&& value) {
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
  Av1FilterSettings& WithPerceptualFilterSettings(PerceptualFilterSettingsT&& value) {
    SetPerceptualFilterSettings(std::forward<PerceptualFilterSettingsT>(value));
    return *this;
  }
  ///@}
 private:
  AutoFilterSettings m_autoFilterSettings;

  NoneFilterSettings m_noneFilterSettings;

  PerceptualFilterSettings m_perceptualFilterSettings;
  bool m_autoFilterSettingsHasBeenSet = false;
  bool m_noneFilterSettingsHasBeenSet = false;
  bool m_perceptualFilterSettingsHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
