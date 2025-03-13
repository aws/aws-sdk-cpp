/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ScatterPlotFieldWells.h>
#include <aws/quicksight/model/ScatterPlotSortConfiguration.h>
#include <aws/quicksight/model/ChartAxisLabelOptions.h>
#include <aws/quicksight/model/AxisDisplayOptions.h>
#include <aws/quicksight/model/LegendOptions.h>
#include <aws/quicksight/model/DataLabelOptions.h>
#include <aws/quicksight/model/TooltipOptions.h>
#include <aws/quicksight/model/VisualPalette.h>
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
   * <p>The configuration of a scatter plot.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ScatterPlotConfiguration">AWS
   * API Reference</a></p>
   */
  class ScatterPlotConfiguration
  {
  public:
    AWS_QUICKSIGHT_API ScatterPlotConfiguration() = default;
    AWS_QUICKSIGHT_API ScatterPlotConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ScatterPlotConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The field wells of the visual.</p>
     */
    inline const ScatterPlotFieldWells& GetFieldWells() const { return m_fieldWells; }
    inline bool FieldWellsHasBeenSet() const { return m_fieldWellsHasBeenSet; }
    template<typename FieldWellsT = ScatterPlotFieldWells>
    void SetFieldWells(FieldWellsT&& value) { m_fieldWellsHasBeenSet = true; m_fieldWells = std::forward<FieldWellsT>(value); }
    template<typename FieldWellsT = ScatterPlotFieldWells>
    ScatterPlotConfiguration& WithFieldWells(FieldWellsT&& value) { SetFieldWells(std::forward<FieldWellsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sort configuration of a scatter plot.</p>
     */
    inline const ScatterPlotSortConfiguration& GetSortConfiguration() const { return m_sortConfiguration; }
    inline bool SortConfigurationHasBeenSet() const { return m_sortConfigurationHasBeenSet; }
    template<typename SortConfigurationT = ScatterPlotSortConfiguration>
    void SetSortConfiguration(SortConfigurationT&& value) { m_sortConfigurationHasBeenSet = true; m_sortConfiguration = std::forward<SortConfigurationT>(value); }
    template<typename SortConfigurationT = ScatterPlotSortConfiguration>
    ScatterPlotConfiguration& WithSortConfiguration(SortConfigurationT&& value) { SetSortConfiguration(std::forward<SortConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The label options (label text, label visibility, and sort icon visibility) of
     * the scatter plot's x-axis.</p>
     */
    inline const ChartAxisLabelOptions& GetXAxisLabelOptions() const { return m_xAxisLabelOptions; }
    inline bool XAxisLabelOptionsHasBeenSet() const { return m_xAxisLabelOptionsHasBeenSet; }
    template<typename XAxisLabelOptionsT = ChartAxisLabelOptions>
    void SetXAxisLabelOptions(XAxisLabelOptionsT&& value) { m_xAxisLabelOptionsHasBeenSet = true; m_xAxisLabelOptions = std::forward<XAxisLabelOptionsT>(value); }
    template<typename XAxisLabelOptionsT = ChartAxisLabelOptions>
    ScatterPlotConfiguration& WithXAxisLabelOptions(XAxisLabelOptionsT&& value) { SetXAxisLabelOptions(std::forward<XAxisLabelOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The label display options (grid line, range, scale, and axis step) of the
     * scatter plot's x-axis.</p>
     */
    inline const AxisDisplayOptions& GetXAxisDisplayOptions() const { return m_xAxisDisplayOptions; }
    inline bool XAxisDisplayOptionsHasBeenSet() const { return m_xAxisDisplayOptionsHasBeenSet; }
    template<typename XAxisDisplayOptionsT = AxisDisplayOptions>
    void SetXAxisDisplayOptions(XAxisDisplayOptionsT&& value) { m_xAxisDisplayOptionsHasBeenSet = true; m_xAxisDisplayOptions = std::forward<XAxisDisplayOptionsT>(value); }
    template<typename XAxisDisplayOptionsT = AxisDisplayOptions>
    ScatterPlotConfiguration& WithXAxisDisplayOptions(XAxisDisplayOptionsT&& value) { SetXAxisDisplayOptions(std::forward<XAxisDisplayOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The label options (label text, label visibility, and sort icon visibility) of
     * the scatter plot's y-axis.</p>
     */
    inline const ChartAxisLabelOptions& GetYAxisLabelOptions() const { return m_yAxisLabelOptions; }
    inline bool YAxisLabelOptionsHasBeenSet() const { return m_yAxisLabelOptionsHasBeenSet; }
    template<typename YAxisLabelOptionsT = ChartAxisLabelOptions>
    void SetYAxisLabelOptions(YAxisLabelOptionsT&& value) { m_yAxisLabelOptionsHasBeenSet = true; m_yAxisLabelOptions = std::forward<YAxisLabelOptionsT>(value); }
    template<typename YAxisLabelOptionsT = ChartAxisLabelOptions>
    ScatterPlotConfiguration& WithYAxisLabelOptions(YAxisLabelOptionsT&& value) { SetYAxisLabelOptions(std::forward<YAxisLabelOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The label display options (grid line, range, scale, and axis step) of the
     * scatter plot's y-axis.</p>
     */
    inline const AxisDisplayOptions& GetYAxisDisplayOptions() const { return m_yAxisDisplayOptions; }
    inline bool YAxisDisplayOptionsHasBeenSet() const { return m_yAxisDisplayOptionsHasBeenSet; }
    template<typename YAxisDisplayOptionsT = AxisDisplayOptions>
    void SetYAxisDisplayOptions(YAxisDisplayOptionsT&& value) { m_yAxisDisplayOptionsHasBeenSet = true; m_yAxisDisplayOptions = std::forward<YAxisDisplayOptionsT>(value); }
    template<typename YAxisDisplayOptionsT = AxisDisplayOptions>
    ScatterPlotConfiguration& WithYAxisDisplayOptions(YAxisDisplayOptionsT&& value) { SetYAxisDisplayOptions(std::forward<YAxisDisplayOptionsT>(value)); return *this;}
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
    ScatterPlotConfiguration& WithLegend(LegendT&& value) { SetLegend(std::forward<LegendT>(value)); return *this;}
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
    ScatterPlotConfiguration& WithDataLabels(DataLabelsT&& value) { SetDataLabels(std::forward<DataLabelsT>(value)); return *this;}
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
    ScatterPlotConfiguration& WithTooltip(TooltipT&& value) { SetTooltip(std::forward<TooltipT>(value)); return *this;}
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
    ScatterPlotConfiguration& WithVisualPalette(VisualPaletteT&& value) { SetVisualPalette(std::forward<VisualPaletteT>(value)); return *this;}
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
    ScatterPlotConfiguration& WithInteractions(InteractionsT&& value) { SetInteractions(std::forward<InteractionsT>(value)); return *this;}
    ///@}
  private:

    ScatterPlotFieldWells m_fieldWells;
    bool m_fieldWellsHasBeenSet = false;

    ScatterPlotSortConfiguration m_sortConfiguration;
    bool m_sortConfigurationHasBeenSet = false;

    ChartAxisLabelOptions m_xAxisLabelOptions;
    bool m_xAxisLabelOptionsHasBeenSet = false;

    AxisDisplayOptions m_xAxisDisplayOptions;
    bool m_xAxisDisplayOptionsHasBeenSet = false;

    ChartAxisLabelOptions m_yAxisLabelOptions;
    bool m_yAxisLabelOptionsHasBeenSet = false;

    AxisDisplayOptions m_yAxisDisplayOptions;
    bool m_yAxisDisplayOptionsHasBeenSet = false;

    LegendOptions m_legend;
    bool m_legendHasBeenSet = false;

    DataLabelOptions m_dataLabels;
    bool m_dataLabelsHasBeenSet = false;

    TooltipOptions m_tooltip;
    bool m_tooltipHasBeenSet = false;

    VisualPalette m_visualPalette;
    bool m_visualPaletteHasBeenSet = false;

    VisualInteractionOptions m_interactions;
    bool m_interactionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
