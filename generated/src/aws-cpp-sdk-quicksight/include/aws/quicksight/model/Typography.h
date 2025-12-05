/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/Font.h>
#include <aws/quicksight/model/FontConfiguration.h>
#include <aws/quicksight/model/VisualSubtitleFontConfiguration.h>
#include <aws/quicksight/model/VisualTitleFontConfiguration.h>

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
 * <p>Determines the typography options.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/Typography">AWS
 * API Reference</a></p>
 */
class Typography {
 public:
  AWS_QUICKSIGHT_API Typography() = default;
  AWS_QUICKSIGHT_API Typography(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Typography& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Determines the list of font families.</p>
   */
  inline const Aws::Vector<Font>& GetFontFamilies() const { return m_fontFamilies; }
  inline bool FontFamiliesHasBeenSet() const { return m_fontFamiliesHasBeenSet; }
  template <typename FontFamiliesT = Aws::Vector<Font>>
  void SetFontFamilies(FontFamiliesT&& value) {
    m_fontFamiliesHasBeenSet = true;
    m_fontFamilies = std::forward<FontFamiliesT>(value);
  }
  template <typename FontFamiliesT = Aws::Vector<Font>>
  Typography& WithFontFamilies(FontFamiliesT&& value) {
    SetFontFamilies(std::forward<FontFamiliesT>(value));
    return *this;
  }
  template <typename FontFamiliesT = Font>
  Typography& AddFontFamilies(FontFamiliesT&& value) {
    m_fontFamiliesHasBeenSet = true;
    m_fontFamilies.emplace_back(std::forward<FontFamiliesT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const FontConfiguration& GetAxisTitleFontConfiguration() const { return m_axisTitleFontConfiguration; }
  inline bool AxisTitleFontConfigurationHasBeenSet() const { return m_axisTitleFontConfigurationHasBeenSet; }
  template <typename AxisTitleFontConfigurationT = FontConfiguration>
  void SetAxisTitleFontConfiguration(AxisTitleFontConfigurationT&& value) {
    m_axisTitleFontConfigurationHasBeenSet = true;
    m_axisTitleFontConfiguration = std::forward<AxisTitleFontConfigurationT>(value);
  }
  template <typename AxisTitleFontConfigurationT = FontConfiguration>
  Typography& WithAxisTitleFontConfiguration(AxisTitleFontConfigurationT&& value) {
    SetAxisTitleFontConfiguration(std::forward<AxisTitleFontConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const FontConfiguration& GetAxisLabelFontConfiguration() const { return m_axisLabelFontConfiguration; }
  inline bool AxisLabelFontConfigurationHasBeenSet() const { return m_axisLabelFontConfigurationHasBeenSet; }
  template <typename AxisLabelFontConfigurationT = FontConfiguration>
  void SetAxisLabelFontConfiguration(AxisLabelFontConfigurationT&& value) {
    m_axisLabelFontConfigurationHasBeenSet = true;
    m_axisLabelFontConfiguration = std::forward<AxisLabelFontConfigurationT>(value);
  }
  template <typename AxisLabelFontConfigurationT = FontConfiguration>
  Typography& WithAxisLabelFontConfiguration(AxisLabelFontConfigurationT&& value) {
    SetAxisLabelFontConfiguration(std::forward<AxisLabelFontConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const FontConfiguration& GetLegendTitleFontConfiguration() const { return m_legendTitleFontConfiguration; }
  inline bool LegendTitleFontConfigurationHasBeenSet() const { return m_legendTitleFontConfigurationHasBeenSet; }
  template <typename LegendTitleFontConfigurationT = FontConfiguration>
  void SetLegendTitleFontConfiguration(LegendTitleFontConfigurationT&& value) {
    m_legendTitleFontConfigurationHasBeenSet = true;
    m_legendTitleFontConfiguration = std::forward<LegendTitleFontConfigurationT>(value);
  }
  template <typename LegendTitleFontConfigurationT = FontConfiguration>
  Typography& WithLegendTitleFontConfiguration(LegendTitleFontConfigurationT&& value) {
    SetLegendTitleFontConfiguration(std::forward<LegendTitleFontConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const FontConfiguration& GetLegendValueFontConfiguration() const { return m_legendValueFontConfiguration; }
  inline bool LegendValueFontConfigurationHasBeenSet() const { return m_legendValueFontConfigurationHasBeenSet; }
  template <typename LegendValueFontConfigurationT = FontConfiguration>
  void SetLegendValueFontConfiguration(LegendValueFontConfigurationT&& value) {
    m_legendValueFontConfigurationHasBeenSet = true;
    m_legendValueFontConfiguration = std::forward<LegendValueFontConfigurationT>(value);
  }
  template <typename LegendValueFontConfigurationT = FontConfiguration>
  Typography& WithLegendValueFontConfiguration(LegendValueFontConfigurationT&& value) {
    SetLegendValueFontConfiguration(std::forward<LegendValueFontConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const FontConfiguration& GetDataLabelFontConfiguration() const { return m_dataLabelFontConfiguration; }
  inline bool DataLabelFontConfigurationHasBeenSet() const { return m_dataLabelFontConfigurationHasBeenSet; }
  template <typename DataLabelFontConfigurationT = FontConfiguration>
  void SetDataLabelFontConfiguration(DataLabelFontConfigurationT&& value) {
    m_dataLabelFontConfigurationHasBeenSet = true;
    m_dataLabelFontConfiguration = std::forward<DataLabelFontConfigurationT>(value);
  }
  template <typename DataLabelFontConfigurationT = FontConfiguration>
  Typography& WithDataLabelFontConfiguration(DataLabelFontConfigurationT&& value) {
    SetDataLabelFontConfiguration(std::forward<DataLabelFontConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configures the display properties of the visual title.</p>
   */
  inline const VisualTitleFontConfiguration& GetVisualTitleFontConfiguration() const { return m_visualTitleFontConfiguration; }
  inline bool VisualTitleFontConfigurationHasBeenSet() const { return m_visualTitleFontConfigurationHasBeenSet; }
  template <typename VisualTitleFontConfigurationT = VisualTitleFontConfiguration>
  void SetVisualTitleFontConfiguration(VisualTitleFontConfigurationT&& value) {
    m_visualTitleFontConfigurationHasBeenSet = true;
    m_visualTitleFontConfiguration = std::forward<VisualTitleFontConfigurationT>(value);
  }
  template <typename VisualTitleFontConfigurationT = VisualTitleFontConfiguration>
  Typography& WithVisualTitleFontConfiguration(VisualTitleFontConfigurationT&& value) {
    SetVisualTitleFontConfiguration(std::forward<VisualTitleFontConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configures the display properties of the visual sub-title.</p>
   */
  inline const VisualSubtitleFontConfiguration& GetVisualSubtitleFontConfiguration() const { return m_visualSubtitleFontConfiguration; }
  inline bool VisualSubtitleFontConfigurationHasBeenSet() const { return m_visualSubtitleFontConfigurationHasBeenSet; }
  template <typename VisualSubtitleFontConfigurationT = VisualSubtitleFontConfiguration>
  void SetVisualSubtitleFontConfiguration(VisualSubtitleFontConfigurationT&& value) {
    m_visualSubtitleFontConfigurationHasBeenSet = true;
    m_visualSubtitleFontConfiguration = std::forward<VisualSubtitleFontConfigurationT>(value);
  }
  template <typename VisualSubtitleFontConfigurationT = VisualSubtitleFontConfiguration>
  Typography& WithVisualSubtitleFontConfiguration(VisualSubtitleFontConfigurationT&& value) {
    SetVisualSubtitleFontConfiguration(std::forward<VisualSubtitleFontConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Font> m_fontFamilies;

  FontConfiguration m_axisTitleFontConfiguration;

  FontConfiguration m_axisLabelFontConfiguration;

  FontConfiguration m_legendTitleFontConfiguration;

  FontConfiguration m_legendValueFontConfiguration;

  FontConfiguration m_dataLabelFontConfiguration;

  VisualTitleFontConfiguration m_visualTitleFontConfiguration;

  VisualSubtitleFontConfiguration m_visualSubtitleFontConfiguration;
  bool m_fontFamiliesHasBeenSet = false;
  bool m_axisTitleFontConfigurationHasBeenSet = false;
  bool m_axisLabelFontConfigurationHasBeenSet = false;
  bool m_legendTitleFontConfigurationHasBeenSet = false;
  bool m_legendValueFontConfigurationHasBeenSet = false;
  bool m_dataLabelFontConfigurationHasBeenSet = false;
  bool m_visualTitleFontConfigurationHasBeenSet = false;
  bool m_visualSubtitleFontConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
