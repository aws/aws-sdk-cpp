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
 * <p>Options that determine the presentation of a bar series in the
 * visual.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/BarChartSeriesSettings">AWS
 * API Reference</a></p>
 */
class BarChartSeriesSettings {
 public:
  AWS_QUICKSIGHT_API BarChartSeriesSettings() = default;
  AWS_QUICKSIGHT_API BarChartSeriesSettings(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API BarChartSeriesSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Decal settings for the bar series.</p>
   */
  inline const DecalSettings& GetDecalSettings() const { return m_decalSettings; }
  inline bool DecalSettingsHasBeenSet() const { return m_decalSettingsHasBeenSet; }
  template <typename DecalSettingsT = DecalSettings>
  void SetDecalSettings(DecalSettingsT&& value) {
    m_decalSettingsHasBeenSet = true;
    m_decalSettings = std::forward<DecalSettingsT>(value);
  }
  template <typename DecalSettingsT = DecalSettings>
  BarChartSeriesSettings& WithDecalSettings(DecalSettingsT&& value) {
    SetDecalSettings(std::forward<DecalSettingsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Border settings for the bar series.</p>
   */
  inline const BorderSettings& GetBorderSettings() const { return m_borderSettings; }
  inline bool BorderSettingsHasBeenSet() const { return m_borderSettingsHasBeenSet; }
  template <typename BorderSettingsT = BorderSettings>
  void SetBorderSettings(BorderSettingsT&& value) {
    m_borderSettingsHasBeenSet = true;
    m_borderSettings = std::forward<BorderSettingsT>(value);
  }
  template <typename BorderSettingsT = BorderSettings>
  BarChartSeriesSettings& WithBorderSettings(BorderSettingsT&& value) {
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
