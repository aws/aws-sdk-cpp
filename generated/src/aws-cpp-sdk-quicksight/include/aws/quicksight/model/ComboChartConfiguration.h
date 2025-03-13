/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ComboChartFieldWells.h>
#include <aws/quicksight/model/ComboChartSortConfiguration.h>
#include <aws/quicksight/model/BarsArrangement.h>
#include <aws/quicksight/model/AxisDisplayOptions.h>
#include <aws/quicksight/model/ChartAxisLabelOptions.h>
#include <aws/quicksight/model/SingleAxisOptions.h>
#include <aws/quicksight/model/LegendOptions.h>
#include <aws/quicksight/model/DataLabelOptions.h>
#include <aws/quicksight/model/TooltipOptions.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/VisualPalette.h>
#include <aws/quicksight/model/VisualInteractionOptions.h>
#include <aws/quicksight/model/ReferenceLine.h>
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
   * <p>The configuration of a <code>ComboChartVisual</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ComboChartConfiguration">AWS
   * API Reference</a></p>
   */
  class ComboChartConfiguration
  {
  public:
    AWS_QUICKSIGHT_API ComboChartConfiguration() = default;
    AWS_QUICKSIGHT_API ComboChartConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ComboChartConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The field wells of the visual.</p>
     */
    inline const ComboChartFieldWells& GetFieldWells() const { return m_fieldWells; }
    inline bool FieldWellsHasBeenSet() const { return m_fieldWellsHasBeenSet; }
    template<typename FieldWellsT = ComboChartFieldWells>
    void SetFieldWells(FieldWellsT&& value) { m_fieldWellsHasBeenSet = true; m_fieldWells = std::forward<FieldWellsT>(value); }
    template<typename FieldWellsT = ComboChartFieldWells>
    ComboChartConfiguration& WithFieldWells(FieldWellsT&& value) { SetFieldWells(std::forward<FieldWellsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sort configuration of a <code>ComboChartVisual</code>.</p>
     */
    inline const ComboChartSortConfiguration& GetSortConfiguration() const { return m_sortConfiguration; }
    inline bool SortConfigurationHasBeenSet() const { return m_sortConfigurationHasBeenSet; }
    template<typename SortConfigurationT = ComboChartSortConfiguration>
    void SetSortConfiguration(SortConfigurationT&& value) { m_sortConfigurationHasBeenSet = true; m_sortConfiguration = std::forward<SortConfigurationT>(value); }
    template<typename SortConfigurationT = ComboChartSortConfiguration>
    ComboChartConfiguration& WithSortConfiguration(SortConfigurationT&& value) { SetSortConfiguration(std::forward<SortConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines the bar arrangement in a combo chart. The following are valid
     * values in this structure:</p> <ul> <li> <p> <code>CLUSTERED</code>: For
     * clustered bar combo charts.</p> </li> <li> <p> <code>STACKED</code>: For stacked
     * bar combo charts.</p> </li> <li> <p> <code>STACKED_PERCENT</code>: Do not use.
     * If you use this value, the operation returns a validation error.</p> </li> </ul>
     */
    inline BarsArrangement GetBarsArrangement() const { return m_barsArrangement; }
    inline bool BarsArrangementHasBeenSet() const { return m_barsArrangementHasBeenSet; }
    inline void SetBarsArrangement(BarsArrangement value) { m_barsArrangementHasBeenSet = true; m_barsArrangement = value; }
    inline ComboChartConfiguration& WithBarsArrangement(BarsArrangement value) { SetBarsArrangement(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The category axis of a combo chart.</p>
     */
    inline const AxisDisplayOptions& GetCategoryAxis() const { return m_categoryAxis; }
    inline bool CategoryAxisHasBeenSet() const { return m_categoryAxisHasBeenSet; }
    template<typename CategoryAxisT = AxisDisplayOptions>
    void SetCategoryAxis(CategoryAxisT&& value) { m_categoryAxisHasBeenSet = true; m_categoryAxis = std::forward<CategoryAxisT>(value); }
    template<typename CategoryAxisT = AxisDisplayOptions>
    ComboChartConfiguration& WithCategoryAxis(CategoryAxisT&& value) { SetCategoryAxis(std::forward<CategoryAxisT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The label options (label text, label visibility, and sort icon visibility) of
     * a combo chart category (group/color) field well.</p>
     */
    inline const ChartAxisLabelOptions& GetCategoryLabelOptions() const { return m_categoryLabelOptions; }
    inline bool CategoryLabelOptionsHasBeenSet() const { return m_categoryLabelOptionsHasBeenSet; }
    template<typename CategoryLabelOptionsT = ChartAxisLabelOptions>
    void SetCategoryLabelOptions(CategoryLabelOptionsT&& value) { m_categoryLabelOptionsHasBeenSet = true; m_categoryLabelOptions = std::forward<CategoryLabelOptionsT>(value); }
    template<typename CategoryLabelOptionsT = ChartAxisLabelOptions>
    ComboChartConfiguration& WithCategoryLabelOptions(CategoryLabelOptionsT&& value) { SetCategoryLabelOptions(std::forward<CategoryLabelOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The label display options (grid line, range, scale, and axis step) of a combo
     * chart's primary y-axis (bar) field well.</p>
     */
    inline const AxisDisplayOptions& GetPrimaryYAxisDisplayOptions() const { return m_primaryYAxisDisplayOptions; }
    inline bool PrimaryYAxisDisplayOptionsHasBeenSet() const { return m_primaryYAxisDisplayOptionsHasBeenSet; }
    template<typename PrimaryYAxisDisplayOptionsT = AxisDisplayOptions>
    void SetPrimaryYAxisDisplayOptions(PrimaryYAxisDisplayOptionsT&& value) { m_primaryYAxisDisplayOptionsHasBeenSet = true; m_primaryYAxisDisplayOptions = std::forward<PrimaryYAxisDisplayOptionsT>(value); }
    template<typename PrimaryYAxisDisplayOptionsT = AxisDisplayOptions>
    ComboChartConfiguration& WithPrimaryYAxisDisplayOptions(PrimaryYAxisDisplayOptionsT&& value) { SetPrimaryYAxisDisplayOptions(std::forward<PrimaryYAxisDisplayOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The label options (label text, label visibility, and sort icon visibility) of
     * a combo chart's primary y-axis (bar) field well.</p>
     */
    inline const ChartAxisLabelOptions& GetPrimaryYAxisLabelOptions() const { return m_primaryYAxisLabelOptions; }
    inline bool PrimaryYAxisLabelOptionsHasBeenSet() const { return m_primaryYAxisLabelOptionsHasBeenSet; }
    template<typename PrimaryYAxisLabelOptionsT = ChartAxisLabelOptions>
    void SetPrimaryYAxisLabelOptions(PrimaryYAxisLabelOptionsT&& value) { m_primaryYAxisLabelOptionsHasBeenSet = true; m_primaryYAxisLabelOptions = std::forward<PrimaryYAxisLabelOptionsT>(value); }
    template<typename PrimaryYAxisLabelOptionsT = ChartAxisLabelOptions>
    ComboChartConfiguration& WithPrimaryYAxisLabelOptions(PrimaryYAxisLabelOptionsT&& value) { SetPrimaryYAxisLabelOptions(std::forward<PrimaryYAxisLabelOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The label display options (grid line, range, scale, axis step) of a combo
     * chart's secondary y-axis (line) field well.</p>
     */
    inline const AxisDisplayOptions& GetSecondaryYAxisDisplayOptions() const { return m_secondaryYAxisDisplayOptions; }
    inline bool SecondaryYAxisDisplayOptionsHasBeenSet() const { return m_secondaryYAxisDisplayOptionsHasBeenSet; }
    template<typename SecondaryYAxisDisplayOptionsT = AxisDisplayOptions>
    void SetSecondaryYAxisDisplayOptions(SecondaryYAxisDisplayOptionsT&& value) { m_secondaryYAxisDisplayOptionsHasBeenSet = true; m_secondaryYAxisDisplayOptions = std::forward<SecondaryYAxisDisplayOptionsT>(value); }
    template<typename SecondaryYAxisDisplayOptionsT = AxisDisplayOptions>
    ComboChartConfiguration& WithSecondaryYAxisDisplayOptions(SecondaryYAxisDisplayOptionsT&& value) { SetSecondaryYAxisDisplayOptions(std::forward<SecondaryYAxisDisplayOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The label options (label text, label visibility, and sort icon visibility) of
     * a combo chart's secondary y-axis(line) field well.</p>
     */
    inline const ChartAxisLabelOptions& GetSecondaryYAxisLabelOptions() const { return m_secondaryYAxisLabelOptions; }
    inline bool SecondaryYAxisLabelOptionsHasBeenSet() const { return m_secondaryYAxisLabelOptionsHasBeenSet; }
    template<typename SecondaryYAxisLabelOptionsT = ChartAxisLabelOptions>
    void SetSecondaryYAxisLabelOptions(SecondaryYAxisLabelOptionsT&& value) { m_secondaryYAxisLabelOptionsHasBeenSet = true; m_secondaryYAxisLabelOptions = std::forward<SecondaryYAxisLabelOptionsT>(value); }
    template<typename SecondaryYAxisLabelOptionsT = ChartAxisLabelOptions>
    ComboChartConfiguration& WithSecondaryYAxisLabelOptions(SecondaryYAxisLabelOptionsT&& value) { SetSecondaryYAxisLabelOptions(std::forward<SecondaryYAxisLabelOptionsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const SingleAxisOptions& GetSingleAxisOptions() const { return m_singleAxisOptions; }
    inline bool SingleAxisOptionsHasBeenSet() const { return m_singleAxisOptionsHasBeenSet; }
    template<typename SingleAxisOptionsT = SingleAxisOptions>
    void SetSingleAxisOptions(SingleAxisOptionsT&& value) { m_singleAxisOptionsHasBeenSet = true; m_singleAxisOptions = std::forward<SingleAxisOptionsT>(value); }
    template<typename SingleAxisOptionsT = SingleAxisOptions>
    ComboChartConfiguration& WithSingleAxisOptions(SingleAxisOptionsT&& value) { SetSingleAxisOptions(std::forward<SingleAxisOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The label options (label text, label visibility, and sort icon visibility) of
     * a combo chart's color field well.</p>
     */
    inline const ChartAxisLabelOptions& GetColorLabelOptions() const { return m_colorLabelOptions; }
    inline bool ColorLabelOptionsHasBeenSet() const { return m_colorLabelOptionsHasBeenSet; }
    template<typename ColorLabelOptionsT = ChartAxisLabelOptions>
    void SetColorLabelOptions(ColorLabelOptionsT&& value) { m_colorLabelOptionsHasBeenSet = true; m_colorLabelOptions = std::forward<ColorLabelOptionsT>(value); }
    template<typename ColorLabelOptionsT = ChartAxisLabelOptions>
    ComboChartConfiguration& WithColorLabelOptions(ColorLabelOptionsT&& value) { SetColorLabelOptions(std::forward<ColorLabelOptionsT>(value)); return *this;}
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
    ComboChartConfiguration& WithLegend(LegendT&& value) { SetLegend(std::forward<LegendT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options that determine if visual data labels are displayed.</p> <p>The
     * data label options for a bar in a combo chart.</p>
     */
    inline const DataLabelOptions& GetBarDataLabels() const { return m_barDataLabels; }
    inline bool BarDataLabelsHasBeenSet() const { return m_barDataLabelsHasBeenSet; }
    template<typename BarDataLabelsT = DataLabelOptions>
    void SetBarDataLabels(BarDataLabelsT&& value) { m_barDataLabelsHasBeenSet = true; m_barDataLabels = std::forward<BarDataLabelsT>(value); }
    template<typename BarDataLabelsT = DataLabelOptions>
    ComboChartConfiguration& WithBarDataLabels(BarDataLabelsT&& value) { SetBarDataLabels(std::forward<BarDataLabelsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options that determine if visual data labels are displayed.</p> <p>The
     * data label options for a line in a combo chart.</p>
     */
    inline const DataLabelOptions& GetLineDataLabels() const { return m_lineDataLabels; }
    inline bool LineDataLabelsHasBeenSet() const { return m_lineDataLabelsHasBeenSet; }
    template<typename LineDataLabelsT = DataLabelOptions>
    void SetLineDataLabels(LineDataLabelsT&& value) { m_lineDataLabelsHasBeenSet = true; m_lineDataLabels = std::forward<LineDataLabelsT>(value); }
    template<typename LineDataLabelsT = DataLabelOptions>
    ComboChartConfiguration& WithLineDataLabels(LineDataLabelsT&& value) { SetLineDataLabels(std::forward<LineDataLabelsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The legend display setup of the visual.</p>
     */
    inline const TooltipOptions& GetTooltip() const { return m_tooltip; }
    inline bool TooltipHasBeenSet() const { return m_tooltipHasBeenSet; }
    template<typename TooltipT = TooltipOptions>
    void SetTooltip(TooltipT&& value) { m_tooltipHasBeenSet = true; m_tooltip = std::forward<TooltipT>(value); }
    template<typename TooltipT = TooltipOptions>
    ComboChartConfiguration& WithTooltip(TooltipT&& value) { SetTooltip(std::forward<TooltipT>(value)); return *this;}
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
    ComboChartConfiguration& WithReferenceLines(ReferenceLinesT&& value) { SetReferenceLines(std::forward<ReferenceLinesT>(value)); return *this;}
    template<typename ReferenceLinesT = ReferenceLine>
    ComboChartConfiguration& AddReferenceLines(ReferenceLinesT&& value) { m_referenceLinesHasBeenSet = true; m_referenceLines.emplace_back(std::forward<ReferenceLinesT>(value)); return *this; }
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
    ComboChartConfiguration& WithVisualPalette(VisualPaletteT&& value) { SetVisualPalette(std::forward<VisualPaletteT>(value)); return *this;}
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
    ComboChartConfiguration& WithInteractions(InteractionsT&& value) { SetInteractions(std::forward<InteractionsT>(value)); return *this;}
    ///@}
  private:

    ComboChartFieldWells m_fieldWells;
    bool m_fieldWellsHasBeenSet = false;

    ComboChartSortConfiguration m_sortConfiguration;
    bool m_sortConfigurationHasBeenSet = false;

    BarsArrangement m_barsArrangement{BarsArrangement::NOT_SET};
    bool m_barsArrangementHasBeenSet = false;

    AxisDisplayOptions m_categoryAxis;
    bool m_categoryAxisHasBeenSet = false;

    ChartAxisLabelOptions m_categoryLabelOptions;
    bool m_categoryLabelOptionsHasBeenSet = false;

    AxisDisplayOptions m_primaryYAxisDisplayOptions;
    bool m_primaryYAxisDisplayOptionsHasBeenSet = false;

    ChartAxisLabelOptions m_primaryYAxisLabelOptions;
    bool m_primaryYAxisLabelOptionsHasBeenSet = false;

    AxisDisplayOptions m_secondaryYAxisDisplayOptions;
    bool m_secondaryYAxisDisplayOptionsHasBeenSet = false;

    ChartAxisLabelOptions m_secondaryYAxisLabelOptions;
    bool m_secondaryYAxisLabelOptionsHasBeenSet = false;

    SingleAxisOptions m_singleAxisOptions;
    bool m_singleAxisOptionsHasBeenSet = false;

    ChartAxisLabelOptions m_colorLabelOptions;
    bool m_colorLabelOptionsHasBeenSet = false;

    LegendOptions m_legend;
    bool m_legendHasBeenSet = false;

    DataLabelOptions m_barDataLabels;
    bool m_barDataLabelsHasBeenSet = false;

    DataLabelOptions m_lineDataLabels;
    bool m_lineDataLabelsHasBeenSet = false;

    TooltipOptions m_tooltip;
    bool m_tooltipHasBeenSet = false;

    Aws::Vector<ReferenceLine> m_referenceLines;
    bool m_referenceLinesHasBeenSet = false;

    VisualPalette m_visualPalette;
    bool m_visualPaletteHasBeenSet = false;

    VisualInteractionOptions m_interactions;
    bool m_interactionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
