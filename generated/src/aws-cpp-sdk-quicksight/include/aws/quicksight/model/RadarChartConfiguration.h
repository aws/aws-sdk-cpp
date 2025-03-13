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
    AWS_QUICKSIGHT_API RadarChartConfiguration() = default;
    AWS_QUICKSIGHT_API RadarChartConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API RadarChartConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The field well configuration of a <code>RadarChartVisual</code>.</p>
     */
    inline const RadarChartFieldWells& GetFieldWells() const { return m_fieldWells; }
    inline bool FieldWellsHasBeenSet() const { return m_fieldWellsHasBeenSet; }
    template<typename FieldWellsT = RadarChartFieldWells>
    void SetFieldWells(FieldWellsT&& value) { m_fieldWellsHasBeenSet = true; m_fieldWells = std::forward<FieldWellsT>(value); }
    template<typename FieldWellsT = RadarChartFieldWells>
    RadarChartConfiguration& WithFieldWells(FieldWellsT&& value) { SetFieldWells(std::forward<FieldWellsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sort configuration of a <code>RadarChartVisual</code>.</p>
     */
    inline const RadarChartSortConfiguration& GetSortConfiguration() const { return m_sortConfiguration; }
    inline bool SortConfigurationHasBeenSet() const { return m_sortConfigurationHasBeenSet; }
    template<typename SortConfigurationT = RadarChartSortConfiguration>
    void SetSortConfiguration(SortConfigurationT&& value) { m_sortConfigurationHasBeenSet = true; m_sortConfiguration = std::forward<SortConfigurationT>(value); }
    template<typename SortConfigurationT = RadarChartSortConfiguration>
    RadarChartConfiguration& WithSortConfiguration(SortConfigurationT&& value) { SetSortConfiguration(std::forward<SortConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The shape of the radar chart.</p>
     */
    inline RadarChartShape GetShape() const { return m_shape; }
    inline bool ShapeHasBeenSet() const { return m_shapeHasBeenSet; }
    inline void SetShape(RadarChartShape value) { m_shapeHasBeenSet = true; m_shape = value; }
    inline RadarChartConfiguration& WithShape(RadarChartShape value) { SetShape(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The base sreies settings of a radar chart.</p>
     */
    inline const RadarChartSeriesSettings& GetBaseSeriesSettings() const { return m_baseSeriesSettings; }
    inline bool BaseSeriesSettingsHasBeenSet() const { return m_baseSeriesSettingsHasBeenSet; }
    template<typename BaseSeriesSettingsT = RadarChartSeriesSettings>
    void SetBaseSeriesSettings(BaseSeriesSettingsT&& value) { m_baseSeriesSettingsHasBeenSet = true; m_baseSeriesSettings = std::forward<BaseSeriesSettingsT>(value); }
    template<typename BaseSeriesSettingsT = RadarChartSeriesSettings>
    RadarChartConfiguration& WithBaseSeriesSettings(BaseSeriesSettingsT&& value) { SetBaseSeriesSettings(std::forward<BaseSeriesSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start angle of a radar chart's axis.</p>
     */
    inline double GetStartAngle() const { return m_startAngle; }
    inline bool StartAngleHasBeenSet() const { return m_startAngleHasBeenSet; }
    inline void SetStartAngle(double value) { m_startAngleHasBeenSet = true; m_startAngle = value; }
    inline RadarChartConfiguration& WithStartAngle(double value) { SetStartAngle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The palette (chart color) display setup of the visual.</p>
     */
    inline const VisualPalette& GetVisualPalette() const { return m_visualPalette; }
    inline bool VisualPaletteHasBeenSet() const { return m_visualPaletteHasBeenSet; }
    template<typename VisualPaletteT = VisualPalette>
    void SetVisualPalette(VisualPaletteT&& value) { m_visualPaletteHasBeenSet = true; m_visualPalette = std::forward<VisualPaletteT>(value); }
    template<typename VisualPaletteT = VisualPalette>
    RadarChartConfiguration& WithVisualPalette(VisualPaletteT&& value) { SetVisualPalette(std::forward<VisualPaletteT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines the visibility of the colors of alternatign bands in a radar
     * chart.</p>
     */
    inline Visibility GetAlternateBandColorsVisibility() const { return m_alternateBandColorsVisibility; }
    inline bool AlternateBandColorsVisibilityHasBeenSet() const { return m_alternateBandColorsVisibilityHasBeenSet; }
    inline void SetAlternateBandColorsVisibility(Visibility value) { m_alternateBandColorsVisibilityHasBeenSet = true; m_alternateBandColorsVisibility = value; }
    inline RadarChartConfiguration& WithAlternateBandColorsVisibility(Visibility value) { SetAlternateBandColorsVisibility(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The color of the even-numbered alternate bands of a radar chart.</p>
     */
    inline const Aws::String& GetAlternateBandEvenColor() const { return m_alternateBandEvenColor; }
    inline bool AlternateBandEvenColorHasBeenSet() const { return m_alternateBandEvenColorHasBeenSet; }
    template<typename AlternateBandEvenColorT = Aws::String>
    void SetAlternateBandEvenColor(AlternateBandEvenColorT&& value) { m_alternateBandEvenColorHasBeenSet = true; m_alternateBandEvenColor = std::forward<AlternateBandEvenColorT>(value); }
    template<typename AlternateBandEvenColorT = Aws::String>
    RadarChartConfiguration& WithAlternateBandEvenColor(AlternateBandEvenColorT&& value) { SetAlternateBandEvenColor(std::forward<AlternateBandEvenColorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The color of the odd-numbered alternate bands of a radar chart.</p>
     */
    inline const Aws::String& GetAlternateBandOddColor() const { return m_alternateBandOddColor; }
    inline bool AlternateBandOddColorHasBeenSet() const { return m_alternateBandOddColorHasBeenSet; }
    template<typename AlternateBandOddColorT = Aws::String>
    void SetAlternateBandOddColor(AlternateBandOddColorT&& value) { m_alternateBandOddColorHasBeenSet = true; m_alternateBandOddColor = std::forward<AlternateBandOddColorT>(value); }
    template<typename AlternateBandOddColorT = Aws::String>
    RadarChartConfiguration& WithAlternateBandOddColor(AlternateBandOddColorT&& value) { SetAlternateBandOddColor(std::forward<AlternateBandOddColorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The category axis of a radar chart.</p>
     */
    inline const AxisDisplayOptions& GetCategoryAxis() const { return m_categoryAxis; }
    inline bool CategoryAxisHasBeenSet() const { return m_categoryAxisHasBeenSet; }
    template<typename CategoryAxisT = AxisDisplayOptions>
    void SetCategoryAxis(CategoryAxisT&& value) { m_categoryAxisHasBeenSet = true; m_categoryAxis = std::forward<CategoryAxisT>(value); }
    template<typename CategoryAxisT = AxisDisplayOptions>
    RadarChartConfiguration& WithCategoryAxis(CategoryAxisT&& value) { SetCategoryAxis(std::forward<CategoryAxisT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The category label options of a radar chart.</p>
     */
    inline const ChartAxisLabelOptions& GetCategoryLabelOptions() const { return m_categoryLabelOptions; }
    inline bool CategoryLabelOptionsHasBeenSet() const { return m_categoryLabelOptionsHasBeenSet; }
    template<typename CategoryLabelOptionsT = ChartAxisLabelOptions>
    void SetCategoryLabelOptions(CategoryLabelOptionsT&& value) { m_categoryLabelOptionsHasBeenSet = true; m_categoryLabelOptions = std::forward<CategoryLabelOptionsT>(value); }
    template<typename CategoryLabelOptionsT = ChartAxisLabelOptions>
    RadarChartConfiguration& WithCategoryLabelOptions(CategoryLabelOptionsT&& value) { SetCategoryLabelOptions(std::forward<CategoryLabelOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The color axis of a radar chart.</p>
     */
    inline const AxisDisplayOptions& GetColorAxis() const { return m_colorAxis; }
    inline bool ColorAxisHasBeenSet() const { return m_colorAxisHasBeenSet; }
    template<typename ColorAxisT = AxisDisplayOptions>
    void SetColorAxis(ColorAxisT&& value) { m_colorAxisHasBeenSet = true; m_colorAxis = std::forward<ColorAxisT>(value); }
    template<typename ColorAxisT = AxisDisplayOptions>
    RadarChartConfiguration& WithColorAxis(ColorAxisT&& value) { SetColorAxis(std::forward<ColorAxisT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The color label options of a radar chart.</p>
     */
    inline const ChartAxisLabelOptions& GetColorLabelOptions() const { return m_colorLabelOptions; }
    inline bool ColorLabelOptionsHasBeenSet() const { return m_colorLabelOptionsHasBeenSet; }
    template<typename ColorLabelOptionsT = ChartAxisLabelOptions>
    void SetColorLabelOptions(ColorLabelOptionsT&& value) { m_colorLabelOptionsHasBeenSet = true; m_colorLabelOptions = std::forward<ColorLabelOptionsT>(value); }
    template<typename ColorLabelOptionsT = ChartAxisLabelOptions>
    RadarChartConfiguration& WithColorLabelOptions(ColorLabelOptionsT&& value) { SetColorLabelOptions(std::forward<ColorLabelOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The legend display setup of the visual.</p>
     */
    inline const LegendOptions& GetLegend() const { return m_legend; }
    inline bool LegendHasBeenSet() const { return m_legendHasBeenSet; }
    template<typename LegendT = LegendOptions>
    void SetLegend(LegendT&& value) { m_legendHasBeenSet = true; m_legend = std::forward<LegendT>(value); }
    template<typename LegendT = LegendOptions>
    RadarChartConfiguration& WithLegend(LegendT&& value) { SetLegend(std::forward<LegendT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The axis behavior options of a radar chart.</p>
     */
    inline RadarChartAxesRangeScale GetAxesRangeScale() const { return m_axesRangeScale; }
    inline bool AxesRangeScaleHasBeenSet() const { return m_axesRangeScaleHasBeenSet; }
    inline void SetAxesRangeScale(RadarChartAxesRangeScale value) { m_axesRangeScaleHasBeenSet = true; m_axesRangeScale = value; }
    inline RadarChartConfiguration& WithAxesRangeScale(RadarChartAxesRangeScale value) { SetAxesRangeScale(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The general visual interactions setup for a visual.</p>
     */
    inline const VisualInteractionOptions& GetInteractions() const { return m_interactions; }
    inline bool InteractionsHasBeenSet() const { return m_interactionsHasBeenSet; }
    template<typename InteractionsT = VisualInteractionOptions>
    void SetInteractions(InteractionsT&& value) { m_interactionsHasBeenSet = true; m_interactions = std::forward<InteractionsT>(value); }
    template<typename InteractionsT = VisualInteractionOptions>
    RadarChartConfiguration& WithInteractions(InteractionsT&& value) { SetInteractions(std::forward<InteractionsT>(value)); return *this;}
    ///@}
  private:

    RadarChartFieldWells m_fieldWells;
    bool m_fieldWellsHasBeenSet = false;

    RadarChartSortConfiguration m_sortConfiguration;
    bool m_sortConfigurationHasBeenSet = false;

    RadarChartShape m_shape{RadarChartShape::NOT_SET};
    bool m_shapeHasBeenSet = false;

    RadarChartSeriesSettings m_baseSeriesSettings;
    bool m_baseSeriesSettingsHasBeenSet = false;

    double m_startAngle{0.0};
    bool m_startAngleHasBeenSet = false;

    VisualPalette m_visualPalette;
    bool m_visualPaletteHasBeenSet = false;

    Visibility m_alternateBandColorsVisibility{Visibility::NOT_SET};
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

    RadarChartAxesRangeScale m_axesRangeScale{RadarChartAxesRangeScale::NOT_SET};
    bool m_axesRangeScaleHasBeenSet = false;

    VisualInteractionOptions m_interactions;
    bool m_interactionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
