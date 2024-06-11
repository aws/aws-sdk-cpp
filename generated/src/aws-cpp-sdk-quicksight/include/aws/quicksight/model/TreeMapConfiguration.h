﻿/**
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
    AWS_QUICKSIGHT_API TreeMapConfiguration();
    AWS_QUICKSIGHT_API TreeMapConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TreeMapConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The field wells of the visual.</p>
     */
    inline const TreeMapFieldWells& GetFieldWells() const{ return m_fieldWells; }
    inline bool FieldWellsHasBeenSet() const { return m_fieldWellsHasBeenSet; }
    inline void SetFieldWells(const TreeMapFieldWells& value) { m_fieldWellsHasBeenSet = true; m_fieldWells = value; }
    inline void SetFieldWells(TreeMapFieldWells&& value) { m_fieldWellsHasBeenSet = true; m_fieldWells = std::move(value); }
    inline TreeMapConfiguration& WithFieldWells(const TreeMapFieldWells& value) { SetFieldWells(value); return *this;}
    inline TreeMapConfiguration& WithFieldWells(TreeMapFieldWells&& value) { SetFieldWells(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sort configuration of a tree map.</p>
     */
    inline const TreeMapSortConfiguration& GetSortConfiguration() const{ return m_sortConfiguration; }
    inline bool SortConfigurationHasBeenSet() const { return m_sortConfigurationHasBeenSet; }
    inline void SetSortConfiguration(const TreeMapSortConfiguration& value) { m_sortConfigurationHasBeenSet = true; m_sortConfiguration = value; }
    inline void SetSortConfiguration(TreeMapSortConfiguration&& value) { m_sortConfigurationHasBeenSet = true; m_sortConfiguration = std::move(value); }
    inline TreeMapConfiguration& WithSortConfiguration(const TreeMapSortConfiguration& value) { SetSortConfiguration(value); return *this;}
    inline TreeMapConfiguration& WithSortConfiguration(TreeMapSortConfiguration&& value) { SetSortConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The label options (label text, label visibility) of the groups that are
     * displayed in a tree map.</p>
     */
    inline const ChartAxisLabelOptions& GetGroupLabelOptions() const{ return m_groupLabelOptions; }
    inline bool GroupLabelOptionsHasBeenSet() const { return m_groupLabelOptionsHasBeenSet; }
    inline void SetGroupLabelOptions(const ChartAxisLabelOptions& value) { m_groupLabelOptionsHasBeenSet = true; m_groupLabelOptions = value; }
    inline void SetGroupLabelOptions(ChartAxisLabelOptions&& value) { m_groupLabelOptionsHasBeenSet = true; m_groupLabelOptions = std::move(value); }
    inline TreeMapConfiguration& WithGroupLabelOptions(const ChartAxisLabelOptions& value) { SetGroupLabelOptions(value); return *this;}
    inline TreeMapConfiguration& WithGroupLabelOptions(ChartAxisLabelOptions&& value) { SetGroupLabelOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The label options (label text, label visibility) of the sizes that are
     * displayed in a tree map.</p>
     */
    inline const ChartAxisLabelOptions& GetSizeLabelOptions() const{ return m_sizeLabelOptions; }
    inline bool SizeLabelOptionsHasBeenSet() const { return m_sizeLabelOptionsHasBeenSet; }
    inline void SetSizeLabelOptions(const ChartAxisLabelOptions& value) { m_sizeLabelOptionsHasBeenSet = true; m_sizeLabelOptions = value; }
    inline void SetSizeLabelOptions(ChartAxisLabelOptions&& value) { m_sizeLabelOptionsHasBeenSet = true; m_sizeLabelOptions = std::move(value); }
    inline TreeMapConfiguration& WithSizeLabelOptions(const ChartAxisLabelOptions& value) { SetSizeLabelOptions(value); return *this;}
    inline TreeMapConfiguration& WithSizeLabelOptions(ChartAxisLabelOptions&& value) { SetSizeLabelOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The label options (label text, label visibility) for the colors displayed in
     * a tree map.</p>
     */
    inline const ChartAxisLabelOptions& GetColorLabelOptions() const{ return m_colorLabelOptions; }
    inline bool ColorLabelOptionsHasBeenSet() const { return m_colorLabelOptionsHasBeenSet; }
    inline void SetColorLabelOptions(const ChartAxisLabelOptions& value) { m_colorLabelOptionsHasBeenSet = true; m_colorLabelOptions = value; }
    inline void SetColorLabelOptions(ChartAxisLabelOptions&& value) { m_colorLabelOptionsHasBeenSet = true; m_colorLabelOptions = std::move(value); }
    inline TreeMapConfiguration& WithColorLabelOptions(const ChartAxisLabelOptions& value) { SetColorLabelOptions(value); return *this;}
    inline TreeMapConfiguration& WithColorLabelOptions(ChartAxisLabelOptions&& value) { SetColorLabelOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The color options (gradient color, point of divergence) of a tree map.</p>
     */
    inline const ColorScale& GetColorScale() const{ return m_colorScale; }
    inline bool ColorScaleHasBeenSet() const { return m_colorScaleHasBeenSet; }
    inline void SetColorScale(const ColorScale& value) { m_colorScaleHasBeenSet = true; m_colorScale = value; }
    inline void SetColorScale(ColorScale&& value) { m_colorScaleHasBeenSet = true; m_colorScale = std::move(value); }
    inline TreeMapConfiguration& WithColorScale(const ColorScale& value) { SetColorScale(value); return *this;}
    inline TreeMapConfiguration& WithColorScale(ColorScale&& value) { SetColorScale(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The legend display setup of the visual.</p>
     */
    inline const LegendOptions& GetLegend() const{ return m_legend; }
    inline bool LegendHasBeenSet() const { return m_legendHasBeenSet; }
    inline void SetLegend(const LegendOptions& value) { m_legendHasBeenSet = true; m_legend = value; }
    inline void SetLegend(LegendOptions&& value) { m_legendHasBeenSet = true; m_legend = std::move(value); }
    inline TreeMapConfiguration& WithLegend(const LegendOptions& value) { SetLegend(value); return *this;}
    inline TreeMapConfiguration& WithLegend(LegendOptions&& value) { SetLegend(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options that determine if visual data labels are displayed.</p>
     */
    inline const DataLabelOptions& GetDataLabels() const{ return m_dataLabels; }
    inline bool DataLabelsHasBeenSet() const { return m_dataLabelsHasBeenSet; }
    inline void SetDataLabels(const DataLabelOptions& value) { m_dataLabelsHasBeenSet = true; m_dataLabels = value; }
    inline void SetDataLabels(DataLabelOptions&& value) { m_dataLabelsHasBeenSet = true; m_dataLabels = std::move(value); }
    inline TreeMapConfiguration& WithDataLabels(const DataLabelOptions& value) { SetDataLabels(value); return *this;}
    inline TreeMapConfiguration& WithDataLabels(DataLabelOptions&& value) { SetDataLabels(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tooltip display setup of the visual.</p>
     */
    inline const TooltipOptions& GetTooltip() const{ return m_tooltip; }
    inline bool TooltipHasBeenSet() const { return m_tooltipHasBeenSet; }
    inline void SetTooltip(const TooltipOptions& value) { m_tooltipHasBeenSet = true; m_tooltip = value; }
    inline void SetTooltip(TooltipOptions&& value) { m_tooltipHasBeenSet = true; m_tooltip = std::move(value); }
    inline TreeMapConfiguration& WithTooltip(const TooltipOptions& value) { SetTooltip(value); return *this;}
    inline TreeMapConfiguration& WithTooltip(TooltipOptions&& value) { SetTooltip(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The general visual interactions setup for a visual.</p>
     */
    inline const VisualInteractionOptions& GetInteractions() const{ return m_interactions; }
    inline bool InteractionsHasBeenSet() const { return m_interactionsHasBeenSet; }
    inline void SetInteractions(const VisualInteractionOptions& value) { m_interactionsHasBeenSet = true; m_interactions = value; }
    inline void SetInteractions(VisualInteractionOptions&& value) { m_interactionsHasBeenSet = true; m_interactions = std::move(value); }
    inline TreeMapConfiguration& WithInteractions(const VisualInteractionOptions& value) { SetInteractions(value); return *this;}
    inline TreeMapConfiguration& WithInteractions(VisualInteractionOptions&& value) { SetInteractions(std::move(value)); return *this;}
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
