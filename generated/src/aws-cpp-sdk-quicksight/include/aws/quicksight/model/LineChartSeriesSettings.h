/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/LineChartLineStyleSettings.h>
#include <aws/quicksight/model/LineChartMarkerStyleSettings.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The options that determine the presentation of a line series in the
   * visual</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/LineChartSeriesSettings">AWS
   * API Reference</a></p>
   */
  class LineChartSeriesSettings
  {
  public:
    AWS_QUICKSIGHT_API LineChartSeriesSettings() = default;
    AWS_QUICKSIGHT_API LineChartSeriesSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API LineChartSeriesSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Line styles options for a line series in <code>LineChartVisual</code>.</p>
     */
    inline const LineChartLineStyleSettings& GetLineStyleSettings() const { return m_lineStyleSettings; }
    inline bool LineStyleSettingsHasBeenSet() const { return m_lineStyleSettingsHasBeenSet; }
    template<typename LineStyleSettingsT = LineChartLineStyleSettings>
    void SetLineStyleSettings(LineStyleSettingsT&& value) { m_lineStyleSettingsHasBeenSet = true; m_lineStyleSettings = std::forward<LineStyleSettingsT>(value); }
    template<typename LineStyleSettingsT = LineChartLineStyleSettings>
    LineChartSeriesSettings& WithLineStyleSettings(LineStyleSettingsT&& value) { SetLineStyleSettings(std::forward<LineStyleSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Marker styles options for a line series in <code>LineChartVisual</code>.</p>
     */
    inline const LineChartMarkerStyleSettings& GetMarkerStyleSettings() const { return m_markerStyleSettings; }
    inline bool MarkerStyleSettingsHasBeenSet() const { return m_markerStyleSettingsHasBeenSet; }
    template<typename MarkerStyleSettingsT = LineChartMarkerStyleSettings>
    void SetMarkerStyleSettings(MarkerStyleSettingsT&& value) { m_markerStyleSettingsHasBeenSet = true; m_markerStyleSettings = std::forward<MarkerStyleSettingsT>(value); }
    template<typename MarkerStyleSettingsT = LineChartMarkerStyleSettings>
    LineChartSeriesSettings& WithMarkerStyleSettings(MarkerStyleSettingsT&& value) { SetMarkerStyleSettings(std::forward<MarkerStyleSettingsT>(value)); return *this;}
    ///@}
  private:

    LineChartLineStyleSettings m_lineStyleSettings;
    bool m_lineStyleSettingsHasBeenSet = false;

    LineChartMarkerStyleSettings m_markerStyleSettings;
    bool m_markerStyleSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
