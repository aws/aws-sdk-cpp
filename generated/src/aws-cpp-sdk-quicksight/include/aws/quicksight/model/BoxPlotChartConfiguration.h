/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/BoxPlotFieldWells.h>
#include <aws/quicksight/model/BoxPlotSortConfiguration.h>
#include <aws/quicksight/model/BoxPlotOptions.h>
#include <aws/quicksight/model/AxisDisplayOptions.h>
#include <aws/quicksight/model/ChartAxisLabelOptions.h>
#include <aws/quicksight/model/LegendOptions.h>
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
   * <p>The configuration of a <code>BoxPlotVisual</code>.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/BoxPlotChartConfiguration">AWS
   * API Reference</a></p>
   */
  class BoxPlotChartConfiguration
  {
  public:
    AWS_QUICKSIGHT_API BoxPlotChartConfiguration() = default;
    AWS_QUICKSIGHT_API BoxPlotChartConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API BoxPlotChartConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The field wells of the visual.</p>
     */
    inline const BoxPlotFieldWells& GetFieldWells() const { return m_fieldWells; }
    inline bool FieldWellsHasBeenSet() const { return m_fieldWellsHasBeenSet; }
    template<typename FieldWellsT = BoxPlotFieldWells>
    void SetFieldWells(FieldWellsT&& value) { m_fieldWellsHasBeenSet = true; m_fieldWells = std::forward<FieldWellsT>(value); }
    template<typename FieldWellsT = BoxPlotFieldWells>
    BoxPlotChartConfiguration& WithFieldWells(FieldWellsT&& value) { SetFieldWells(std::forward<FieldWellsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sort configuration of a <code>BoxPlotVisual</code>.</p>
     */
    inline const BoxPlotSortConfiguration& GetSortConfiguration() const { return m_sortConfiguration; }
    inline bool SortConfigurationHasBeenSet() const { return m_sortConfigurationHasBeenSet; }
    template<typename SortConfigurationT = BoxPlotSortConfiguration>
    void SetSortConfiguration(SortConfigurationT&& value) { m_sortConfigurationHasBeenSet = true; m_sortConfiguration = std::forward<SortConfigurationT>(value); }
    template<typename SortConfigurationT = BoxPlotSortConfiguration>
    BoxPlotChartConfiguration& WithSortConfiguration(SortConfigurationT&& value) { SetSortConfiguration(std::forward<SortConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The box plot chart options for a box plot visual</p>
     */
    inline const BoxPlotOptions& GetBoxPlotOptions() const { return m_boxPlotOptions; }
    inline bool BoxPlotOptionsHasBeenSet() const { return m_boxPlotOptionsHasBeenSet; }
    template<typename BoxPlotOptionsT = BoxPlotOptions>
    void SetBoxPlotOptions(BoxPlotOptionsT&& value) { m_boxPlotOptionsHasBeenSet = true; m_boxPlotOptions = std::forward<BoxPlotOptionsT>(value); }
    template<typename BoxPlotOptionsT = BoxPlotOptions>
    BoxPlotChartConfiguration& WithBoxPlotOptions(BoxPlotOptionsT&& value) { SetBoxPlotOptions(std::forward<BoxPlotOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The label display options (grid line, range, scale, axis step) of a box plot
     * category.</p>
     */
    inline const AxisDisplayOptions& GetCategoryAxis() const { return m_categoryAxis; }
    inline bool CategoryAxisHasBeenSet() const { return m_categoryAxisHasBeenSet; }
    template<typename CategoryAxisT = AxisDisplayOptions>
    void SetCategoryAxis(CategoryAxisT&& value) { m_categoryAxisHasBeenSet = true; m_categoryAxis = std::forward<CategoryAxisT>(value); }
    template<typename CategoryAxisT = AxisDisplayOptions>
    BoxPlotChartConfiguration& WithCategoryAxis(CategoryAxisT&& value) { SetCategoryAxis(std::forward<CategoryAxisT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The label options (label text, label visibility and sort Icon visibility) of
     * a box plot category.</p>
     */
    inline const ChartAxisLabelOptions& GetCategoryLabelOptions() const { return m_categoryLabelOptions; }
    inline bool CategoryLabelOptionsHasBeenSet() const { return m_categoryLabelOptionsHasBeenSet; }
    template<typename CategoryLabelOptionsT = ChartAxisLabelOptions>
    void SetCategoryLabelOptions(CategoryLabelOptionsT&& value) { m_categoryLabelOptionsHasBeenSet = true; m_categoryLabelOptions = std::forward<CategoryLabelOptionsT>(value); }
    template<typename CategoryLabelOptionsT = ChartAxisLabelOptions>
    BoxPlotChartConfiguration& WithCategoryLabelOptions(CategoryLabelOptionsT&& value) { SetCategoryLabelOptions(std::forward<CategoryLabelOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The label display options (grid line, range, scale, axis step) of a box plot
     * category.</p>
     */
    inline const AxisDisplayOptions& GetPrimaryYAxisDisplayOptions() const { return m_primaryYAxisDisplayOptions; }
    inline bool PrimaryYAxisDisplayOptionsHasBeenSet() const { return m_primaryYAxisDisplayOptionsHasBeenSet; }
    template<typename PrimaryYAxisDisplayOptionsT = AxisDisplayOptions>
    void SetPrimaryYAxisDisplayOptions(PrimaryYAxisDisplayOptionsT&& value) { m_primaryYAxisDisplayOptionsHasBeenSet = true; m_primaryYAxisDisplayOptions = std::forward<PrimaryYAxisDisplayOptionsT>(value); }
    template<typename PrimaryYAxisDisplayOptionsT = AxisDisplayOptions>
    BoxPlotChartConfiguration& WithPrimaryYAxisDisplayOptions(PrimaryYAxisDisplayOptionsT&& value) { SetPrimaryYAxisDisplayOptions(std::forward<PrimaryYAxisDisplayOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The label options (label text, label visibility and sort icon visibility) of
     * a box plot value.</p>
     */
    inline const ChartAxisLabelOptions& GetPrimaryYAxisLabelOptions() const { return m_primaryYAxisLabelOptions; }
    inline bool PrimaryYAxisLabelOptionsHasBeenSet() const { return m_primaryYAxisLabelOptionsHasBeenSet; }
    template<typename PrimaryYAxisLabelOptionsT = ChartAxisLabelOptions>
    void SetPrimaryYAxisLabelOptions(PrimaryYAxisLabelOptionsT&& value) { m_primaryYAxisLabelOptionsHasBeenSet = true; m_primaryYAxisLabelOptions = std::forward<PrimaryYAxisLabelOptionsT>(value); }
    template<typename PrimaryYAxisLabelOptionsT = ChartAxisLabelOptions>
    BoxPlotChartConfiguration& WithPrimaryYAxisLabelOptions(PrimaryYAxisLabelOptionsT&& value) { SetPrimaryYAxisLabelOptions(std::forward<PrimaryYAxisLabelOptionsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const LegendOptions& GetLegend() const { return m_legend; }
    inline bool LegendHasBeenSet() const { return m_legendHasBeenSet; }
    template<typename LegendT = LegendOptions>
    void SetLegend(LegendT&& value) { m_legendHasBeenSet = true; m_legend = std::forward<LegendT>(value); }
    template<typename LegendT = LegendOptions>
    BoxPlotChartConfiguration& WithLegend(LegendT&& value) { SetLegend(std::forward<LegendT>(value)); return *this;}
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
    BoxPlotChartConfiguration& WithTooltip(TooltipT&& value) { SetTooltip(std::forward<TooltipT>(value)); return *this;}
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
    BoxPlotChartConfiguration& WithReferenceLines(ReferenceLinesT&& value) { SetReferenceLines(std::forward<ReferenceLinesT>(value)); return *this;}
    template<typename ReferenceLinesT = ReferenceLine>
    BoxPlotChartConfiguration& AddReferenceLines(ReferenceLinesT&& value) { m_referenceLinesHasBeenSet = true; m_referenceLines.emplace_back(std::forward<ReferenceLinesT>(value)); return *this; }
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
    BoxPlotChartConfiguration& WithVisualPalette(VisualPaletteT&& value) { SetVisualPalette(std::forward<VisualPaletteT>(value)); return *this;}
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
    BoxPlotChartConfiguration& WithInteractions(InteractionsT&& value) { SetInteractions(std::forward<InteractionsT>(value)); return *this;}
    ///@}
  private:

    BoxPlotFieldWells m_fieldWells;
    bool m_fieldWellsHasBeenSet = false;

    BoxPlotSortConfiguration m_sortConfiguration;
    bool m_sortConfigurationHasBeenSet = false;

    BoxPlotOptions m_boxPlotOptions;
    bool m_boxPlotOptionsHasBeenSet = false;

    AxisDisplayOptions m_categoryAxis;
    bool m_categoryAxisHasBeenSet = false;

    ChartAxisLabelOptions m_categoryLabelOptions;
    bool m_categoryLabelOptionsHasBeenSet = false;

    AxisDisplayOptions m_primaryYAxisDisplayOptions;
    bool m_primaryYAxisDisplayOptionsHasBeenSet = false;

    ChartAxisLabelOptions m_primaryYAxisLabelOptions;
    bool m_primaryYAxisLabelOptionsHasBeenSet = false;

    LegendOptions m_legend;
    bool m_legendHasBeenSet = false;

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
