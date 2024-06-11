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
    AWS_QUICKSIGHT_API ScatterPlotConfiguration();
    AWS_QUICKSIGHT_API ScatterPlotConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ScatterPlotConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The field wells of the visual.</p>
     */
    inline const ScatterPlotFieldWells& GetFieldWells() const{ return m_fieldWells; }
    inline bool FieldWellsHasBeenSet() const { return m_fieldWellsHasBeenSet; }
    inline void SetFieldWells(const ScatterPlotFieldWells& value) { m_fieldWellsHasBeenSet = true; m_fieldWells = value; }
    inline void SetFieldWells(ScatterPlotFieldWells&& value) { m_fieldWellsHasBeenSet = true; m_fieldWells = std::move(value); }
    inline ScatterPlotConfiguration& WithFieldWells(const ScatterPlotFieldWells& value) { SetFieldWells(value); return *this;}
    inline ScatterPlotConfiguration& WithFieldWells(ScatterPlotFieldWells&& value) { SetFieldWells(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sort configuration of a scatter plot.</p>
     */
    inline const ScatterPlotSortConfiguration& GetSortConfiguration() const{ return m_sortConfiguration; }
    inline bool SortConfigurationHasBeenSet() const { return m_sortConfigurationHasBeenSet; }
    inline void SetSortConfiguration(const ScatterPlotSortConfiguration& value) { m_sortConfigurationHasBeenSet = true; m_sortConfiguration = value; }
    inline void SetSortConfiguration(ScatterPlotSortConfiguration&& value) { m_sortConfigurationHasBeenSet = true; m_sortConfiguration = std::move(value); }
    inline ScatterPlotConfiguration& WithSortConfiguration(const ScatterPlotSortConfiguration& value) { SetSortConfiguration(value); return *this;}
    inline ScatterPlotConfiguration& WithSortConfiguration(ScatterPlotSortConfiguration&& value) { SetSortConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The label options (label text, label visibility, and sort icon visibility) of
     * the scatter plot's x-axis.</p>
     */
    inline const ChartAxisLabelOptions& GetXAxisLabelOptions() const{ return m_xAxisLabelOptions; }
    inline bool XAxisLabelOptionsHasBeenSet() const { return m_xAxisLabelOptionsHasBeenSet; }
    inline void SetXAxisLabelOptions(const ChartAxisLabelOptions& value) { m_xAxisLabelOptionsHasBeenSet = true; m_xAxisLabelOptions = value; }
    inline void SetXAxisLabelOptions(ChartAxisLabelOptions&& value) { m_xAxisLabelOptionsHasBeenSet = true; m_xAxisLabelOptions = std::move(value); }
    inline ScatterPlotConfiguration& WithXAxisLabelOptions(const ChartAxisLabelOptions& value) { SetXAxisLabelOptions(value); return *this;}
    inline ScatterPlotConfiguration& WithXAxisLabelOptions(ChartAxisLabelOptions&& value) { SetXAxisLabelOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The label display options (grid line, range, scale, and axis step) of the
     * scatter plot's x-axis.</p>
     */
    inline const AxisDisplayOptions& GetXAxisDisplayOptions() const{ return m_xAxisDisplayOptions; }
    inline bool XAxisDisplayOptionsHasBeenSet() const { return m_xAxisDisplayOptionsHasBeenSet; }
    inline void SetXAxisDisplayOptions(const AxisDisplayOptions& value) { m_xAxisDisplayOptionsHasBeenSet = true; m_xAxisDisplayOptions = value; }
    inline void SetXAxisDisplayOptions(AxisDisplayOptions&& value) { m_xAxisDisplayOptionsHasBeenSet = true; m_xAxisDisplayOptions = std::move(value); }
    inline ScatterPlotConfiguration& WithXAxisDisplayOptions(const AxisDisplayOptions& value) { SetXAxisDisplayOptions(value); return *this;}
    inline ScatterPlotConfiguration& WithXAxisDisplayOptions(AxisDisplayOptions&& value) { SetXAxisDisplayOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The label options (label text, label visibility, and sort icon visibility) of
     * the scatter plot's y-axis.</p>
     */
    inline const ChartAxisLabelOptions& GetYAxisLabelOptions() const{ return m_yAxisLabelOptions; }
    inline bool YAxisLabelOptionsHasBeenSet() const { return m_yAxisLabelOptionsHasBeenSet; }
    inline void SetYAxisLabelOptions(const ChartAxisLabelOptions& value) { m_yAxisLabelOptionsHasBeenSet = true; m_yAxisLabelOptions = value; }
    inline void SetYAxisLabelOptions(ChartAxisLabelOptions&& value) { m_yAxisLabelOptionsHasBeenSet = true; m_yAxisLabelOptions = std::move(value); }
    inline ScatterPlotConfiguration& WithYAxisLabelOptions(const ChartAxisLabelOptions& value) { SetYAxisLabelOptions(value); return *this;}
    inline ScatterPlotConfiguration& WithYAxisLabelOptions(ChartAxisLabelOptions&& value) { SetYAxisLabelOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The label display options (grid line, range, scale, and axis step) of the
     * scatter plot's y-axis.</p>
     */
    inline const AxisDisplayOptions& GetYAxisDisplayOptions() const{ return m_yAxisDisplayOptions; }
    inline bool YAxisDisplayOptionsHasBeenSet() const { return m_yAxisDisplayOptionsHasBeenSet; }
    inline void SetYAxisDisplayOptions(const AxisDisplayOptions& value) { m_yAxisDisplayOptionsHasBeenSet = true; m_yAxisDisplayOptions = value; }
    inline void SetYAxisDisplayOptions(AxisDisplayOptions&& value) { m_yAxisDisplayOptionsHasBeenSet = true; m_yAxisDisplayOptions = std::move(value); }
    inline ScatterPlotConfiguration& WithYAxisDisplayOptions(const AxisDisplayOptions& value) { SetYAxisDisplayOptions(value); return *this;}
    inline ScatterPlotConfiguration& WithYAxisDisplayOptions(AxisDisplayOptions&& value) { SetYAxisDisplayOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The legend display setup of the visual.</p>
     */
    inline const LegendOptions& GetLegend() const{ return m_legend; }
    inline bool LegendHasBeenSet() const { return m_legendHasBeenSet; }
    inline void SetLegend(const LegendOptions& value) { m_legendHasBeenSet = true; m_legend = value; }
    inline void SetLegend(LegendOptions&& value) { m_legendHasBeenSet = true; m_legend = std::move(value); }
    inline ScatterPlotConfiguration& WithLegend(const LegendOptions& value) { SetLegend(value); return *this;}
    inline ScatterPlotConfiguration& WithLegend(LegendOptions&& value) { SetLegend(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options that determine if visual data labels are displayed.</p>
     */
    inline const DataLabelOptions& GetDataLabels() const{ return m_dataLabels; }
    inline bool DataLabelsHasBeenSet() const { return m_dataLabelsHasBeenSet; }
    inline void SetDataLabels(const DataLabelOptions& value) { m_dataLabelsHasBeenSet = true; m_dataLabels = value; }
    inline void SetDataLabels(DataLabelOptions&& value) { m_dataLabelsHasBeenSet = true; m_dataLabels = std::move(value); }
    inline ScatterPlotConfiguration& WithDataLabels(const DataLabelOptions& value) { SetDataLabels(value); return *this;}
    inline ScatterPlotConfiguration& WithDataLabels(DataLabelOptions&& value) { SetDataLabels(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The legend display setup of the visual.</p>
     */
    inline const TooltipOptions& GetTooltip() const{ return m_tooltip; }
    inline bool TooltipHasBeenSet() const { return m_tooltipHasBeenSet; }
    inline void SetTooltip(const TooltipOptions& value) { m_tooltipHasBeenSet = true; m_tooltip = value; }
    inline void SetTooltip(TooltipOptions&& value) { m_tooltipHasBeenSet = true; m_tooltip = std::move(value); }
    inline ScatterPlotConfiguration& WithTooltip(const TooltipOptions& value) { SetTooltip(value); return *this;}
    inline ScatterPlotConfiguration& WithTooltip(TooltipOptions&& value) { SetTooltip(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The palette (chart color) display setup of the visual.</p>
     */
    inline const VisualPalette& GetVisualPalette() const{ return m_visualPalette; }
    inline bool VisualPaletteHasBeenSet() const { return m_visualPaletteHasBeenSet; }
    inline void SetVisualPalette(const VisualPalette& value) { m_visualPaletteHasBeenSet = true; m_visualPalette = value; }
    inline void SetVisualPalette(VisualPalette&& value) { m_visualPaletteHasBeenSet = true; m_visualPalette = std::move(value); }
    inline ScatterPlotConfiguration& WithVisualPalette(const VisualPalette& value) { SetVisualPalette(value); return *this;}
    inline ScatterPlotConfiguration& WithVisualPalette(VisualPalette&& value) { SetVisualPalette(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The general visual interactions setup for a visual.</p>
     */
    inline const VisualInteractionOptions& GetInteractions() const{ return m_interactions; }
    inline bool InteractionsHasBeenSet() const { return m_interactionsHasBeenSet; }
    inline void SetInteractions(const VisualInteractionOptions& value) { m_interactionsHasBeenSet = true; m_interactions = value; }
    inline void SetInteractions(VisualInteractionOptions&& value) { m_interactionsHasBeenSet = true; m_interactions = std::move(value); }
    inline ScatterPlotConfiguration& WithInteractions(const VisualInteractionOptions& value) { SetInteractions(value); return *this;}
    inline ScatterPlotConfiguration& WithInteractions(VisualInteractionOptions&& value) { SetInteractions(std::move(value)); return *this;}
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
