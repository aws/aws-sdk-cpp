/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/TreeMapFieldWells.h>
#include <aws/quicksight/model/TreeMapSortConfiguration.h>
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
   * <p>The configuration of a tree map.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TreeMapConfiguration">AWS
   * API Reference</a></p>
   */
  class TreeMapConfiguration
  {
  public:
    AWS_QUICKSIGHT_API TreeMapConfiguration() = default;
    AWS_QUICKSIGHT_API TreeMapConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TreeMapConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The field wells of the visual.</p>
     */
    inline const TreeMapFieldWells& GetFieldWells() const { return m_fieldWells; }
    inline bool FieldWellsHasBeenSet() const { return m_fieldWellsHasBeenSet; }
    template<typename FieldWellsT = TreeMapFieldWells>
    void SetFieldWells(FieldWellsT&& value) { m_fieldWellsHasBeenSet = true; m_fieldWells = std::forward<FieldWellsT>(value); }
    template<typename FieldWellsT = TreeMapFieldWells>
    TreeMapConfiguration& WithFieldWells(FieldWellsT&& value) { SetFieldWells(std::forward<FieldWellsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sort configuration of a tree map.</p>
     */
    inline const TreeMapSortConfiguration& GetSortConfiguration() const { return m_sortConfiguration; }
    inline bool SortConfigurationHasBeenSet() const { return m_sortConfigurationHasBeenSet; }
    template<typename SortConfigurationT = TreeMapSortConfiguration>
    void SetSortConfiguration(SortConfigurationT&& value) { m_sortConfigurationHasBeenSet = true; m_sortConfiguration = std::forward<SortConfigurationT>(value); }
    template<typename SortConfigurationT = TreeMapSortConfiguration>
    TreeMapConfiguration& WithSortConfiguration(SortConfigurationT&& value) { SetSortConfiguration(std::forward<SortConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The label options (label text, label visibility) of the groups that are
     * displayed in a tree map.</p>
     */
    inline const ChartAxisLabelOptions& GetGroupLabelOptions() const { return m_groupLabelOptions; }
    inline bool GroupLabelOptionsHasBeenSet() const { return m_groupLabelOptionsHasBeenSet; }
    template<typename GroupLabelOptionsT = ChartAxisLabelOptions>
    void SetGroupLabelOptions(GroupLabelOptionsT&& value) { m_groupLabelOptionsHasBeenSet = true; m_groupLabelOptions = std::forward<GroupLabelOptionsT>(value); }
    template<typename GroupLabelOptionsT = ChartAxisLabelOptions>
    TreeMapConfiguration& WithGroupLabelOptions(GroupLabelOptionsT&& value) { SetGroupLabelOptions(std::forward<GroupLabelOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The label options (label text, label visibility) of the sizes that are
     * displayed in a tree map.</p>
     */
    inline const ChartAxisLabelOptions& GetSizeLabelOptions() const { return m_sizeLabelOptions; }
    inline bool SizeLabelOptionsHasBeenSet() const { return m_sizeLabelOptionsHasBeenSet; }
    template<typename SizeLabelOptionsT = ChartAxisLabelOptions>
    void SetSizeLabelOptions(SizeLabelOptionsT&& value) { m_sizeLabelOptionsHasBeenSet = true; m_sizeLabelOptions = std::forward<SizeLabelOptionsT>(value); }
    template<typename SizeLabelOptionsT = ChartAxisLabelOptions>
    TreeMapConfiguration& WithSizeLabelOptions(SizeLabelOptionsT&& value) { SetSizeLabelOptions(std::forward<SizeLabelOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The label options (label text, label visibility) for the colors displayed in
     * a tree map.</p>
     */
    inline const ChartAxisLabelOptions& GetColorLabelOptions() const { return m_colorLabelOptions; }
    inline bool ColorLabelOptionsHasBeenSet() const { return m_colorLabelOptionsHasBeenSet; }
    template<typename ColorLabelOptionsT = ChartAxisLabelOptions>
    void SetColorLabelOptions(ColorLabelOptionsT&& value) { m_colorLabelOptionsHasBeenSet = true; m_colorLabelOptions = std::forward<ColorLabelOptionsT>(value); }
    template<typename ColorLabelOptionsT = ChartAxisLabelOptions>
    TreeMapConfiguration& WithColorLabelOptions(ColorLabelOptionsT&& value) { SetColorLabelOptions(std::forward<ColorLabelOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The color options (gradient color, point of divergence) of a tree map.</p>
     */
    inline const ColorScale& GetColorScale() const { return m_colorScale; }
    inline bool ColorScaleHasBeenSet() const { return m_colorScaleHasBeenSet; }
    template<typename ColorScaleT = ColorScale>
    void SetColorScale(ColorScaleT&& value) { m_colorScaleHasBeenSet = true; m_colorScale = std::forward<ColorScaleT>(value); }
    template<typename ColorScaleT = ColorScale>
    TreeMapConfiguration& WithColorScale(ColorScaleT&& value) { SetColorScale(std::forward<ColorScaleT>(value)); return *this;}
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
    TreeMapConfiguration& WithLegend(LegendT&& value) { SetLegend(std::forward<LegendT>(value)); return *this;}
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
    TreeMapConfiguration& WithDataLabels(DataLabelsT&& value) { SetDataLabels(std::forward<DataLabelsT>(value)); return *this;}
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
    TreeMapConfiguration& WithTooltip(TooltipT&& value) { SetTooltip(std::forward<TooltipT>(value)); return *this;}
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
    TreeMapConfiguration& WithInteractions(InteractionsT&& value) { SetInteractions(std::forward<InteractionsT>(value)); return *this;}
    ///@}
  private:

    TreeMapFieldWells m_fieldWells;
    bool m_fieldWellsHasBeenSet = false;

    TreeMapSortConfiguration m_sortConfiguration;
    bool m_sortConfigurationHasBeenSet = false;

    ChartAxisLabelOptions m_groupLabelOptions;
    bool m_groupLabelOptionsHasBeenSet = false;

    ChartAxisLabelOptions m_sizeLabelOptions;
    bool m_sizeLabelOptionsHasBeenSet = false;

    ChartAxisLabelOptions m_colorLabelOptions;
    bool m_colorLabelOptionsHasBeenSet = false;

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
