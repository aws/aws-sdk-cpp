/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/BarChartFieldWells.h>
#include <aws/quicksight/model/BarChartSortConfiguration.h>
#include <aws/quicksight/model/BarChartOrientation.h>
#include <aws/quicksight/model/BarsArrangement.h>
#include <aws/quicksight/model/VisualPalette.h>
#include <aws/quicksight/model/SmallMultiplesOptions.h>
#include <aws/quicksight/model/AxisDisplayOptions.h>
#include <aws/quicksight/model/ChartAxisLabelOptions.h>
#include <aws/quicksight/model/LegendOptions.h>
#include <aws/quicksight/model/DataLabelOptions.h>
#include <aws/quicksight/model/TooltipOptions.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/VisualInteractionOptions.h>
#include <aws/quicksight/model/ReferenceLine.h>
#include <aws/quicksight/model/ContributionAnalysisDefault.h>
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
   * <p>The configuration of a <code>BarChartVisual</code>.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/BarChartConfiguration">AWS
   * API Reference</a></p>
   */
  class BarChartConfiguration
  {
  public:
    AWS_QUICKSIGHT_API BarChartConfiguration() = default;
    AWS_QUICKSIGHT_API BarChartConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API BarChartConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The field wells of the visual.</p>
     */
    inline const BarChartFieldWells& GetFieldWells() const { return m_fieldWells; }
    inline bool FieldWellsHasBeenSet() const { return m_fieldWellsHasBeenSet; }
    template<typename FieldWellsT = BarChartFieldWells>
    void SetFieldWells(FieldWellsT&& value) { m_fieldWellsHasBeenSet = true; m_fieldWells = std::forward<FieldWellsT>(value); }
    template<typename FieldWellsT = BarChartFieldWells>
    BarChartConfiguration& WithFieldWells(FieldWellsT&& value) { SetFieldWells(std::forward<FieldWellsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sort configuration of a <code>BarChartVisual</code>.</p>
     */
    inline const BarChartSortConfiguration& GetSortConfiguration() const { return m_sortConfiguration; }
    inline bool SortConfigurationHasBeenSet() const { return m_sortConfigurationHasBeenSet; }
    template<typename SortConfigurationT = BarChartSortConfiguration>
    void SetSortConfiguration(SortConfigurationT&& value) { m_sortConfigurationHasBeenSet = true; m_sortConfiguration = std::forward<SortConfigurationT>(value); }
    template<typename SortConfigurationT = BarChartSortConfiguration>
    BarChartConfiguration& WithSortConfiguration(SortConfigurationT&& value) { SetSortConfiguration(std::forward<SortConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The orientation of the bars in a bar chart visual. There are two valid values
     * in this structure:</p> <ul> <li> <p> <code>HORIZONTAL</code>: Used for charts
     * that have horizontal bars. Visuals that use this value are horizontal bar
     * charts, horizontal stacked bar charts, and horizontal stacked 100% bar
     * charts.</p> </li> <li> <p> <code>VERTICAL</code>: Used for charts that have
     * vertical bars. Visuals that use this value are vertical bar charts, vertical
     * stacked bar charts, and vertical stacked 100% bar charts.</p> </li> </ul>
     */
    inline BarChartOrientation GetOrientation() const { return m_orientation; }
    inline bool OrientationHasBeenSet() const { return m_orientationHasBeenSet; }
    inline void SetOrientation(BarChartOrientation value) { m_orientationHasBeenSet = true; m_orientation = value; }
    inline BarChartConfiguration& WithOrientation(BarChartOrientation value) { SetOrientation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines the arrangement of the bars. The orientation and arrangement of
     * bars determine the type of bar that is used in the visual.</p>
     */
    inline BarsArrangement GetBarsArrangement() const { return m_barsArrangement; }
    inline bool BarsArrangementHasBeenSet() const { return m_barsArrangementHasBeenSet; }
    inline void SetBarsArrangement(BarsArrangement value) { m_barsArrangementHasBeenSet = true; m_barsArrangement = value; }
    inline BarChartConfiguration& WithBarsArrangement(BarsArrangement value) { SetBarsArrangement(value); return *this;}
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
    BarChartConfiguration& WithVisualPalette(VisualPaletteT&& value) { SetVisualPalette(std::forward<VisualPaletteT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The small multiples setup for the visual.</p>
     */
    inline const SmallMultiplesOptions& GetSmallMultiplesOptions() const { return m_smallMultiplesOptions; }
    inline bool SmallMultiplesOptionsHasBeenSet() const { return m_smallMultiplesOptionsHasBeenSet; }
    template<typename SmallMultiplesOptionsT = SmallMultiplesOptions>
    void SetSmallMultiplesOptions(SmallMultiplesOptionsT&& value) { m_smallMultiplesOptionsHasBeenSet = true; m_smallMultiplesOptions = std::forward<SmallMultiplesOptionsT>(value); }
    template<typename SmallMultiplesOptionsT = SmallMultiplesOptions>
    BarChartConfiguration& WithSmallMultiplesOptions(SmallMultiplesOptionsT&& value) { SetSmallMultiplesOptions(std::forward<SmallMultiplesOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The label display options (grid line, range, scale, axis step) for bar chart
     * category.</p>
     */
    inline const AxisDisplayOptions& GetCategoryAxis() const { return m_categoryAxis; }
    inline bool CategoryAxisHasBeenSet() const { return m_categoryAxisHasBeenSet; }
    template<typename CategoryAxisT = AxisDisplayOptions>
    void SetCategoryAxis(CategoryAxisT&& value) { m_categoryAxisHasBeenSet = true; m_categoryAxis = std::forward<CategoryAxisT>(value); }
    template<typename CategoryAxisT = AxisDisplayOptions>
    BarChartConfiguration& WithCategoryAxis(CategoryAxisT&& value) { SetCategoryAxis(std::forward<CategoryAxisT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The label options (label text, label visibility and sort icon visibility) for
     * a bar chart.</p>
     */
    inline const ChartAxisLabelOptions& GetCategoryLabelOptions() const { return m_categoryLabelOptions; }
    inline bool CategoryLabelOptionsHasBeenSet() const { return m_categoryLabelOptionsHasBeenSet; }
    template<typename CategoryLabelOptionsT = ChartAxisLabelOptions>
    void SetCategoryLabelOptions(CategoryLabelOptionsT&& value) { m_categoryLabelOptionsHasBeenSet = true; m_categoryLabelOptions = std::forward<CategoryLabelOptionsT>(value); }
    template<typename CategoryLabelOptionsT = ChartAxisLabelOptions>
    BarChartConfiguration& WithCategoryLabelOptions(CategoryLabelOptionsT&& value) { SetCategoryLabelOptions(std::forward<CategoryLabelOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The label display options (grid line, range, scale, axis step) for a bar
     * chart value.</p>
     */
    inline const AxisDisplayOptions& GetValueAxis() const { return m_valueAxis; }
    inline bool ValueAxisHasBeenSet() const { return m_valueAxisHasBeenSet; }
    template<typename ValueAxisT = AxisDisplayOptions>
    void SetValueAxis(ValueAxisT&& value) { m_valueAxisHasBeenSet = true; m_valueAxis = std::forward<ValueAxisT>(value); }
    template<typename ValueAxisT = AxisDisplayOptions>
    BarChartConfiguration& WithValueAxis(ValueAxisT&& value) { SetValueAxis(std::forward<ValueAxisT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The label options (label text, label visibility and sort icon visibility) for
     * a bar chart value.</p>
     */
    inline const ChartAxisLabelOptions& GetValueLabelOptions() const { return m_valueLabelOptions; }
    inline bool ValueLabelOptionsHasBeenSet() const { return m_valueLabelOptionsHasBeenSet; }
    template<typename ValueLabelOptionsT = ChartAxisLabelOptions>
    void SetValueLabelOptions(ValueLabelOptionsT&& value) { m_valueLabelOptionsHasBeenSet = true; m_valueLabelOptions = std::forward<ValueLabelOptionsT>(value); }
    template<typename ValueLabelOptionsT = ChartAxisLabelOptions>
    BarChartConfiguration& WithValueLabelOptions(ValueLabelOptionsT&& value) { SetValueLabelOptions(std::forward<ValueLabelOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The label options (label text, label visibility and sort icon visibility) for
     * a color that is used in a bar chart.</p>
     */
    inline const ChartAxisLabelOptions& GetColorLabelOptions() const { return m_colorLabelOptions; }
    inline bool ColorLabelOptionsHasBeenSet() const { return m_colorLabelOptionsHasBeenSet; }
    template<typename ColorLabelOptionsT = ChartAxisLabelOptions>
    void SetColorLabelOptions(ColorLabelOptionsT&& value) { m_colorLabelOptionsHasBeenSet = true; m_colorLabelOptions = std::forward<ColorLabelOptionsT>(value); }
    template<typename ColorLabelOptionsT = ChartAxisLabelOptions>
    BarChartConfiguration& WithColorLabelOptions(ColorLabelOptionsT&& value) { SetColorLabelOptions(std::forward<ColorLabelOptionsT>(value)); return *this;}
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
    BarChartConfiguration& WithLegend(LegendT&& value) { SetLegend(std::forward<LegendT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options that determine if visual data labels are displayed.</p>
     */
    inline const DataLabelOptions& GetDataLabels() const { return m_dataLabels; }
    inline bool DataLabelsHasBeenSet() const { return m_dataLabelsHasBeenSet; }
    template<typename DataLabelsT = DataLabelOptions>
    void SetDataLabels(DataLabelsT&& value) { m_dataLabelsHasBeenSet = true; m_dataLabels = std::forward<DataLabelsT>(value); }
    template<typename DataLabelsT = DataLabelOptions>
    BarChartConfiguration& WithDataLabels(DataLabelsT&& value) { SetDataLabels(std::forward<DataLabelsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tooltip display setup of the visual.</p>
     */
    inline const TooltipOptions& GetTooltip() const { return m_tooltip; }
    inline bool TooltipHasBeenSet() const { return m_tooltipHasBeenSet; }
    template<typename TooltipT = TooltipOptions>
    void SetTooltip(TooltipT&& value) { m_tooltipHasBeenSet = true; m_tooltip = std::forward<TooltipT>(value); }
    template<typename TooltipT = TooltipOptions>
    BarChartConfiguration& WithTooltip(TooltipT&& value) { SetTooltip(std::forward<TooltipT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reference line setup of the visual.</p>
     */
    inline const Aws::Vector<ReferenceLine>& GetReferenceLines() const { return m_referenceLines; }
    inline bool ReferenceLinesHasBeenSet() const { return m_referenceLinesHasBeenSet; }
    template<typename ReferenceLinesT = Aws::Vector<ReferenceLine>>
    void SetReferenceLines(ReferenceLinesT&& value) { m_referenceLinesHasBeenSet = true; m_referenceLines = std::forward<ReferenceLinesT>(value); }
    template<typename ReferenceLinesT = Aws::Vector<ReferenceLine>>
    BarChartConfiguration& WithReferenceLines(ReferenceLinesT&& value) { SetReferenceLines(std::forward<ReferenceLinesT>(value)); return *this;}
    template<typename ReferenceLinesT = ReferenceLine>
    BarChartConfiguration& AddReferenceLines(ReferenceLinesT&& value) { m_referenceLinesHasBeenSet = true; m_referenceLines.emplace_back(std::forward<ReferenceLinesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The contribution analysis (anomaly configuration) setup of the visual.</p>
     */
    inline const Aws::Vector<ContributionAnalysisDefault>& GetContributionAnalysisDefaults() const { return m_contributionAnalysisDefaults; }
    inline bool ContributionAnalysisDefaultsHasBeenSet() const { return m_contributionAnalysisDefaultsHasBeenSet; }
    template<typename ContributionAnalysisDefaultsT = Aws::Vector<ContributionAnalysisDefault>>
    void SetContributionAnalysisDefaults(ContributionAnalysisDefaultsT&& value) { m_contributionAnalysisDefaultsHasBeenSet = true; m_contributionAnalysisDefaults = std::forward<ContributionAnalysisDefaultsT>(value); }
    template<typename ContributionAnalysisDefaultsT = Aws::Vector<ContributionAnalysisDefault>>
    BarChartConfiguration& WithContributionAnalysisDefaults(ContributionAnalysisDefaultsT&& value) { SetContributionAnalysisDefaults(std::forward<ContributionAnalysisDefaultsT>(value)); return *this;}
    template<typename ContributionAnalysisDefaultsT = ContributionAnalysisDefault>
    BarChartConfiguration& AddContributionAnalysisDefaults(ContributionAnalysisDefaultsT&& value) { m_contributionAnalysisDefaultsHasBeenSet = true; m_contributionAnalysisDefaults.emplace_back(std::forward<ContributionAnalysisDefaultsT>(value)); return *this; }
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
    BarChartConfiguration& WithInteractions(InteractionsT&& value) { SetInteractions(std::forward<InteractionsT>(value)); return *this;}
    ///@}
  private:

    BarChartFieldWells m_fieldWells;
    bool m_fieldWellsHasBeenSet = false;

    BarChartSortConfiguration m_sortConfiguration;
    bool m_sortConfigurationHasBeenSet = false;

    BarChartOrientation m_orientation{BarChartOrientation::NOT_SET};
    bool m_orientationHasBeenSet = false;

    BarsArrangement m_barsArrangement{BarsArrangement::NOT_SET};
    bool m_barsArrangementHasBeenSet = false;

    VisualPalette m_visualPalette;
    bool m_visualPaletteHasBeenSet = false;

    SmallMultiplesOptions m_smallMultiplesOptions;
    bool m_smallMultiplesOptionsHasBeenSet = false;

    AxisDisplayOptions m_categoryAxis;
    bool m_categoryAxisHasBeenSet = false;

    ChartAxisLabelOptions m_categoryLabelOptions;
    bool m_categoryLabelOptionsHasBeenSet = false;

    AxisDisplayOptions m_valueAxis;
    bool m_valueAxisHasBeenSet = false;

    ChartAxisLabelOptions m_valueLabelOptions;
    bool m_valueLabelOptionsHasBeenSet = false;

    ChartAxisLabelOptions m_colorLabelOptions;
    bool m_colorLabelOptionsHasBeenSet = false;

    LegendOptions m_legend;
    bool m_legendHasBeenSet = false;

    DataLabelOptions m_dataLabels;
    bool m_dataLabelsHasBeenSet = false;

    TooltipOptions m_tooltip;
    bool m_tooltipHasBeenSet = false;

    Aws::Vector<ReferenceLine> m_referenceLines;
    bool m_referenceLinesHasBeenSet = false;

    Aws::Vector<ContributionAnalysisDefault> m_contributionAnalysisDefaults;
    bool m_contributionAnalysisDefaultsHasBeenSet = false;

    VisualInteractionOptions m_interactions;
    bool m_interactionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
