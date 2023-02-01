/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/AxisBinding.h>
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
   * <p>The options that determine the default presentation of all line series in
   * <code>LineChartVisual</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/LineChartDefaultSeriesSettings">AWS
   * API Reference</a></p>
   */
  class LineChartDefaultSeriesSettings
  {
  public:
    AWS_QUICKSIGHT_API LineChartDefaultSeriesSettings();
    AWS_QUICKSIGHT_API LineChartDefaultSeriesSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API LineChartDefaultSeriesSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The axis to which you are binding all line series to.</p>
     */
    inline const AxisBinding& GetAxisBinding() const{ return m_axisBinding; }

    /**
     * <p>The axis to which you are binding all line series to.</p>
     */
    inline bool AxisBindingHasBeenSet() const { return m_axisBindingHasBeenSet; }

    /**
     * <p>The axis to which you are binding all line series to.</p>
     */
    inline void SetAxisBinding(const AxisBinding& value) { m_axisBindingHasBeenSet = true; m_axisBinding = value; }

    /**
     * <p>The axis to which you are binding all line series to.</p>
     */
    inline void SetAxisBinding(AxisBinding&& value) { m_axisBindingHasBeenSet = true; m_axisBinding = std::move(value); }

    /**
     * <p>The axis to which you are binding all line series to.</p>
     */
    inline LineChartDefaultSeriesSettings& WithAxisBinding(const AxisBinding& value) { SetAxisBinding(value); return *this;}

    /**
     * <p>The axis to which you are binding all line series to.</p>
     */
    inline LineChartDefaultSeriesSettings& WithAxisBinding(AxisBinding&& value) { SetAxisBinding(std::move(value)); return *this;}


    /**
     * <p>Line styles options for all line series in the visual.</p>
     */
    inline const LineChartLineStyleSettings& GetLineStyleSettings() const{ return m_lineStyleSettings; }

    /**
     * <p>Line styles options for all line series in the visual.</p>
     */
    inline bool LineStyleSettingsHasBeenSet() const { return m_lineStyleSettingsHasBeenSet; }

    /**
     * <p>Line styles options for all line series in the visual.</p>
     */
    inline void SetLineStyleSettings(const LineChartLineStyleSettings& value) { m_lineStyleSettingsHasBeenSet = true; m_lineStyleSettings = value; }

    /**
     * <p>Line styles options for all line series in the visual.</p>
     */
    inline void SetLineStyleSettings(LineChartLineStyleSettings&& value) { m_lineStyleSettingsHasBeenSet = true; m_lineStyleSettings = std::move(value); }

    /**
     * <p>Line styles options for all line series in the visual.</p>
     */
    inline LineChartDefaultSeriesSettings& WithLineStyleSettings(const LineChartLineStyleSettings& value) { SetLineStyleSettings(value); return *this;}

    /**
     * <p>Line styles options for all line series in the visual.</p>
     */
    inline LineChartDefaultSeriesSettings& WithLineStyleSettings(LineChartLineStyleSettings&& value) { SetLineStyleSettings(std::move(value)); return *this;}


    /**
     * <p>Marker styles options for all line series in the visual.</p>
     */
    inline const LineChartMarkerStyleSettings& GetMarkerStyleSettings() const{ return m_markerStyleSettings; }

    /**
     * <p>Marker styles options for all line series in the visual.</p>
     */
    inline bool MarkerStyleSettingsHasBeenSet() const { return m_markerStyleSettingsHasBeenSet; }

    /**
     * <p>Marker styles options for all line series in the visual.</p>
     */
    inline void SetMarkerStyleSettings(const LineChartMarkerStyleSettings& value) { m_markerStyleSettingsHasBeenSet = true; m_markerStyleSettings = value; }

    /**
     * <p>Marker styles options for all line series in the visual.</p>
     */
    inline void SetMarkerStyleSettings(LineChartMarkerStyleSettings&& value) { m_markerStyleSettingsHasBeenSet = true; m_markerStyleSettings = std::move(value); }

    /**
     * <p>Marker styles options for all line series in the visual.</p>
     */
    inline LineChartDefaultSeriesSettings& WithMarkerStyleSettings(const LineChartMarkerStyleSettings& value) { SetMarkerStyleSettings(value); return *this;}

    /**
     * <p>Marker styles options for all line series in the visual.</p>
     */
    inline LineChartDefaultSeriesSettings& WithMarkerStyleSettings(LineChartMarkerStyleSettings&& value) { SetMarkerStyleSettings(std::move(value)); return *this;}

  private:

    AxisBinding m_axisBinding;
    bool m_axisBindingHasBeenSet = false;

    LineChartLineStyleSettings m_lineStyleSettings;
    bool m_lineStyleSettingsHasBeenSet = false;

    LineChartMarkerStyleSettings m_markerStyleSettings;
    bool m_markerStyleSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
