/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/BorderSettings.h>
#include <aws/quicksight/model/DecalSettings.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace QuickSight {
namespace Model {

/**
 * <p>The options that determine the default presentation of all bar series in
 * <code>BarChartVisual</code>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/BarChartDefaultSeriesSettings">AWS
 * API Reference</a></p>
 */
class BarChartDefaultSeriesSettings {
 public:
  AWS_QUICKSIGHT_API BarChartDefaultSeriesSettings() = default;
  AWS_QUICKSIGHT_API BarChartDefaultSeriesSettings(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API BarChartDefaultSeriesSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Decal settings for all bar series in the visual.</p>
   */
  inline const DecalSettings& GetDecalSettings() const { return m_decalSettings; }
  inline bool DecalSettingsHasBeenSet() const { return m_decalSettingsHasBeenSet; }
  template <typename DecalSettingsT = DecalSettings>
  void SetDecalSettings(DecalSettingsT&& value) {
    m_decalSettingsHasBeenSet = true;
    m_decalSettings = std::forward<DecalSettingsT>(value);
  }
  template <typename DecalSettingsT = DecalSettings>
  BarChartDefaultSeriesSettings& WithDecalSettings(DecalSettingsT&& value) {
    SetDecalSettings(std::forward<DecalSettingsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Border settings for all bar series in the visual.</p>
   */
  inline const BorderSettings& GetBorderSettings() const { return m_borderSettings; }
  inline bool BorderSettingsHasBeenSet() const { return m_borderSettingsHasBeenSet; }
  template <typename BorderSettingsT = BorderSettings>
  void SetBorderSettings(BorderSettingsT&& value) {
    m_borderSettingsHasBeenSet = true;
    m_borderSettings = std::forward<BorderSettingsT>(value);
  }
  template <typename BorderSettingsT = BorderSettings>
  BarChartDefaultSeriesSettings& WithBorderSettings(BorderSettingsT&& value) {
    SetBorderSettings(std::forward<BorderSettingsT>(value));
    return *this;
  }
  ///@}
 private:
  DecalSettings m_decalSettings;

  BorderSettings m_borderSettings;
  bool m_decalSettingsHasBeenSet = false;
  bool m_borderSettingsHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
