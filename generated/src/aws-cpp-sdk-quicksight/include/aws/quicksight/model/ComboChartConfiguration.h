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
#include <aws/quicksight/model/LegendOptions.h>
#include <aws/quicksight/model/DataLabelOptions.h>
#include <aws/quicksight/model/TooltipOptions.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/VisualPalette.h>
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
    AWS_QUICKSIGHT_API ComboChartConfiguration();
    AWS_QUICKSIGHT_API ComboChartConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ComboChartConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The field wells of the visual.</p>
     */
    inline const ComboChartFieldWells& GetFieldWells() const{ return m_fieldWells; }

    /**
     * <p>The field wells of the visual.</p>
     */
    inline bool FieldWellsHasBeenSet() const { return m_fieldWellsHasBeenSet; }

    /**
     * <p>The field wells of the visual.</p>
     */
    inline void SetFieldWells(const ComboChartFieldWells& value) { m_fieldWellsHasBeenSet = true; m_fieldWells = value; }

    /**
     * <p>The field wells of the visual.</p>
     */
    inline void SetFieldWells(ComboChartFieldWells&& value) { m_fieldWellsHasBeenSet = true; m_fieldWells = std::move(value); }

    /**
     * <p>The field wells of the visual.</p>
     */
    inline ComboChartConfiguration& WithFieldWells(const ComboChartFieldWells& value) { SetFieldWells(value); return *this;}

    /**
     * <p>The field wells of the visual.</p>
     */
    inline ComboChartConfiguration& WithFieldWells(ComboChartFieldWells&& value) { SetFieldWells(std::move(value)); return *this;}


    /**
     * <p>The sort configuration of a <code>ComboChartVisual</code>.</p>
     */
    inline const ComboChartSortConfiguration& GetSortConfiguration() const{ return m_sortConfiguration; }

    /**
     * <p>The sort configuration of a <code>ComboChartVisual</code>.</p>
     */
    inline bool SortConfigurationHasBeenSet() const { return m_sortConfigurationHasBeenSet; }

    /**
     * <p>The sort configuration of a <code>ComboChartVisual</code>.</p>
     */
    inline void SetSortConfiguration(const ComboChartSortConfiguration& value) { m_sortConfigurationHasBeenSet = true; m_sortConfiguration = value; }

    /**
     * <p>The sort configuration of a <code>ComboChartVisual</code>.</p>
     */
    inline void SetSortConfiguration(ComboChartSortConfiguration&& value) { m_sortConfigurationHasBeenSet = true; m_sortConfiguration = std::move(value); }

    /**
     * <p>The sort configuration of a <code>ComboChartVisual</code>.</p>
     */
    inline ComboChartConfiguration& WithSortConfiguration(const ComboChartSortConfiguration& value) { SetSortConfiguration(value); return *this;}

    /**
     * <p>The sort configuration of a <code>ComboChartVisual</code>.</p>
     */
    inline ComboChartConfiguration& WithSortConfiguration(ComboChartSortConfiguration&& value) { SetSortConfiguration(std::move(value)); return *this;}


    /**
     * <p>Determines the bar arrangement in a combo chart. The following are valid
     * values in this structure:</p> <ul> <li> <p> <code>CLUSTERED</code>: For
     * clustered bar combo charts.</p> </li> <li> <p> <code>STACKED</code>: For stacked
     * bar combo charts.</p> </li> <li> <p> <code>STACKED_PERCENT</code>: Do not use.
     * If you use this value, the operation returns a validation error.</p> </li> </ul>
     */
    inline const BarsArrangement& GetBarsArrangement() const{ return m_barsArrangement; }

    /**
     * <p>Determines the bar arrangement in a combo chart. The following are valid
     * values in this structure:</p> <ul> <li> <p> <code>CLUSTERED</code>: For
     * clustered bar combo charts.</p> </li> <li> <p> <code>STACKED</code>: For stacked
     * bar combo charts.</p> </li> <li> <p> <code>STACKED_PERCENT</code>: Do not use.
     * If you use this value, the operation returns a validation error.</p> </li> </ul>
     */
    inline bool BarsArrangementHasBeenSet() const { return m_barsArrangementHasBeenSet; }

    /**
     * <p>Determines the bar arrangement in a combo chart. The following are valid
     * values in this structure:</p> <ul> <li> <p> <code>CLUSTERED</code>: For
     * clustered bar combo charts.</p> </li> <li> <p> <code>STACKED</code>: For stacked
     * bar combo charts.</p> </li> <li> <p> <code>STACKED_PERCENT</code>: Do not use.
     * If you use this value, the operation returns a validation error.</p> </li> </ul>
     */
    inline void SetBarsArrangement(const BarsArrangement& value) { m_barsArrangementHasBeenSet = true; m_barsArrangement = value; }

    /**
     * <p>Determines the bar arrangement in a combo chart. The following are valid
     * values in this structure:</p> <ul> <li> <p> <code>CLUSTERED</code>: For
     * clustered bar combo charts.</p> </li> <li> <p> <code>STACKED</code>: For stacked
     * bar combo charts.</p> </li> <li> <p> <code>STACKED_PERCENT</code>: Do not use.
     * If you use this value, the operation returns a validation error.</p> </li> </ul>
     */
    inline void SetBarsArrangement(BarsArrangement&& value) { m_barsArrangementHasBeenSet = true; m_barsArrangement = std::move(value); }

    /**
     * <p>Determines the bar arrangement in a combo chart. The following are valid
     * values in this structure:</p> <ul> <li> <p> <code>CLUSTERED</code>: For
     * clustered bar combo charts.</p> </li> <li> <p> <code>STACKED</code>: For stacked
     * bar combo charts.</p> </li> <li> <p> <code>STACKED_PERCENT</code>: Do not use.
     * If you use this value, the operation returns a validation error.</p> </li> </ul>
     */
    inline ComboChartConfiguration& WithBarsArrangement(const BarsArrangement& value) { SetBarsArrangement(value); return *this;}

    /**
     * <p>Determines the bar arrangement in a combo chart. The following are valid
     * values in this structure:</p> <ul> <li> <p> <code>CLUSTERED</code>: For
     * clustered bar combo charts.</p> </li> <li> <p> <code>STACKED</code>: For stacked
     * bar combo charts.</p> </li> <li> <p> <code>STACKED_PERCENT</code>: Do not use.
     * If you use this value, the operation returns a validation error.</p> </li> </ul>
     */
    inline ComboChartConfiguration& WithBarsArrangement(BarsArrangement&& value) { SetBarsArrangement(std::move(value)); return *this;}


    /**
     * <p>The category axis of a combo chart.</p>
     */
    inline const AxisDisplayOptions& GetCategoryAxis() const{ return m_categoryAxis; }

    /**
     * <p>The category axis of a combo chart.</p>
     */
    inline bool CategoryAxisHasBeenSet() const { return m_categoryAxisHasBeenSet; }

    /**
     * <p>The category axis of a combo chart.</p>
     */
    inline void SetCategoryAxis(const AxisDisplayOptions& value) { m_categoryAxisHasBeenSet = true; m_categoryAxis = value; }

    /**
     * <p>The category axis of a combo chart.</p>
     */
    inline void SetCategoryAxis(AxisDisplayOptions&& value) { m_categoryAxisHasBeenSet = true; m_categoryAxis = std::move(value); }

    /**
     * <p>The category axis of a combo chart.</p>
     */
    inline ComboChartConfiguration& WithCategoryAxis(const AxisDisplayOptions& value) { SetCategoryAxis(value); return *this;}

    /**
     * <p>The category axis of a combo chart.</p>
     */
    inline ComboChartConfiguration& WithCategoryAxis(AxisDisplayOptions&& value) { SetCategoryAxis(std::move(value)); return *this;}


    /**
     * <p>The label options (label text, label visibility, and sort icon visibility) of
     * a combo chart category (group/color) field well.</p>
     */
    inline const ChartAxisLabelOptions& GetCategoryLabelOptions() const{ return m_categoryLabelOptions; }

    /**
     * <p>The label options (label text, label visibility, and sort icon visibility) of
     * a combo chart category (group/color) field well.</p>
     */
    inline bool CategoryLabelOptionsHasBeenSet() const { return m_categoryLabelOptionsHasBeenSet; }

    /**
     * <p>The label options (label text, label visibility, and sort icon visibility) of
     * a combo chart category (group/color) field well.</p>
     */
    inline void SetCategoryLabelOptions(const ChartAxisLabelOptions& value) { m_categoryLabelOptionsHasBeenSet = true; m_categoryLabelOptions = value; }

    /**
     * <p>The label options (label text, label visibility, and sort icon visibility) of
     * a combo chart category (group/color) field well.</p>
     */
    inline void SetCategoryLabelOptions(ChartAxisLabelOptions&& value) { m_categoryLabelOptionsHasBeenSet = true; m_categoryLabelOptions = std::move(value); }

    /**
     * <p>The label options (label text, label visibility, and sort icon visibility) of
     * a combo chart category (group/color) field well.</p>
     */
    inline ComboChartConfiguration& WithCategoryLabelOptions(const ChartAxisLabelOptions& value) { SetCategoryLabelOptions(value); return *this;}

    /**
     * <p>The label options (label text, label visibility, and sort icon visibility) of
     * a combo chart category (group/color) field well.</p>
     */
    inline ComboChartConfiguration& WithCategoryLabelOptions(ChartAxisLabelOptions&& value) { SetCategoryLabelOptions(std::move(value)); return *this;}


    /**
     * <p>The label display options (grid line, range, scale, and axis step) of a combo
     * chart's primary y-axis (bar) field well.</p>
     */
    inline const AxisDisplayOptions& GetPrimaryYAxisDisplayOptions() const{ return m_primaryYAxisDisplayOptions; }

    /**
     * <p>The label display options (grid line, range, scale, and axis step) of a combo
     * chart's primary y-axis (bar) field well.</p>
     */
    inline bool PrimaryYAxisDisplayOptionsHasBeenSet() const { return m_primaryYAxisDisplayOptionsHasBeenSet; }

    /**
     * <p>The label display options (grid line, range, scale, and axis step) of a combo
     * chart's primary y-axis (bar) field well.</p>
     */
    inline void SetPrimaryYAxisDisplayOptions(const AxisDisplayOptions& value) { m_primaryYAxisDisplayOptionsHasBeenSet = true; m_primaryYAxisDisplayOptions = value; }

    /**
     * <p>The label display options (grid line, range, scale, and axis step) of a combo
     * chart's primary y-axis (bar) field well.</p>
     */
    inline void SetPrimaryYAxisDisplayOptions(AxisDisplayOptions&& value) { m_primaryYAxisDisplayOptionsHasBeenSet = true; m_primaryYAxisDisplayOptions = std::move(value); }

    /**
     * <p>The label display options (grid line, range, scale, and axis step) of a combo
     * chart's primary y-axis (bar) field well.</p>
     */
    inline ComboChartConfiguration& WithPrimaryYAxisDisplayOptions(const AxisDisplayOptions& value) { SetPrimaryYAxisDisplayOptions(value); return *this;}

    /**
     * <p>The label display options (grid line, range, scale, and axis step) of a combo
     * chart's primary y-axis (bar) field well.</p>
     */
    inline ComboChartConfiguration& WithPrimaryYAxisDisplayOptions(AxisDisplayOptions&& value) { SetPrimaryYAxisDisplayOptions(std::move(value)); return *this;}


    /**
     * <p>The label options (label text, label visibility, and sort icon visibility) of
     * a combo chart's primary y-axis (bar) field well.</p>
     */
    inline const ChartAxisLabelOptions& GetPrimaryYAxisLabelOptions() const{ return m_primaryYAxisLabelOptions; }

    /**
     * <p>The label options (label text, label visibility, and sort icon visibility) of
     * a combo chart's primary y-axis (bar) field well.</p>
     */
    inline bool PrimaryYAxisLabelOptionsHasBeenSet() const { return m_primaryYAxisLabelOptionsHasBeenSet; }

    /**
     * <p>The label options (label text, label visibility, and sort icon visibility) of
     * a combo chart's primary y-axis (bar) field well.</p>
     */
    inline void SetPrimaryYAxisLabelOptions(const ChartAxisLabelOptions& value) { m_primaryYAxisLabelOptionsHasBeenSet = true; m_primaryYAxisLabelOptions = value; }

    /**
     * <p>The label options (label text, label visibility, and sort icon visibility) of
     * a combo chart's primary y-axis (bar) field well.</p>
     */
    inline void SetPrimaryYAxisLabelOptions(ChartAxisLabelOptions&& value) { m_primaryYAxisLabelOptionsHasBeenSet = true; m_primaryYAxisLabelOptions = std::move(value); }

    /**
     * <p>The label options (label text, label visibility, and sort icon visibility) of
     * a combo chart's primary y-axis (bar) field well.</p>
     */
    inline ComboChartConfiguration& WithPrimaryYAxisLabelOptions(const ChartAxisLabelOptions& value) { SetPrimaryYAxisLabelOptions(value); return *this;}

    /**
     * <p>The label options (label text, label visibility, and sort icon visibility) of
     * a combo chart's primary y-axis (bar) field well.</p>
     */
    inline ComboChartConfiguration& WithPrimaryYAxisLabelOptions(ChartAxisLabelOptions&& value) { SetPrimaryYAxisLabelOptions(std::move(value)); return *this;}


    /**
     * <p>The label display options (grid line, range, scale, axis step) of a combo
     * chart's secondary y-axis (line) field well.</p>
     */
    inline const AxisDisplayOptions& GetSecondaryYAxisDisplayOptions() const{ return m_secondaryYAxisDisplayOptions; }

    /**
     * <p>The label display options (grid line, range, scale, axis step) of a combo
     * chart's secondary y-axis (line) field well.</p>
     */
    inline bool SecondaryYAxisDisplayOptionsHasBeenSet() const { return m_secondaryYAxisDisplayOptionsHasBeenSet; }

    /**
     * <p>The label display options (grid line, range, scale, axis step) of a combo
     * chart's secondary y-axis (line) field well.</p>
     */
    inline void SetSecondaryYAxisDisplayOptions(const AxisDisplayOptions& value) { m_secondaryYAxisDisplayOptionsHasBeenSet = true; m_secondaryYAxisDisplayOptions = value; }

    /**
     * <p>The label display options (grid line, range, scale, axis step) of a combo
     * chart's secondary y-axis (line) field well.</p>
     */
    inline void SetSecondaryYAxisDisplayOptions(AxisDisplayOptions&& value) { m_secondaryYAxisDisplayOptionsHasBeenSet = true; m_secondaryYAxisDisplayOptions = std::move(value); }

    /**
     * <p>The label display options (grid line, range, scale, axis step) of a combo
     * chart's secondary y-axis (line) field well.</p>
     */
    inline ComboChartConfiguration& WithSecondaryYAxisDisplayOptions(const AxisDisplayOptions& value) { SetSecondaryYAxisDisplayOptions(value); return *this;}

    /**
     * <p>The label display options (grid line, range, scale, axis step) of a combo
     * chart's secondary y-axis (line) field well.</p>
     */
    inline ComboChartConfiguration& WithSecondaryYAxisDisplayOptions(AxisDisplayOptions&& value) { SetSecondaryYAxisDisplayOptions(std::move(value)); return *this;}


    /**
     * <p>The label options (label text, label visibility, and sort icon visibility) of
     * a combo chart's secondary y-axis(line) field well.</p>
     */
    inline const ChartAxisLabelOptions& GetSecondaryYAxisLabelOptions() const{ return m_secondaryYAxisLabelOptions; }

    /**
     * <p>The label options (label text, label visibility, and sort icon visibility) of
     * a combo chart's secondary y-axis(line) field well.</p>
     */
    inline bool SecondaryYAxisLabelOptionsHasBeenSet() const { return m_secondaryYAxisLabelOptionsHasBeenSet; }

    /**
     * <p>The label options (label text, label visibility, and sort icon visibility) of
     * a combo chart's secondary y-axis(line) field well.</p>
     */
    inline void SetSecondaryYAxisLabelOptions(const ChartAxisLabelOptions& value) { m_secondaryYAxisLabelOptionsHasBeenSet = true; m_secondaryYAxisLabelOptions = value; }

    /**
     * <p>The label options (label text, label visibility, and sort icon visibility) of
     * a combo chart's secondary y-axis(line) field well.</p>
     */
    inline void SetSecondaryYAxisLabelOptions(ChartAxisLabelOptions&& value) { m_secondaryYAxisLabelOptionsHasBeenSet = true; m_secondaryYAxisLabelOptions = std::move(value); }

    /**
     * <p>The label options (label text, label visibility, and sort icon visibility) of
     * a combo chart's secondary y-axis(line) field well.</p>
     */
    inline ComboChartConfiguration& WithSecondaryYAxisLabelOptions(const ChartAxisLabelOptions& value) { SetSecondaryYAxisLabelOptions(value); return *this;}

    /**
     * <p>The label options (label text, label visibility, and sort icon visibility) of
     * a combo chart's secondary y-axis(line) field well.</p>
     */
    inline ComboChartConfiguration& WithSecondaryYAxisLabelOptions(ChartAxisLabelOptions&& value) { SetSecondaryYAxisLabelOptions(std::move(value)); return *this;}


    /**
     * <p>The label options (label text, label visibility, and sort icon visibility) of
     * a combo chart's color field well.</p>
     */
    inline const ChartAxisLabelOptions& GetColorLabelOptions() const{ return m_colorLabelOptions; }

    /**
     * <p>The label options (label text, label visibility, and sort icon visibility) of
     * a combo chart's color field well.</p>
     */
    inline bool ColorLabelOptionsHasBeenSet() const { return m_colorLabelOptionsHasBeenSet; }

    /**
     * <p>The label options (label text, label visibility, and sort icon visibility) of
     * a combo chart's color field well.</p>
     */
    inline void SetColorLabelOptions(const ChartAxisLabelOptions& value) { m_colorLabelOptionsHasBeenSet = true; m_colorLabelOptions = value; }

    /**
     * <p>The label options (label text, label visibility, and sort icon visibility) of
     * a combo chart's color field well.</p>
     */
    inline void SetColorLabelOptions(ChartAxisLabelOptions&& value) { m_colorLabelOptionsHasBeenSet = true; m_colorLabelOptions = std::move(value); }

    /**
     * <p>The label options (label text, label visibility, and sort icon visibility) of
     * a combo chart's color field well.</p>
     */
    inline ComboChartConfiguration& WithColorLabelOptions(const ChartAxisLabelOptions& value) { SetColorLabelOptions(value); return *this;}

    /**
     * <p>The label options (label text, label visibility, and sort icon visibility) of
     * a combo chart's color field well.</p>
     */
    inline ComboChartConfiguration& WithColorLabelOptions(ChartAxisLabelOptions&& value) { SetColorLabelOptions(std::move(value)); return *this;}


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
    inline ComboChartConfiguration& WithLegend(const LegendOptions& value) { SetLegend(value); return *this;}

    /**
     * <p>The legend display setup of the visual.</p>
     */
    inline ComboChartConfiguration& WithLegend(LegendOptions&& value) { SetLegend(std::move(value)); return *this;}


    /**
     * <p>The options that determine if visual data labels are displayed.</p> <p>The
     * data label options for a bar in a combo chart.</p>
     */
    inline const DataLabelOptions& GetBarDataLabels() const{ return m_barDataLabels; }

    /**
     * <p>The options that determine if visual data labels are displayed.</p> <p>The
     * data label options for a bar in a combo chart.</p>
     */
    inline bool BarDataLabelsHasBeenSet() const { return m_barDataLabelsHasBeenSet; }

    /**
     * <p>The options that determine if visual data labels are displayed.</p> <p>The
     * data label options for a bar in a combo chart.</p>
     */
    inline void SetBarDataLabels(const DataLabelOptions& value) { m_barDataLabelsHasBeenSet = true; m_barDataLabels = value; }

    /**
     * <p>The options that determine if visual data labels are displayed.</p> <p>The
     * data label options for a bar in a combo chart.</p>
     */
    inline void SetBarDataLabels(DataLabelOptions&& value) { m_barDataLabelsHasBeenSet = true; m_barDataLabels = std::move(value); }

    /**
     * <p>The options that determine if visual data labels are displayed.</p> <p>The
     * data label options for a bar in a combo chart.</p>
     */
    inline ComboChartConfiguration& WithBarDataLabels(const DataLabelOptions& value) { SetBarDataLabels(value); return *this;}

    /**
     * <p>The options that determine if visual data labels are displayed.</p> <p>The
     * data label options for a bar in a combo chart.</p>
     */
    inline ComboChartConfiguration& WithBarDataLabels(DataLabelOptions&& value) { SetBarDataLabels(std::move(value)); return *this;}


    /**
     * <p>The options that determine if visual data labels are displayed.</p> <p>The
     * data label options for a line in a combo chart.</p>
     */
    inline const DataLabelOptions& GetLineDataLabels() const{ return m_lineDataLabels; }

    /**
     * <p>The options that determine if visual data labels are displayed.</p> <p>The
     * data label options for a line in a combo chart.</p>
     */
    inline bool LineDataLabelsHasBeenSet() const { return m_lineDataLabelsHasBeenSet; }

    /**
     * <p>The options that determine if visual data labels are displayed.</p> <p>The
     * data label options for a line in a combo chart.</p>
     */
    inline void SetLineDataLabels(const DataLabelOptions& value) { m_lineDataLabelsHasBeenSet = true; m_lineDataLabels = value; }

    /**
     * <p>The options that determine if visual data labels are displayed.</p> <p>The
     * data label options for a line in a combo chart.</p>
     */
    inline void SetLineDataLabels(DataLabelOptions&& value) { m_lineDataLabelsHasBeenSet = true; m_lineDataLabels = std::move(value); }

    /**
     * <p>The options that determine if visual data labels are displayed.</p> <p>The
     * data label options for a line in a combo chart.</p>
     */
    inline ComboChartConfiguration& WithLineDataLabels(const DataLabelOptions& value) { SetLineDataLabels(value); return *this;}

    /**
     * <p>The options that determine if visual data labels are displayed.</p> <p>The
     * data label options for a line in a combo chart.</p>
     */
    inline ComboChartConfiguration& WithLineDataLabels(DataLabelOptions&& value) { SetLineDataLabels(std::move(value)); return *this;}


    /**
     * <p>The legend display setup of the visual.</p>
     */
    inline const TooltipOptions& GetTooltip() const{ return m_tooltip; }

    /**
     * <p>The legend display setup of the visual.</p>
     */
    inline bool TooltipHasBeenSet() const { return m_tooltipHasBeenSet; }

    /**
     * <p>The legend display setup of the visual.</p>
     */
    inline void SetTooltip(const TooltipOptions& value) { m_tooltipHasBeenSet = true; m_tooltip = value; }

    /**
     * <p>The legend display setup of the visual.</p>
     */
    inline void SetTooltip(TooltipOptions&& value) { m_tooltipHasBeenSet = true; m_tooltip = std::move(value); }

    /**
     * <p>The legend display setup of the visual.</p>
     */
    inline ComboChartConfiguration& WithTooltip(const TooltipOptions& value) { SetTooltip(value); return *this;}

    /**
     * <p>The legend display setup of the visual.</p>
     */
    inline ComboChartConfiguration& WithTooltip(TooltipOptions&& value) { SetTooltip(std::move(value)); return *this;}


    /**
     * <p>The reference line setup of the visual.</p>
     */
    inline const Aws::Vector<ReferenceLine>& GetReferenceLines() const{ return m_referenceLines; }

    /**
     * <p>The reference line setup of the visual.</p>
     */
    inline bool ReferenceLinesHasBeenSet() const { return m_referenceLinesHasBeenSet; }

    /**
     * <p>The reference line setup of the visual.</p>
     */
    inline void SetReferenceLines(const Aws::Vector<ReferenceLine>& value) { m_referenceLinesHasBeenSet = true; m_referenceLines = value; }

    /**
     * <p>The reference line setup of the visual.</p>
     */
    inline void SetReferenceLines(Aws::Vector<ReferenceLine>&& value) { m_referenceLinesHasBeenSet = true; m_referenceLines = std::move(value); }

    /**
     * <p>The reference line setup of the visual.</p>
     */
    inline ComboChartConfiguration& WithReferenceLines(const Aws::Vector<ReferenceLine>& value) { SetReferenceLines(value); return *this;}

    /**
     * <p>The reference line setup of the visual.</p>
     */
    inline ComboChartConfiguration& WithReferenceLines(Aws::Vector<ReferenceLine>&& value) { SetReferenceLines(std::move(value)); return *this;}

    /**
     * <p>The reference line setup of the visual.</p>
     */
    inline ComboChartConfiguration& AddReferenceLines(const ReferenceLine& value) { m_referenceLinesHasBeenSet = true; m_referenceLines.push_back(value); return *this; }

    /**
     * <p>The reference line setup of the visual.</p>
     */
    inline ComboChartConfiguration& AddReferenceLines(ReferenceLine&& value) { m_referenceLinesHasBeenSet = true; m_referenceLines.push_back(std::move(value)); return *this; }


    /**
     * <p>The palette (chart color) display setup of the visual.</p>
     */
    inline const VisualPalette& GetVisualPalette() const{ return m_visualPalette; }

    /**
     * <p>The palette (chart color) display setup of the visual.</p>
     */
    inline bool VisualPaletteHasBeenSet() const { return m_visualPaletteHasBeenSet; }

    /**
     * <p>The palette (chart color) display setup of the visual.</p>
     */
    inline void SetVisualPalette(const VisualPalette& value) { m_visualPaletteHasBeenSet = true; m_visualPalette = value; }

    /**
     * <p>The palette (chart color) display setup of the visual.</p>
     */
    inline void SetVisualPalette(VisualPalette&& value) { m_visualPaletteHasBeenSet = true; m_visualPalette = std::move(value); }

    /**
     * <p>The palette (chart color) display setup of the visual.</p>
     */
    inline ComboChartConfiguration& WithVisualPalette(const VisualPalette& value) { SetVisualPalette(value); return *this;}

    /**
     * <p>The palette (chart color) display setup of the visual.</p>
     */
    inline ComboChartConfiguration& WithVisualPalette(VisualPalette&& value) { SetVisualPalette(std::move(value)); return *this;}

  private:

    ComboChartFieldWells m_fieldWells;
    bool m_fieldWellsHasBeenSet = false;

    ComboChartSortConfiguration m_sortConfiguration;
    bool m_sortConfigurationHasBeenSet = false;

    BarsArrangement m_barsArrangement;
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
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
