/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/RadarChartFieldWells.h>
#include <aws/quicksight/model/RadarChartSortConfiguration.h>
#include <aws/quicksight/model/RadarChartShape.h>
#include <aws/quicksight/model/RadarChartSeriesSettings.h>
#include <aws/quicksight/model/VisualPalette.h>
#include <aws/quicksight/model/Visibility.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/AxisDisplayOptions.h>
#include <aws/quicksight/model/ChartAxisLabelOptions.h>
#include <aws/quicksight/model/LegendOptions.h>
#include <aws/quicksight/model/RadarChartAxesRangeScale.h>
#include <aws/quicksight/model/VisualInteractionOptions.h>
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
   * <p>The configuration of a <code>RadarChartVisual</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/RadarChartConfiguration">AWS
   * API Reference</a></p>
   */
  class RadarChartConfiguration
  {
  public:
    AWS_QUICKSIGHT_API RadarChartConfiguration();
    AWS_QUICKSIGHT_API RadarChartConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API RadarChartConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The field well configuration of a <code>RadarChartVisual</code>.</p>
     */
    inline const RadarChartFieldWells& GetFieldWells() const{ return m_fieldWells; }
    inline bool FieldWellsHasBeenSet() const { return m_fieldWellsHasBeenSet; }
    inline void SetFieldWells(const RadarChartFieldWells& value) { m_fieldWellsHasBeenSet = true; m_fieldWells = value; }
    inline void SetFieldWells(RadarChartFieldWells&& value) { m_fieldWellsHasBeenSet = true; m_fieldWells = std::move(value); }
    inline RadarChartConfiguration& WithFieldWells(const RadarChartFieldWells& value) { SetFieldWells(value); return *this;}
    inline RadarChartConfiguration& WithFieldWells(RadarChartFieldWells&& value) { SetFieldWells(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sort configuration of a <code>RadarChartVisual</code>.</p>
     */
    inline const RadarChartSortConfiguration& GetSortConfiguration() const{ return m_sortConfiguration; }
    inline bool SortConfigurationHasBeenSet() const { return m_sortConfigurationHasBeenSet; }
    inline void SetSortConfiguration(const RadarChartSortConfiguration& value) { m_sortConfigurationHasBeenSet = true; m_sortConfiguration = value; }
    inline void SetSortConfiguration(RadarChartSortConfiguration&& value) { m_sortConfigurationHasBeenSet = true; m_sortConfiguration = std::move(value); }
    inline RadarChartConfiguration& WithSortConfiguration(const RadarChartSortConfiguration& value) { SetSortConfiguration(value); return *this;}
    inline RadarChartConfiguration& WithSortConfiguration(RadarChartSortConfiguration&& value) { SetSortConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The shape of the radar chart.</p>
     */
    inline const RadarChartShape& GetShape() const{ return m_shape; }
    inline bool ShapeHasBeenSet() const { return m_shapeHasBeenSet; }
    inline void SetShape(const RadarChartShape& value) { m_shapeHasBeenSet = true; m_shape = value; }
    inline void SetShape(RadarChartShape&& value) { m_shapeHasBeenSet = true; m_shape = std::move(value); }
    inline RadarChartConfiguration& WithShape(const RadarChartShape& value) { SetShape(value); return *this;}
    inline RadarChartConfiguration& WithShape(RadarChartShape&& value) { SetShape(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The base sreies settings of a radar chart.</p>
     */
    inline const RadarChartSeriesSettings& GetBaseSeriesSettings() const{ return m_baseSeriesSettings; }
    inline bool BaseSeriesSettingsHasBeenSet() const { return m_baseSeriesSettingsHasBeenSet; }
    inline void SetBaseSeriesSettings(const RadarChartSeriesSettings& value) { m_baseSeriesSettingsHasBeenSet = true; m_baseSeriesSettings = value; }
    inline void SetBaseSeriesSettings(RadarChartSeriesSettings&& value) { m_baseSeriesSettingsHasBeenSet = true; m_baseSeriesSettings = std::move(value); }
    inline RadarChartConfiguration& WithBaseSeriesSettings(const RadarChartSeriesSettings& value) { SetBaseSeriesSettings(value); return *this;}
    inline RadarChartConfiguration& WithBaseSeriesSettings(RadarChartSeriesSettings&& value) { SetBaseSeriesSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start angle of a radar chart's axis.</p>
     */
    inline double GetStartAngle() const{ return m_startAngle; }
    inline bool StartAngleHasBeenSet() const { return m_startAngleHasBeenSet; }
    inline void SetStartAngle(double value) { m_startAngleHasBeenSet = true; m_startAngle = value; }
    inline RadarChartConfiguration& WithStartAngle(double value) { SetStartAngle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The palette (chart color) display setup of the visual.</p>
     */
    inline const VisualPalette& GetVisualPalette() const{ return m_visualPalette; }
    inline bool VisualPaletteHasBeenSet() const { return m_visualPaletteHasBeenSet; }
    inline void SetVisualPalette(const VisualPalette& value) { m_visualPaletteHasBeenSet = true; m_visualPalette = value; }
    inline void SetVisualPalette(VisualPalette&& value) { m_visualPaletteHasBeenSet = true; m_visualPalette = std::move(value); }
    inline RadarChartConfiguration& WithVisualPalette(const VisualPalette& value) { SetVisualPalette(value); return *this;}
    inline RadarChartConfiguration& WithVisualPalette(VisualPalette&& value) { SetVisualPalette(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines the visibility of the colors of alternatign bands in a radar
     * chart.</p>
     */
    inline const Visibility& GetAlternateBandColorsVisibility() const{ return m_alternateBandColorsVisibility; }
    inline bool AlternateBandColorsVisibilityHasBeenSet() const { return m_alternateBandColorsVisibilityHasBeenSet; }
    inline void SetAlternateBandColorsVisibility(const Visibility& value) { m_alternateBandColorsVisibilityHasBeenSet = true; m_alternateBandColorsVisibility = value; }
    inline void SetAlternateBandColorsVisibility(Visibility&& value) { m_alternateBandColorsVisibilityHasBeenSet = true; m_alternateBandColorsVisibility = std::move(value); }
    inline RadarChartConfiguration& WithAlternateBandColorsVisibility(const Visibility& value) { SetAlternateBandColorsVisibility(value); return *this;}
    inline RadarChartConfiguration& WithAlternateBandColorsVisibility(Visibility&& value) { SetAlternateBandColorsVisibility(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The color of the even-numbered alternate bands of a radar chart.</p>
     */
    inline const Aws::String& GetAlternateBandEvenColor() const{ return m_alternateBandEvenColor; }
    inline bool AlternateBandEvenColorHasBeenSet() const { return m_alternateBandEvenColorHasBeenSet; }
    inline void SetAlternateBandEvenColor(const Aws::String& value) { m_alternateBandEvenColorHasBeenSet = true; m_alternateBandEvenColor = value; }
    inline void SetAlternateBandEvenColor(Aws::String&& value) { m_alternateBandEvenColorHasBeenSet = true; m_alternateBandEvenColor = std::move(value); }
    inline void SetAlternateBandEvenColor(const char* value) { m_alternateBandEvenColorHasBeenSet = true; m_alternateBandEvenColor.assign(value); }
    inline RadarChartConfiguration& WithAlternateBandEvenColor(const Aws::String& value) { SetAlternateBandEvenColor(value); return *this;}
    inline RadarChartConfiguration& WithAlternateBandEvenColor(Aws::String&& value) { SetAlternateBandEvenColor(std::move(value)); return *this;}
    inline RadarChartConfiguration& WithAlternateBandEvenColor(const char* value) { SetAlternateBandEvenColor(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The color of the odd-numbered alternate bands of a radar chart.</p>
     */
    inline const Aws::String& GetAlternateBandOddColor() const{ return m_alternateBandOddColor; }
    inline bool AlternateBandOddColorHasBeenSet() const { return m_alternateBandOddColorHasBeenSet; }
    inline void SetAlternateBandOddColor(const Aws::String& value) { m_alternateBandOddColorHasBeenSet = true; m_alternateBandOddColor = value; }
    inline void SetAlternateBandOddColor(Aws::String&& value) { m_alternateBandOddColorHasBeenSet = true; m_alternateBandOddColor = std::move(value); }
    inline void SetAlternateBandOddColor(const char* value) { m_alternateBandOddColorHasBeenSet = true; m_alternateBandOddColor.assign(value); }
    inline RadarChartConfiguration& WithAlternateBandOddColor(const Aws::String& value) { SetAlternateBandOddColor(value); return *this;}
    inline RadarChartConfiguration& WithAlternateBandOddColor(Aws::String&& value) { SetAlternateBandOddColor(std::move(value)); return *this;}
    inline RadarChartConfiguration& WithAlternateBandOddColor(const char* value) { SetAlternateBandOddColor(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The category axis of a radar chart.</p>
     */
    inline const AxisDisplayOptions& GetCategoryAxis() const{ return m_categoryAxis; }
    inline bool CategoryAxisHasBeenSet() const { return m_categoryAxisHasBeenSet; }
    inline void SetCategoryAxis(const AxisDisplayOptions& value) { m_categoryAxisHasBeenSet = true; m_categoryAxis = value; }
    inline void SetCategoryAxis(AxisDisplayOptions&& value) { m_categoryAxisHasBeenSet = true; m_categoryAxis = std::move(value); }
    inline RadarChartConfiguration& WithCategoryAxis(const AxisDisplayOptions& value) { SetCategoryAxis(value); return *this;}
    inline RadarChartConfiguration& WithCategoryAxis(AxisDisplayOptions&& value) { SetCategoryAxis(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The category label options of a radar chart.</p>
     */
    inline const ChartAxisLabelOptions& GetCategoryLabelOptions() const{ return m_categoryLabelOptions; }
    inline bool CategoryLabelOptionsHasBeenSet() const { return m_categoryLabelOptionsHasBeenSet; }
    inline void SetCategoryLabelOptions(const ChartAxisLabelOptions& value) { m_categoryLabelOptionsHasBeenSet = true; m_categoryLabelOptions = value; }
    inline void SetCategoryLabelOptions(ChartAxisLabelOptions&& value) { m_categoryLabelOptionsHasBeenSet = true; m_categoryLabelOptions = std::move(value); }
    inline RadarChartConfiguration& WithCategoryLabelOptions(const ChartAxisLabelOptions& value) { SetCategoryLabelOptions(value); return *this;}
    inline RadarChartConfiguration& WithCategoryLabelOptions(ChartAxisLabelOptions&& value) { SetCategoryLabelOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The color axis of a radar chart.</p>
     */
    inline const AxisDisplayOptions& GetColorAxis() const{ return m_colorAxis; }
    inline bool ColorAxisHasBeenSet() const { return m_colorAxisHasBeenSet; }
    inline void SetColorAxis(const AxisDisplayOptions& value) { m_colorAxisHasBeenSet = true; m_colorAxis = value; }
    inline void SetColorAxis(AxisDisplayOptions&& value) { m_colorAxisHasBeenSet = true; m_colorAxis = std::move(value); }
    inline RadarChartConfiguration& WithColorAxis(const AxisDisplayOptions& value) { SetColorAxis(value); return *this;}
    inline RadarChartConfiguration& WithColorAxis(AxisDisplayOptions&& value) { SetColorAxis(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The color label options of a radar chart.</p>
     */
    inline const ChartAxisLabelOptions& GetColorLabelOptions() const{ return m_colorLabelOptions; }
    inline bool ColorLabelOptionsHasBeenSet() const { return m_colorLabelOptionsHasBeenSet; }
    inline void SetColorLabelOptions(const ChartAxisLabelOptions& value) { m_colorLabelOptionsHasBeenSet = true; m_colorLabelOptions = value; }
    inline void SetColorLabelOptions(ChartAxisLabelOptions&& value) { m_colorLabelOptionsHasBeenSet = true; m_colorLabelOptions = std::move(value); }
    inline RadarChartConfiguration& WithColorLabelOptions(const ChartAxisLabelOptions& value) { SetColorLabelOptions(value); return *this;}
    inline RadarChartConfiguration& WithColorLabelOptions(ChartAxisLabelOptions&& value) { SetColorLabelOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The legend display setup of the visual.</p>
     */
    inline const LegendOptions& GetLegend() const{ return m_legend; }
    inline bool LegendHasBeenSet() const { return m_legendHasBeenSet; }
    inline void SetLegend(const LegendOptions& value) { m_legendHasBeenSet = true; m_legend = value; }
    inline void SetLegend(LegendOptions&& value) { m_legendHasBeenSet = true; m_legend = std::move(value); }
    inline RadarChartConfiguration& WithLegend(const LegendOptions& value) { SetLegend(value); return *this;}
    inline RadarChartConfiguration& WithLegend(LegendOptions&& value) { SetLegend(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The axis behavior options of a radar chart.</p>
     */
    inline const RadarChartAxesRangeScale& GetAxesRangeScale() const{ return m_axesRangeScale; }
    inline bool AxesRangeScaleHasBeenSet() const { return m_axesRangeScaleHasBeenSet; }
    inline void SetAxesRangeScale(const RadarChartAxesRangeScale& value) { m_axesRangeScaleHasBeenSet = true; m_axesRangeScale = value; }
    inline void SetAxesRangeScale(RadarChartAxesRangeScale&& value) { m_axesRangeScaleHasBeenSet = true; m_axesRangeScale = std::move(value); }
    inline RadarChartConfiguration& WithAxesRangeScale(const RadarChartAxesRangeScale& value) { SetAxesRangeScale(value); return *this;}
    inline RadarChartConfiguration& WithAxesRangeScale(RadarChartAxesRangeScale&& value) { SetAxesRangeScale(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The general visual interactions setup for a visual.</p>
     */
    inline const VisualInteractionOptions& GetInteractions() const{ return m_interactions; }
    inline bool InteractionsHasBeenSet() const { return m_interactionsHasBeenSet; }
    inline void SetInteractions(const VisualInteractionOptions& value) { m_interactionsHasBeenSet = true; m_interactions = value; }
    inline void SetInteractions(VisualInteractionOptions&& value) { m_interactionsHasBeenSet = true; m_interactions = std::move(value); }
    inline RadarChartConfiguration& WithInteractions(const VisualInteractionOptions& value) { SetInteractions(value); return *this;}
    inline RadarChartConfiguration& WithInteractions(VisualInteractionOptions&& value) { SetInteractions(std::move(value)); return *this;}
    ///@}
  private:

    RadarChartFieldWells m_fieldWells;
    bool m_fieldWellsHasBeenSet = false;

    RadarChartSortConfiguration m_sortConfiguration;
    bool m_sortConfigurationHasBeenSet = false;

    RadarChartShape m_shape;
    bool m_shapeHasBeenSet = false;

    RadarChartSeriesSettings m_baseSeriesSettings;
    bool m_baseSeriesSettingsHasBeenSet = false;

    double m_startAngle;
    bool m_startAngleHasBeenSet = false;

    VisualPalette m_visualPalette;
    bool m_visualPaletteHasBeenSet = false;

    Visibility m_alternateBandColorsVisibility;
    bool m_alternateBandColorsVisibilityHasBeenSet = false;

    Aws::String m_alternateBandEvenColor;
    bool m_alternateBandEvenColorHasBeenSet = false;

    Aws::String m_alternateBandOddColor;
    bool m_alternateBandOddColorHasBeenSet = false;

    AxisDisplayOptions m_categoryAxis;
    bool m_categoryAxisHasBeenSet = false;

    ChartAxisLabelOptions m_categoryLabelOptions;
    bool m_categoryLabelOptionsHasBeenSet = false;

    AxisDisplayOptions m_colorAxis;
    bool m_colorAxisHasBeenSet = false;

    ChartAxisLabelOptions m_colorLabelOptions;
    bool m_colorLabelOptionsHasBeenSet = false;

    LegendOptions m_legend;
    bool m_legendHasBeenSet = false;

    RadarChartAxesRangeScale m_axesRangeScale;
    bool m_axesRangeScaleHasBeenSet = false;

    VisualInteractionOptions m_interactions;
    bool m_interactionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
