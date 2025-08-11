/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/HeatMapFieldWells.h>
#include <aws/quicksight/model/HeatMapSortConfiguration.h>
#include <aws/quicksight/model/AxisDisplayOptions.h>
#include <aws/quicksight/model/ChartAxisLabelOptions.h>
#include <aws/quicksight/model/ColorScale.h>
#include <aws/quicksight/model/LegendOptions.h>
#include <aws/quicksight/model/DataLabelOptions.h>
#include <aws/quicksight/model/TooltipOptions.h>
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
   * <p>The configuration of a heat map.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/HeatMapConfiguration">AWS
   * API Reference</a></p>
   */
  class HeatMapConfiguration
  {
  public:
    AWS_QUICKSIGHT_API HeatMapConfiguration() = default;
    AWS_QUICKSIGHT_API HeatMapConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API HeatMapConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The field wells of the visual.</p>
     */
    inline const HeatMapFieldWells& GetFieldWells() const { return m_fieldWells; }
    inline bool FieldWellsHasBeenSet() const { return m_fieldWellsHasBeenSet; }
    template<typename FieldWellsT = HeatMapFieldWells>
    void SetFieldWells(FieldWellsT&& value) { m_fieldWellsHasBeenSet = true; m_fieldWells = std::forward<FieldWellsT>(value); }
    template<typename FieldWellsT = HeatMapFieldWells>
    HeatMapConfiguration& WithFieldWells(FieldWellsT&& value) { SetFieldWells(std::forward<FieldWellsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sort configuration of a heat map.</p>
     */
    inline const HeatMapSortConfiguration& GetSortConfiguration() const { return m_sortConfiguration; }
    inline bool SortConfigurationHasBeenSet() const { return m_sortConfigurationHasBeenSet; }
    template<typename SortConfigurationT = HeatMapSortConfiguration>
    void SetSortConfiguration(SortConfigurationT&& value) { m_sortConfigurationHasBeenSet = true; m_sortConfiguration = std::forward<SortConfigurationT>(value); }
    template<typename SortConfigurationT = HeatMapSortConfiguration>
    HeatMapConfiguration& WithSortConfiguration(SortConfigurationT&& value) { SetSortConfiguration(std::forward<SortConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options that determine the presentation of the row axis label.</p>
     */
    inline const AxisDisplayOptions& GetRowAxisDisplayOptions() const { return m_rowAxisDisplayOptions; }
    inline bool RowAxisDisplayOptionsHasBeenSet() const { return m_rowAxisDisplayOptionsHasBeenSet; }
    template<typename RowAxisDisplayOptionsT = AxisDisplayOptions>
    void SetRowAxisDisplayOptions(RowAxisDisplayOptionsT&& value) { m_rowAxisDisplayOptionsHasBeenSet = true; m_rowAxisDisplayOptions = std::forward<RowAxisDisplayOptionsT>(value); }
    template<typename RowAxisDisplayOptionsT = AxisDisplayOptions>
    HeatMapConfiguration& WithRowAxisDisplayOptions(RowAxisDisplayOptionsT&& value) { SetRowAxisDisplayOptions(std::forward<RowAxisDisplayOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The label options of the row that is displayed in a <code>heat
     * map</code>.</p>
     */
    inline const ChartAxisLabelOptions& GetRowLabelOptions() const { return m_rowLabelOptions; }
    inline bool RowLabelOptionsHasBeenSet() const { return m_rowLabelOptionsHasBeenSet; }
    template<typename RowLabelOptionsT = ChartAxisLabelOptions>
    void SetRowLabelOptions(RowLabelOptionsT&& value) { m_rowLabelOptionsHasBeenSet = true; m_rowLabelOptions = std::forward<RowLabelOptionsT>(value); }
    template<typename RowLabelOptionsT = ChartAxisLabelOptions>
    HeatMapConfiguration& WithRowLabelOptions(RowLabelOptionsT&& value) { SetRowLabelOptions(std::forward<RowLabelOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options that determine the presentation of the row axis label.</p>
     */
    inline const AxisDisplayOptions& GetColumnAxisDisplayOptions() const { return m_columnAxisDisplayOptions; }
    inline bool ColumnAxisDisplayOptionsHasBeenSet() const { return m_columnAxisDisplayOptionsHasBeenSet; }
    template<typename ColumnAxisDisplayOptionsT = AxisDisplayOptions>
    void SetColumnAxisDisplayOptions(ColumnAxisDisplayOptionsT&& value) { m_columnAxisDisplayOptionsHasBeenSet = true; m_columnAxisDisplayOptions = std::forward<ColumnAxisDisplayOptionsT>(value); }
    template<typename ColumnAxisDisplayOptionsT = AxisDisplayOptions>
    HeatMapConfiguration& WithColumnAxisDisplayOptions(ColumnAxisDisplayOptionsT&& value) { SetColumnAxisDisplayOptions(std::forward<ColumnAxisDisplayOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The label options of the column that is displayed in a heat map.</p>
     */
    inline const ChartAxisLabelOptions& GetColumnLabelOptions() const { return m_columnLabelOptions; }
    inline bool ColumnLabelOptionsHasBeenSet() const { return m_columnLabelOptionsHasBeenSet; }
    template<typename ColumnLabelOptionsT = ChartAxisLabelOptions>
    void SetColumnLabelOptions(ColumnLabelOptionsT&& value) { m_columnLabelOptionsHasBeenSet = true; m_columnLabelOptions = std::forward<ColumnLabelOptionsT>(value); }
    template<typename ColumnLabelOptionsT = ChartAxisLabelOptions>
    HeatMapConfiguration& WithColumnLabelOptions(ColumnLabelOptionsT&& value) { SetColumnLabelOptions(std::forward<ColumnLabelOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The color options (gradient color, point of divergence) in a heat map.</p>
     */
    inline const ColorScale& GetColorScale() const { return m_colorScale; }
    inline bool ColorScaleHasBeenSet() const { return m_colorScaleHasBeenSet; }
    template<typename ColorScaleT = ColorScale>
    void SetColorScale(ColorScaleT&& value) { m_colorScaleHasBeenSet = true; m_colorScale = std::forward<ColorScaleT>(value); }
    template<typename ColorScaleT = ColorScale>
    HeatMapConfiguration& WithColorScale(ColorScaleT&& value) { SetColorScale(std::forward<ColorScaleT>(value)); return *this;}
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
    HeatMapConfiguration& WithLegend(LegendT&& value) { SetLegend(std::forward<LegendT>(value)); return *this;}
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
    HeatMapConfiguration& WithDataLabels(DataLabelsT&& value) { SetDataLabels(std::forward<DataLabelsT>(value)); return *this;}
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
    HeatMapConfiguration& WithTooltip(TooltipT&& value) { SetTooltip(std::forward<TooltipT>(value)); return *this;}
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
    HeatMapConfiguration& WithInteractions(InteractionsT&& value) { SetInteractions(std::forward<InteractionsT>(value)); return *this;}
    ///@}
  private:

    HeatMapFieldWells m_fieldWells;
    bool m_fieldWellsHasBeenSet = false;

    HeatMapSortConfiguration m_sortConfiguration;
    bool m_sortConfigurationHasBeenSet = false;

    AxisDisplayOptions m_rowAxisDisplayOptions;
    bool m_rowAxisDisplayOptionsHasBeenSet = false;

    ChartAxisLabelOptions m_rowLabelOptions;
    bool m_rowLabelOptionsHasBeenSet = false;

    AxisDisplayOptions m_columnAxisDisplayOptions;
    bool m_columnAxisDisplayOptionsHasBeenSet = false;

    ChartAxisLabelOptions m_columnLabelOptions;
    bool m_columnLabelOptionsHasBeenSet = false;

    ColorScale m_colorScale;
    bool m_colorScaleHasBeenSet = false;

    LegendOptions m_legend;
    bool m_legendHasBeenSet = false;

    DataLabelOptions m_dataLabels;
    bool m_dataLabelsHasBeenSet = false;

    TooltipOptions m_tooltip;
    bool m_tooltipHasBeenSet = false;

    VisualInteractionOptions m_interactions;
    bool m_interactionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
