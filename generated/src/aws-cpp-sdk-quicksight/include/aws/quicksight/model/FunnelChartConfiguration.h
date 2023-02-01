/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/FunnelChartFieldWells.h>
#include <aws/quicksight/model/FunnelChartSortConfiguration.h>
#include <aws/quicksight/model/ChartAxisLabelOptions.h>
#include <aws/quicksight/model/TooltipOptions.h>
#include <aws/quicksight/model/FunnelChartDataLabelOptions.h>
#include <aws/quicksight/model/VisualPalette.h>
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
   * <p>The configuration of a <code>FunnelChartVisual</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/FunnelChartConfiguration">AWS
   * API Reference</a></p>
   */
  class FunnelChartConfiguration
  {
  public:
    AWS_QUICKSIGHT_API FunnelChartConfiguration();
    AWS_QUICKSIGHT_API FunnelChartConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API FunnelChartConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The field well configuration of a <code>FunnelChartVisual</code>.</p>
     */
    inline const FunnelChartFieldWells& GetFieldWells() const{ return m_fieldWells; }

    /**
     * <p>The field well configuration of a <code>FunnelChartVisual</code>.</p>
     */
    inline bool FieldWellsHasBeenSet() const { return m_fieldWellsHasBeenSet; }

    /**
     * <p>The field well configuration of a <code>FunnelChartVisual</code>.</p>
     */
    inline void SetFieldWells(const FunnelChartFieldWells& value) { m_fieldWellsHasBeenSet = true; m_fieldWells = value; }

    /**
     * <p>The field well configuration of a <code>FunnelChartVisual</code>.</p>
     */
    inline void SetFieldWells(FunnelChartFieldWells&& value) { m_fieldWellsHasBeenSet = true; m_fieldWells = std::move(value); }

    /**
     * <p>The field well configuration of a <code>FunnelChartVisual</code>.</p>
     */
    inline FunnelChartConfiguration& WithFieldWells(const FunnelChartFieldWells& value) { SetFieldWells(value); return *this;}

    /**
     * <p>The field well configuration of a <code>FunnelChartVisual</code>.</p>
     */
    inline FunnelChartConfiguration& WithFieldWells(FunnelChartFieldWells&& value) { SetFieldWells(std::move(value)); return *this;}


    /**
     * <p>The sort configuration of a <code>FunnelChartVisual</code>.</p>
     */
    inline const FunnelChartSortConfiguration& GetSortConfiguration() const{ return m_sortConfiguration; }

    /**
     * <p>The sort configuration of a <code>FunnelChartVisual</code>.</p>
     */
    inline bool SortConfigurationHasBeenSet() const { return m_sortConfigurationHasBeenSet; }

    /**
     * <p>The sort configuration of a <code>FunnelChartVisual</code>.</p>
     */
    inline void SetSortConfiguration(const FunnelChartSortConfiguration& value) { m_sortConfigurationHasBeenSet = true; m_sortConfiguration = value; }

    /**
     * <p>The sort configuration of a <code>FunnelChartVisual</code>.</p>
     */
    inline void SetSortConfiguration(FunnelChartSortConfiguration&& value) { m_sortConfigurationHasBeenSet = true; m_sortConfiguration = std::move(value); }

    /**
     * <p>The sort configuration of a <code>FunnelChartVisual</code>.</p>
     */
    inline FunnelChartConfiguration& WithSortConfiguration(const FunnelChartSortConfiguration& value) { SetSortConfiguration(value); return *this;}

    /**
     * <p>The sort configuration of a <code>FunnelChartVisual</code>.</p>
     */
    inline FunnelChartConfiguration& WithSortConfiguration(FunnelChartSortConfiguration&& value) { SetSortConfiguration(std::move(value)); return *this;}


    /**
     * <p>The label options of the categories that are displayed in a
     * <code>FunnelChartVisual</code>.</p>
     */
    inline const ChartAxisLabelOptions& GetCategoryLabelOptions() const{ return m_categoryLabelOptions; }

    /**
     * <p>The label options of the categories that are displayed in a
     * <code>FunnelChartVisual</code>.</p>
     */
    inline bool CategoryLabelOptionsHasBeenSet() const { return m_categoryLabelOptionsHasBeenSet; }

    /**
     * <p>The label options of the categories that are displayed in a
     * <code>FunnelChartVisual</code>.</p>
     */
    inline void SetCategoryLabelOptions(const ChartAxisLabelOptions& value) { m_categoryLabelOptionsHasBeenSet = true; m_categoryLabelOptions = value; }

    /**
     * <p>The label options of the categories that are displayed in a
     * <code>FunnelChartVisual</code>.</p>
     */
    inline void SetCategoryLabelOptions(ChartAxisLabelOptions&& value) { m_categoryLabelOptionsHasBeenSet = true; m_categoryLabelOptions = std::move(value); }

    /**
     * <p>The label options of the categories that are displayed in a
     * <code>FunnelChartVisual</code>.</p>
     */
    inline FunnelChartConfiguration& WithCategoryLabelOptions(const ChartAxisLabelOptions& value) { SetCategoryLabelOptions(value); return *this;}

    /**
     * <p>The label options of the categories that are displayed in a
     * <code>FunnelChartVisual</code>.</p>
     */
    inline FunnelChartConfiguration& WithCategoryLabelOptions(ChartAxisLabelOptions&& value) { SetCategoryLabelOptions(std::move(value)); return *this;}


    /**
     * <p>The label options for the values that are displayed in a
     * <code>FunnelChartVisual</code>.</p>
     */
    inline const ChartAxisLabelOptions& GetValueLabelOptions() const{ return m_valueLabelOptions; }

    /**
     * <p>The label options for the values that are displayed in a
     * <code>FunnelChartVisual</code>.</p>
     */
    inline bool ValueLabelOptionsHasBeenSet() const { return m_valueLabelOptionsHasBeenSet; }

    /**
     * <p>The label options for the values that are displayed in a
     * <code>FunnelChartVisual</code>.</p>
     */
    inline void SetValueLabelOptions(const ChartAxisLabelOptions& value) { m_valueLabelOptionsHasBeenSet = true; m_valueLabelOptions = value; }

    /**
     * <p>The label options for the values that are displayed in a
     * <code>FunnelChartVisual</code>.</p>
     */
    inline void SetValueLabelOptions(ChartAxisLabelOptions&& value) { m_valueLabelOptionsHasBeenSet = true; m_valueLabelOptions = std::move(value); }

    /**
     * <p>The label options for the values that are displayed in a
     * <code>FunnelChartVisual</code>.</p>
     */
    inline FunnelChartConfiguration& WithValueLabelOptions(const ChartAxisLabelOptions& value) { SetValueLabelOptions(value); return *this;}

    /**
     * <p>The label options for the values that are displayed in a
     * <code>FunnelChartVisual</code>.</p>
     */
    inline FunnelChartConfiguration& WithValueLabelOptions(ChartAxisLabelOptions&& value) { SetValueLabelOptions(std::move(value)); return *this;}


    /**
     * <p>The tooltip configuration of a <code>FunnelChartVisual</code>.</p>
     */
    inline const TooltipOptions& GetTooltip() const{ return m_tooltip; }

    /**
     * <p>The tooltip configuration of a <code>FunnelChartVisual</code>.</p>
     */
    inline bool TooltipHasBeenSet() const { return m_tooltipHasBeenSet; }

    /**
     * <p>The tooltip configuration of a <code>FunnelChartVisual</code>.</p>
     */
    inline void SetTooltip(const TooltipOptions& value) { m_tooltipHasBeenSet = true; m_tooltip = value; }

    /**
     * <p>The tooltip configuration of a <code>FunnelChartVisual</code>.</p>
     */
    inline void SetTooltip(TooltipOptions&& value) { m_tooltipHasBeenSet = true; m_tooltip = std::move(value); }

    /**
     * <p>The tooltip configuration of a <code>FunnelChartVisual</code>.</p>
     */
    inline FunnelChartConfiguration& WithTooltip(const TooltipOptions& value) { SetTooltip(value); return *this;}

    /**
     * <p>The tooltip configuration of a <code>FunnelChartVisual</code>.</p>
     */
    inline FunnelChartConfiguration& WithTooltip(TooltipOptions&& value) { SetTooltip(std::move(value)); return *this;}


    /**
     * <p>The options that determine the presentation of the data labels.</p>
     */
    inline const FunnelChartDataLabelOptions& GetDataLabelOptions() const{ return m_dataLabelOptions; }

    /**
     * <p>The options that determine the presentation of the data labels.</p>
     */
    inline bool DataLabelOptionsHasBeenSet() const { return m_dataLabelOptionsHasBeenSet; }

    /**
     * <p>The options that determine the presentation of the data labels.</p>
     */
    inline void SetDataLabelOptions(const FunnelChartDataLabelOptions& value) { m_dataLabelOptionsHasBeenSet = true; m_dataLabelOptions = value; }

    /**
     * <p>The options that determine the presentation of the data labels.</p>
     */
    inline void SetDataLabelOptions(FunnelChartDataLabelOptions&& value) { m_dataLabelOptionsHasBeenSet = true; m_dataLabelOptions = std::move(value); }

    /**
     * <p>The options that determine the presentation of the data labels.</p>
     */
    inline FunnelChartConfiguration& WithDataLabelOptions(const FunnelChartDataLabelOptions& value) { SetDataLabelOptions(value); return *this;}

    /**
     * <p>The options that determine the presentation of the data labels.</p>
     */
    inline FunnelChartConfiguration& WithDataLabelOptions(FunnelChartDataLabelOptions&& value) { SetDataLabelOptions(std::move(value)); return *this;}


    /**
     * <p>The visual palette configuration of a <code>FunnelChartVisual</code>.</p>
     */
    inline const VisualPalette& GetVisualPalette() const{ return m_visualPalette; }

    /**
     * <p>The visual palette configuration of a <code>FunnelChartVisual</code>.</p>
     */
    inline bool VisualPaletteHasBeenSet() const { return m_visualPaletteHasBeenSet; }

    /**
     * <p>The visual palette configuration of a <code>FunnelChartVisual</code>.</p>
     */
    inline void SetVisualPalette(const VisualPalette& value) { m_visualPaletteHasBeenSet = true; m_visualPalette = value; }

    /**
     * <p>The visual palette configuration of a <code>FunnelChartVisual</code>.</p>
     */
    inline void SetVisualPalette(VisualPalette&& value) { m_visualPaletteHasBeenSet = true; m_visualPalette = std::move(value); }

    /**
     * <p>The visual palette configuration of a <code>FunnelChartVisual</code>.</p>
     */
    inline FunnelChartConfiguration& WithVisualPalette(const VisualPalette& value) { SetVisualPalette(value); return *this;}

    /**
     * <p>The visual palette configuration of a <code>FunnelChartVisual</code>.</p>
     */
    inline FunnelChartConfiguration& WithVisualPalette(VisualPalette&& value) { SetVisualPalette(std::move(value)); return *this;}

  private:

    FunnelChartFieldWells m_fieldWells;
    bool m_fieldWellsHasBeenSet = false;

    FunnelChartSortConfiguration m_sortConfiguration;
    bool m_sortConfigurationHasBeenSet = false;

    ChartAxisLabelOptions m_categoryLabelOptions;
    bool m_categoryLabelOptionsHasBeenSet = false;

    ChartAxisLabelOptions m_valueLabelOptions;
    bool m_valueLabelOptionsHasBeenSet = false;

    TooltipOptions m_tooltip;
    bool m_tooltipHasBeenSet = false;

    FunnelChartDataLabelOptions m_dataLabelOptions;
    bool m_dataLabelOptionsHasBeenSet = false;

    VisualPalette m_visualPalette;
    bool m_visualPaletteHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
