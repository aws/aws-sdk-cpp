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


    /**
     * <p>The field wells of the visual.</p>
     */
    inline const TreeMapFieldWells& GetFieldWells() const{ return m_fieldWells; }

    /**
     * <p>The field wells of the visual.</p>
     */
    inline bool FieldWellsHasBeenSet() const { return m_fieldWellsHasBeenSet; }

    /**
     * <p>The field wells of the visual.</p>
     */
    inline void SetFieldWells(const TreeMapFieldWells& value) { m_fieldWellsHasBeenSet = true; m_fieldWells = value; }

    /**
     * <p>The field wells of the visual.</p>
     */
    inline void SetFieldWells(TreeMapFieldWells&& value) { m_fieldWellsHasBeenSet = true; m_fieldWells = std::move(value); }

    /**
     * <p>The field wells of the visual.</p>
     */
    inline TreeMapConfiguration& WithFieldWells(const TreeMapFieldWells& value) { SetFieldWells(value); return *this;}

    /**
     * <p>The field wells of the visual.</p>
     */
    inline TreeMapConfiguration& WithFieldWells(TreeMapFieldWells&& value) { SetFieldWells(std::move(value)); return *this;}


    /**
     * <p>The sort configuration of a tree map.</p>
     */
    inline const TreeMapSortConfiguration& GetSortConfiguration() const{ return m_sortConfiguration; }

    /**
     * <p>The sort configuration of a tree map.</p>
     */
    inline bool SortConfigurationHasBeenSet() const { return m_sortConfigurationHasBeenSet; }

    /**
     * <p>The sort configuration of a tree map.</p>
     */
    inline void SetSortConfiguration(const TreeMapSortConfiguration& value) { m_sortConfigurationHasBeenSet = true; m_sortConfiguration = value; }

    /**
     * <p>The sort configuration of a tree map.</p>
     */
    inline void SetSortConfiguration(TreeMapSortConfiguration&& value) { m_sortConfigurationHasBeenSet = true; m_sortConfiguration = std::move(value); }

    /**
     * <p>The sort configuration of a tree map.</p>
     */
    inline TreeMapConfiguration& WithSortConfiguration(const TreeMapSortConfiguration& value) { SetSortConfiguration(value); return *this;}

    /**
     * <p>The sort configuration of a tree map.</p>
     */
    inline TreeMapConfiguration& WithSortConfiguration(TreeMapSortConfiguration&& value) { SetSortConfiguration(std::move(value)); return *this;}


    /**
     * <p>The label options (label text, label visibility) of the groups that are
     * displayed in a tree map.</p>
     */
    inline const ChartAxisLabelOptions& GetGroupLabelOptions() const{ return m_groupLabelOptions; }

    /**
     * <p>The label options (label text, label visibility) of the groups that are
     * displayed in a tree map.</p>
     */
    inline bool GroupLabelOptionsHasBeenSet() const { return m_groupLabelOptionsHasBeenSet; }

    /**
     * <p>The label options (label text, label visibility) of the groups that are
     * displayed in a tree map.</p>
     */
    inline void SetGroupLabelOptions(const ChartAxisLabelOptions& value) { m_groupLabelOptionsHasBeenSet = true; m_groupLabelOptions = value; }

    /**
     * <p>The label options (label text, label visibility) of the groups that are
     * displayed in a tree map.</p>
     */
    inline void SetGroupLabelOptions(ChartAxisLabelOptions&& value) { m_groupLabelOptionsHasBeenSet = true; m_groupLabelOptions = std::move(value); }

    /**
     * <p>The label options (label text, label visibility) of the groups that are
     * displayed in a tree map.</p>
     */
    inline TreeMapConfiguration& WithGroupLabelOptions(const ChartAxisLabelOptions& value) { SetGroupLabelOptions(value); return *this;}

    /**
     * <p>The label options (label text, label visibility) of the groups that are
     * displayed in a tree map.</p>
     */
    inline TreeMapConfiguration& WithGroupLabelOptions(ChartAxisLabelOptions&& value) { SetGroupLabelOptions(std::move(value)); return *this;}


    /**
     * <p>The label options (label text, label visibility) of the sizes that are
     * displayed in a tree map.</p>
     */
    inline const ChartAxisLabelOptions& GetSizeLabelOptions() const{ return m_sizeLabelOptions; }

    /**
     * <p>The label options (label text, label visibility) of the sizes that are
     * displayed in a tree map.</p>
     */
    inline bool SizeLabelOptionsHasBeenSet() const { return m_sizeLabelOptionsHasBeenSet; }

    /**
     * <p>The label options (label text, label visibility) of the sizes that are
     * displayed in a tree map.</p>
     */
    inline void SetSizeLabelOptions(const ChartAxisLabelOptions& value) { m_sizeLabelOptionsHasBeenSet = true; m_sizeLabelOptions = value; }

    /**
     * <p>The label options (label text, label visibility) of the sizes that are
     * displayed in a tree map.</p>
     */
    inline void SetSizeLabelOptions(ChartAxisLabelOptions&& value) { m_sizeLabelOptionsHasBeenSet = true; m_sizeLabelOptions = std::move(value); }

    /**
     * <p>The label options (label text, label visibility) of the sizes that are
     * displayed in a tree map.</p>
     */
    inline TreeMapConfiguration& WithSizeLabelOptions(const ChartAxisLabelOptions& value) { SetSizeLabelOptions(value); return *this;}

    /**
     * <p>The label options (label text, label visibility) of the sizes that are
     * displayed in a tree map.</p>
     */
    inline TreeMapConfiguration& WithSizeLabelOptions(ChartAxisLabelOptions&& value) { SetSizeLabelOptions(std::move(value)); return *this;}


    /**
     * <p>The label options (label text, label visibility) for the colors displayed in
     * a tree map.</p>
     */
    inline const ChartAxisLabelOptions& GetColorLabelOptions() const{ return m_colorLabelOptions; }

    /**
     * <p>The label options (label text, label visibility) for the colors displayed in
     * a tree map.</p>
     */
    inline bool ColorLabelOptionsHasBeenSet() const { return m_colorLabelOptionsHasBeenSet; }

    /**
     * <p>The label options (label text, label visibility) for the colors displayed in
     * a tree map.</p>
     */
    inline void SetColorLabelOptions(const ChartAxisLabelOptions& value) { m_colorLabelOptionsHasBeenSet = true; m_colorLabelOptions = value; }

    /**
     * <p>The label options (label text, label visibility) for the colors displayed in
     * a tree map.</p>
     */
    inline void SetColorLabelOptions(ChartAxisLabelOptions&& value) { m_colorLabelOptionsHasBeenSet = true; m_colorLabelOptions = std::move(value); }

    /**
     * <p>The label options (label text, label visibility) for the colors displayed in
     * a tree map.</p>
     */
    inline TreeMapConfiguration& WithColorLabelOptions(const ChartAxisLabelOptions& value) { SetColorLabelOptions(value); return *this;}

    /**
     * <p>The label options (label text, label visibility) for the colors displayed in
     * a tree map.</p>
     */
    inline TreeMapConfiguration& WithColorLabelOptions(ChartAxisLabelOptions&& value) { SetColorLabelOptions(std::move(value)); return *this;}


    /**
     * <p>The color options (gradient color, point of divergence) of a tree map.</p>
     */
    inline const ColorScale& GetColorScale() const{ return m_colorScale; }

    /**
     * <p>The color options (gradient color, point of divergence) of a tree map.</p>
     */
    inline bool ColorScaleHasBeenSet() const { return m_colorScaleHasBeenSet; }

    /**
     * <p>The color options (gradient color, point of divergence) of a tree map.</p>
     */
    inline void SetColorScale(const ColorScale& value) { m_colorScaleHasBeenSet = true; m_colorScale = value; }

    /**
     * <p>The color options (gradient color, point of divergence) of a tree map.</p>
     */
    inline void SetColorScale(ColorScale&& value) { m_colorScaleHasBeenSet = true; m_colorScale = std::move(value); }

    /**
     * <p>The color options (gradient color, point of divergence) of a tree map.</p>
     */
    inline TreeMapConfiguration& WithColorScale(const ColorScale& value) { SetColorScale(value); return *this;}

    /**
     * <p>The color options (gradient color, point of divergence) of a tree map.</p>
     */
    inline TreeMapConfiguration& WithColorScale(ColorScale&& value) { SetColorScale(std::move(value)); return *this;}


    /**
     * <p>The legend display setup of the visual.</p>
     */
    inline const LegendOptions& GetLegend() const{ return m_legend; }

    /**
     * <p>The legend display setup of the visual.</p>
     */
    inline bool LegendHasBeenSet() const { return m_legendHasBeenSet; }

    /**
     * <p>The legend display setup of the visual.</p>
     */
    inline void SetLegend(const LegendOptions& value) { m_legendHasBeenSet = true; m_legend = value; }

    /**
     * <p>The legend display setup of the visual.</p>
     */
    inline void SetLegend(LegendOptions&& value) { m_legendHasBeenSet = true; m_legend = std::move(value); }

    /**
     * <p>The legend display setup of the visual.</p>
     */
    inline TreeMapConfiguration& WithLegend(const LegendOptions& value) { SetLegend(value); return *this;}

    /**
     * <p>The legend display setup of the visual.</p>
     */
    inline TreeMapConfiguration& WithLegend(LegendOptions&& value) { SetLegend(std::move(value)); return *this;}


    /**
     * <p>The options that determine if visual data labels are displayed.</p>
     */
    inline const DataLabelOptions& GetDataLabels() const{ return m_dataLabels; }

    /**
     * <p>The options that determine if visual data labels are displayed.</p>
     */
    inline bool DataLabelsHasBeenSet() const { return m_dataLabelsHasBeenSet; }

    /**
     * <p>The options that determine if visual data labels are displayed.</p>
     */
    inline void SetDataLabels(const DataLabelOptions& value) { m_dataLabelsHasBeenSet = true; m_dataLabels = value; }

    /**
     * <p>The options that determine if visual data labels are displayed.</p>
     */
    inline void SetDataLabels(DataLabelOptions&& value) { m_dataLabelsHasBeenSet = true; m_dataLabels = std::move(value); }

    /**
     * <p>The options that determine if visual data labels are displayed.</p>
     */
    inline TreeMapConfiguration& WithDataLabels(const DataLabelOptions& value) { SetDataLabels(value); return *this;}

    /**
     * <p>The options that determine if visual data labels are displayed.</p>
     */
    inline TreeMapConfiguration& WithDataLabels(DataLabelOptions&& value) { SetDataLabels(std::move(value)); return *this;}


    /**
     * <p>The tooltip display setup of the visual.</p>
     */
    inline const TooltipOptions& GetTooltip() const{ return m_tooltip; }

    /**
     * <p>The tooltip display setup of the visual.</p>
     */
    inline bool TooltipHasBeenSet() const { return m_tooltipHasBeenSet; }

    /**
     * <p>The tooltip display setup of the visual.</p>
     */
    inline void SetTooltip(const TooltipOptions& value) { m_tooltipHasBeenSet = true; m_tooltip = value; }

    /**
     * <p>The tooltip display setup of the visual.</p>
     */
    inline void SetTooltip(TooltipOptions&& value) { m_tooltipHasBeenSet = true; m_tooltip = std::move(value); }

    /**
     * <p>The tooltip display setup of the visual.</p>
     */
    inline TreeMapConfiguration& WithTooltip(const TooltipOptions& value) { SetTooltip(value); return *this;}

    /**
     * <p>The tooltip display setup of the visual.</p>
     */
    inline TreeMapConfiguration& WithTooltip(TooltipOptions&& value) { SetTooltip(std::move(value)); return *this;}

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
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
