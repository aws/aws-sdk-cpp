/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/BorderSettings.h>
#include <aws/quicksight/model/DecalSettings.h>
#include <aws/quicksight/model/LineChartLineStyleSettings.h>
#include <aws/quicksight/model/LineChartMarkerStyleSettings.h>

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
 * <p>The options that determine the default presentation of all series in
 * <code>ComboChartVisual</code>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ComboChartDefaultSeriesSettings">AWS
 * API Reference</a></p>
 */
class ComboChartDefaultSeriesSettings {
 public:
  AWS_QUICKSIGHT_API ComboChartDefaultSeriesSettings() = default;
  AWS_QUICKSIGHT_API ComboChartDefaultSeriesSettings(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API ComboChartDefaultSeriesSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Line styles options for all line series in the visual.</p>
   */
  inline const LineChartLineStyleSettings& GetLineStyleSettings() const { return m_lineStyleSettings; }
  inline bool LineStyleSettingsHasBeenSet() const { return m_lineStyleSettingsHasBeenSet; }
  template <typename LineStyleSettingsT = LineChartLineStyleSettings>
  void SetLineStyleSettings(LineStyleSettingsT&& value) {
    m_lineStyleSettingsHasBeenSet = true;
    m_lineStyleSettings = std::forward<LineStyleSettingsT>(value);
  }
  template <typename LineStyleSettingsT = LineChartLineStyleSettings>
  ComboChartDefaultSeriesSettings& WithLineStyleSettings(LineStyleSettingsT&& value) {
    SetLineStyleSettings(std::forward<LineStyleSettingsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Marker styles options for all line series in the visual.</p>
   */
  inline const LineChartMarkerStyleSettings& GetMarkerStyleSettings() const { return m_markerStyleSettings; }
  inline bool MarkerStyleSettingsHasBeenSet() const { return m_markerStyleSettingsHasBeenSet; }
  template <typename MarkerStyleSettingsT = LineChartMarkerStyleSettings>
  void SetMarkerStyleSettings(MarkerStyleSettingsT&& value) {
    m_markerStyleSettingsHasBeenSet = true;
    m_markerStyleSettings = std::forward<MarkerStyleSettingsT>(value);
  }
  template <typename MarkerStyleSettingsT = LineChartMarkerStyleSettings>
  ComboChartDefaultSeriesSettings& WithMarkerStyleSettings(MarkerStyleSettingsT&& value) {
    SetMarkerStyleSettings(std::forward<MarkerStyleSettingsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Decal settings for all series in the visual.</p>
   */
  inline const DecalSettings& GetDecalSettings() const { return m_decalSettings; }
  inline bool DecalSettingsHasBeenSet() const { return m_decalSettingsHasBeenSet; }
  template <typename DecalSettingsT = DecalSettings>
  void SetDecalSettings(DecalSettingsT&& value) {
    m_decalSettingsHasBeenSet = true;
    m_decalSettings = std::forward<DecalSettingsT>(value);
  }
  template <typename DecalSettingsT = DecalSettings>
  ComboChartDefaultSeriesSettings& WithDecalSettings(DecalSettingsT&& value) {
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
  ComboChartDefaultSeriesSettings& WithBorderSettings(BorderSettingsT&& value) {
    SetBorderSettings(std::forward<BorderSettingsT>(value));
    return *this;
  }
  ///@}
 private:
  LineChartLineStyleSettings m_lineStyleSettings;

  LineChartMarkerStyleSettings m_markerStyleSettings;

  DecalSettings m_decalSettings;

  BorderSettings m_borderSettings;
  bool m_lineStyleSettingsHasBeenSet = false;
  bool m_markerStyleSettingsHasBeenSet = false;
  bool m_decalSettingsHasBeenSet = false;
  bool m_borderSettingsHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
