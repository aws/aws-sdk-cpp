/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/BarChartFieldWells.h>
#include <aws/quicksight/model/BarChartSortConfiguration.h>
#include <aws/quicksight/model/BarChartOrientation.h>
#include <aws/quicksight/model/BarsArrangement.h>
#include <aws/quicksight/model/VisualPalette.h>
#include <aws/quicksight/model/SmallMultiplesOptions.h>
#include <aws/quicksight/model/AxisDisplayOptions.h>
#include <aws/quicksight/model/ChartAxisLabelOptions.h>
#include <aws/quicksight/model/LegendOptions.h>
#include <aws/quicksight/model/DataLabelOptions.h>
#include <aws/quicksight/model/TooltipOptions.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/ReferenceLine.h>
#include <aws/quicksight/model/ContributionAnalysisDefault.h>
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
   * <p>The configuration of a <code>BarChartVisual</code>.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/BarChartConfiguration">AWS
   * API Reference</a></p>
   */
  class BarChartConfiguration
  {
  public:
    AWS_QUICKSIGHT_API BarChartConfiguration();
    AWS_QUICKSIGHT_API BarChartConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API BarChartConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The field wells of the visual.</p>
     */
    inline const BarChartFieldWells& GetFieldWells() const{ return m_fieldWells; }

    /**
     * <p>The field wells of the visual.</p>
     */
    inline bool FieldWellsHasBeenSet() const { return m_fieldWellsHasBeenSet; }

    /**
     * <p>The field wells of the visual.</p>
     */
    inline void SetFieldWells(const BarChartFieldWells& value) { m_fieldWellsHasBeenSet = true; m_fieldWells = value; }

    /**
     * <p>The field wells of the visual.</p>
     */
    inline void SetFieldWells(BarChartFieldWells&& value) { m_fieldWellsHasBeenSet = true; m_fieldWells = std::move(value); }

    /**
     * <p>The field wells of the visual.</p>
     */
    inline BarChartConfiguration& WithFieldWells(const BarChartFieldWells& value) { SetFieldWells(value); return *this;}

    /**
     * <p>The field wells of the visual.</p>
     */
    inline BarChartConfiguration& WithFieldWells(BarChartFieldWells&& value) { SetFieldWells(std::move(value)); return *this;}


    /**
     * <p>The sort configuration of a <code>BarChartVisual</code>.</p>
     */
    inline const BarChartSortConfiguration& GetSortConfiguration() const{ return m_sortConfiguration; }

    /**
     * <p>The sort configuration of a <code>BarChartVisual</code>.</p>
     */
    inline bool SortConfigurationHasBeenSet() const { return m_sortConfigurationHasBeenSet; }

    /**
     * <p>The sort configuration of a <code>BarChartVisual</code>.</p>
     */
    inline void SetSortConfiguration(const BarChartSortConfiguration& value) { m_sortConfigurationHasBeenSet = true; m_sortConfiguration = value; }

    /**
     * <p>The sort configuration of a <code>BarChartVisual</code>.</p>
     */
    inline void SetSortConfiguration(BarChartSortConfiguration&& value) { m_sortConfigurationHasBeenSet = true; m_sortConfiguration = std::move(value); }

    /**
     * <p>The sort configuration of a <code>BarChartVisual</code>.</p>
     */
    inline BarChartConfiguration& WithSortConfiguration(const BarChartSortConfiguration& value) { SetSortConfiguration(value); return *this;}

    /**
     * <p>The sort configuration of a <code>BarChartVisual</code>.</p>
     */
    inline BarChartConfiguration& WithSortConfiguration(BarChartSortConfiguration&& value) { SetSortConfiguration(std::move(value)); return *this;}


    /**
     * <p>The orientation of the bars in a bar chart visual. There are two valid values
     * in this structure:</p> <ul> <li> <p> <code>HORIZONTAL</code>: Used for charts
     * that have horizontal bars. Visuals that use this value are horizontal bar
     * charts, horizontal stacked bar charts, and horizontal stacked 100% bar
     * charts.</p> </li> <li> <p> <code>VERTICAL</code>: Used for charts that have
     * vertical bars. Visuals that use this value are vertical bar charts, vertical
     * stacked bar charts, and vertical stacked 100% bar charts.</p> </li> </ul>
     */
    inline const BarChartOrientation& GetOrientation() const{ return m_orientation; }

    /**
     * <p>The orientation of the bars in a bar chart visual. There are two valid values
     * in this structure:</p> <ul> <li> <p> <code>HORIZONTAL</code>: Used for charts
     * that have horizontal bars. Visuals that use this value are horizontal bar
     * charts, horizontal stacked bar charts, and horizontal stacked 100% bar
     * charts.</p> </li> <li> <p> <code>VERTICAL</code>: Used for charts that have
     * vertical bars. Visuals that use this value are vertical bar charts, vertical
     * stacked bar charts, and vertical stacked 100% bar charts.</p> </li> </ul>
     */
    inline bool OrientationHasBeenSet() const { return m_orientationHasBeenSet; }

    /**
     * <p>The orientation of the bars in a bar chart visual. There are two valid values
     * in this structure:</p> <ul> <li> <p> <code>HORIZONTAL</code>: Used for charts
     * that have horizontal bars. Visuals that use this value are horizontal bar
     * charts, horizontal stacked bar charts, and horizontal stacked 100% bar
     * charts.</p> </li> <li> <p> <code>VERTICAL</code>: Used for charts that have
     * vertical bars. Visuals that use this value are vertical bar charts, vertical
     * stacked bar charts, and vertical stacked 100% bar charts.</p> </li> </ul>
     */
    inline void SetOrientation(const BarChartOrientation& value) { m_orientationHasBeenSet = true; m_orientation = value; }

    /**
     * <p>The orientation of the bars in a bar chart visual. There are two valid values
     * in this structure:</p> <ul> <li> <p> <code>HORIZONTAL</code>: Used for charts
     * that have horizontal bars. Visuals that use this value are horizontal bar
     * charts, horizontal stacked bar charts, and horizontal stacked 100% bar
     * charts.</p> </li> <li> <p> <code>VERTICAL</code>: Used for charts that have
     * vertical bars. Visuals that use this value are vertical bar charts, vertical
     * stacked bar charts, and vertical stacked 100% bar charts.</p> </li> </ul>
     */
    inline void SetOrientation(BarChartOrientation&& value) { m_orientationHasBeenSet = true; m_orientation = std::move(value); }

    /**
     * <p>The orientation of the bars in a bar chart visual. There are two valid values
     * in this structure:</p> <ul> <li> <p> <code>HORIZONTAL</code>: Used for charts
     * that have horizontal bars. Visuals that use this value are horizontal bar
     * charts, horizontal stacked bar charts, and horizontal stacked 100% bar
     * charts.</p> </li> <li> <p> <code>VERTICAL</code>: Used for charts that have
     * vertical bars. Visuals that use this value are vertical bar charts, vertical
     * stacked bar charts, and vertical stacked 100% bar charts.</p> </li> </ul>
     */
    inline BarChartConfiguration& WithOrientation(const BarChartOrientation& value) { SetOrientation(value); return *this;}

    /**
     * <p>The orientation of the bars in a bar chart visual. There are two valid values
     * in this structure:</p> <ul> <li> <p> <code>HORIZONTAL</code>: Used for charts
     * that have horizontal bars. Visuals that use this value are horizontal bar
     * charts, horizontal stacked bar charts, and horizontal stacked 100% bar
     * charts.</p> </li> <li> <p> <code>VERTICAL</code>: Used for charts that have
     * vertical bars. Visuals that use this value are vertical bar charts, vertical
     * stacked bar charts, and vertical stacked 100% bar charts.</p> </li> </ul>
     */
    inline BarChartConfiguration& WithOrientation(BarChartOrientation&& value) { SetOrientation(std::move(value)); return *this;}


    /**
     * <p>Determines the arrangement of the bars. The orientation and arrangement of
     * bars determine the type of bar that is used in the visual.</p>
     */
    inline const BarsArrangement& GetBarsArrangement() const{ return m_barsArrangement; }

    /**
     * <p>Determines the arrangement of the bars. The orientation and arrangement of
     * bars determine the type of bar that is used in the visual.</p>
     */
    inline bool BarsArrangementHasBeenSet() const { return m_barsArrangementHasBeenSet; }

    /**
     * <p>Determines the arrangement of the bars. The orientation and arrangement of
     * bars determine the type of bar that is used in the visual.</p>
     */
    inline void SetBarsArrangement(const BarsArrangement& value) { m_barsArrangementHasBeenSet = true; m_barsArrangement = value; }

    /**
     * <p>Determines the arrangement of the bars. The orientation and arrangement of
     * bars determine the type of bar that is used in the visual.</p>
     */
    inline void SetBarsArrangement(BarsArrangement&& value) { m_barsArrangementHasBeenSet = true; m_barsArrangement = std::move(value); }

    /**
     * <p>Determines the arrangement of the bars. The orientation and arrangement of
     * bars determine the type of bar that is used in the visual.</p>
     */
    inline BarChartConfiguration& WithBarsArrangement(const BarsArrangement& value) { SetBarsArrangement(value); return *this;}

    /**
     * <p>Determines the arrangement of the bars. The orientation and arrangement of
     * bars determine the type of bar that is used in the visual.</p>
     */
    inline BarChartConfiguration& WithBarsArrangement(BarsArrangement&& value) { SetBarsArrangement(std::move(value)); return *this;}


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
    inline BarChartConfiguration& WithVisualPalette(const VisualPalette& value) { SetVisualPalette(value); return *this;}

    /**
     * <p>The palette (chart color) display setup of the visual.</p>
     */
    inline BarChartConfiguration& WithVisualPalette(VisualPalette&& value) { SetVisualPalette(std::move(value)); return *this;}


    /**
     * <p>The small multiples setup for the visual.</p>
     */
    inline const SmallMultiplesOptions& GetSmallMultiplesOptions() const{ return m_smallMultiplesOptions; }

    /**
     * <p>The small multiples setup for the visual.</p>
     */
    inline bool SmallMultiplesOptionsHasBeenSet() const { return m_smallMultiplesOptionsHasBeenSet; }

    /**
     * <p>The small multiples setup for the visual.</p>
     */
    inline void SetSmallMultiplesOptions(const SmallMultiplesOptions& value) { m_smallMultiplesOptionsHasBeenSet = true; m_smallMultiplesOptions = value; }

    /**
     * <p>The small multiples setup for the visual.</p>
     */
    inline void SetSmallMultiplesOptions(SmallMultiplesOptions&& value) { m_smallMultiplesOptionsHasBeenSet = true; m_smallMultiplesOptions = std::move(value); }

    /**
     * <p>The small multiples setup for the visual.</p>
     */
    inline BarChartConfiguration& WithSmallMultiplesOptions(const SmallMultiplesOptions& value) { SetSmallMultiplesOptions(value); return *this;}

    /**
     * <p>The small multiples setup for the visual.</p>
     */
    inline BarChartConfiguration& WithSmallMultiplesOptions(SmallMultiplesOptions&& value) { SetSmallMultiplesOptions(std::move(value)); return *this;}


    /**
     * <p>The label display options (grid line, range, scale, axis step) for bar chart
     * category.</p>
     */
    inline const AxisDisplayOptions& GetCategoryAxis() const{ return m_categoryAxis; }

    /**
     * <p>The label display options (grid line, range, scale, axis step) for bar chart
     * category.</p>
     */
    inline bool CategoryAxisHasBeenSet() const { return m_categoryAxisHasBeenSet; }

    /**
     * <p>The label display options (grid line, range, scale, axis step) for bar chart
     * category.</p>
     */
    inline void SetCategoryAxis(const AxisDisplayOptions& value) { m_categoryAxisHasBeenSet = true; m_categoryAxis = value; }

    /**
     * <p>The label display options (grid line, range, scale, axis step) for bar chart
     * category.</p>
     */
    inline void SetCategoryAxis(AxisDisplayOptions&& value) { m_categoryAxisHasBeenSet = true; m_categoryAxis = std::move(value); }

    /**
     * <p>The label display options (grid line, range, scale, axis step) for bar chart
     * category.</p>
     */
    inline BarChartConfiguration& WithCategoryAxis(const AxisDisplayOptions& value) { SetCategoryAxis(value); return *this;}

    /**
     * <p>The label display options (grid line, range, scale, axis step) for bar chart
     * category.</p>
     */
    inline BarChartConfiguration& WithCategoryAxis(AxisDisplayOptions&& value) { SetCategoryAxis(std::move(value)); return *this;}


    /**
     * <p>The label options (label text, label visibility and sort icon visibility) for
     * a bar chart.</p>
     */
    inline const ChartAxisLabelOptions& GetCategoryLabelOptions() const{ return m_categoryLabelOptions; }

    /**
     * <p>The label options (label text, label visibility and sort icon visibility) for
     * a bar chart.</p>
     */
    inline bool CategoryLabelOptionsHasBeenSet() const { return m_categoryLabelOptionsHasBeenSet; }

    /**
     * <p>The label options (label text, label visibility and sort icon visibility) for
     * a bar chart.</p>
     */
    inline void SetCategoryLabelOptions(const ChartAxisLabelOptions& value) { m_categoryLabelOptionsHasBeenSet = true; m_categoryLabelOptions = value; }

    /**
     * <p>The label options (label text, label visibility and sort icon visibility) for
     * a bar chart.</p>
     */
    inline void SetCategoryLabelOptions(ChartAxisLabelOptions&& value) { m_categoryLabelOptionsHasBeenSet = true; m_categoryLabelOptions = std::move(value); }

    /**
     * <p>The label options (label text, label visibility and sort icon visibility) for
     * a bar chart.</p>
     */
    inline BarChartConfiguration& WithCategoryLabelOptions(const ChartAxisLabelOptions& value) { SetCategoryLabelOptions(value); return *this;}

    /**
     * <p>The label options (label text, label visibility and sort icon visibility) for
     * a bar chart.</p>
     */
    inline BarChartConfiguration& WithCategoryLabelOptions(ChartAxisLabelOptions&& value) { SetCategoryLabelOptions(std::move(value)); return *this;}


    /**
     * <p>The label display options (grid line, range, scale, axis step) for a bar
     * chart value.</p>
     */
    inline const AxisDisplayOptions& GetValueAxis() const{ return m_valueAxis; }

    /**
     * <p>The label display options (grid line, range, scale, axis step) for a bar
     * chart value.</p>
     */
    inline bool ValueAxisHasBeenSet() const { return m_valueAxisHasBeenSet; }

    /**
     * <p>The label display options (grid line, range, scale, axis step) for a bar
     * chart value.</p>
     */
    inline void SetValueAxis(const AxisDisplayOptions& value) { m_valueAxisHasBeenSet = true; m_valueAxis = value; }

    /**
     * <p>The label display options (grid line, range, scale, axis step) for a bar
     * chart value.</p>
     */
    inline void SetValueAxis(AxisDisplayOptions&& value) { m_valueAxisHasBeenSet = true; m_valueAxis = std::move(value); }

    /**
     * <p>The label display options (grid line, range, scale, axis step) for a bar
     * chart value.</p>
     */
    inline BarChartConfiguration& WithValueAxis(const AxisDisplayOptions& value) { SetValueAxis(value); return *this;}

    /**
     * <p>The label display options (grid line, range, scale, axis step) for a bar
     * chart value.</p>
     */
    inline BarChartConfiguration& WithValueAxis(AxisDisplayOptions&& value) { SetValueAxis(std::move(value)); return *this;}


    /**
     * <p>The label options (label text, label visibility and sort icon visibility) for
     * a bar chart value.</p>
     */
    inline const ChartAxisLabelOptions& GetValueLabelOptions() const{ return m_valueLabelOptions; }

    /**
     * <p>The label options (label text, label visibility and sort icon visibility) for
     * a bar chart value.</p>
     */
    inline bool ValueLabelOptionsHasBeenSet() const { return m_valueLabelOptionsHasBeenSet; }

    /**
     * <p>The label options (label text, label visibility and sort icon visibility) for
     * a bar chart value.</p>
     */
    inline void SetValueLabelOptions(const ChartAxisLabelOptions& value) { m_valueLabelOptionsHasBeenSet = true; m_valueLabelOptions = value; }

    /**
     * <p>The label options (label text, label visibility and sort icon visibility) for
     * a bar chart value.</p>
     */
    inline void SetValueLabelOptions(ChartAxisLabelOptions&& value) { m_valueLabelOptionsHasBeenSet = true; m_valueLabelOptions = std::move(value); }

    /**
     * <p>The label options (label text, label visibility and sort icon visibility) for
     * a bar chart value.</p>
     */
    inline BarChartConfiguration& WithValueLabelOptions(const ChartAxisLabelOptions& value) { SetValueLabelOptions(value); return *this;}

    /**
     * <p>The label options (label text, label visibility and sort icon visibility) for
     * a bar chart value.</p>
     */
    inline BarChartConfiguration& WithValueLabelOptions(ChartAxisLabelOptions&& value) { SetValueLabelOptions(std::move(value)); return *this;}


    /**
     * <p>The label options (label text, label visibility and sort icon visibility) for
     * a color that is used in a bar chart.</p>
     */
    inline const ChartAxisLabelOptions& GetColorLabelOptions() const{ return m_colorLabelOptions; }

    /**
     * <p>The label options (label text, label visibility and sort icon visibility) for
     * a color that is used in a bar chart.</p>
     */
    inline bool ColorLabelOptionsHasBeenSet() const { return m_colorLabelOptionsHasBeenSet; }

    /**
     * <p>The label options (label text, label visibility and sort icon visibility) for
     * a color that is used in a bar chart.</p>
     */
    inline void SetColorLabelOptions(const ChartAxisLabelOptions& value) { m_colorLabelOptionsHasBeenSet = true; m_colorLabelOptions = value; }

    /**
     * <p>The label options (label text, label visibility and sort icon visibility) for
     * a color that is used in a bar chart.</p>
     */
    inline void SetColorLabelOptions(ChartAxisLabelOptions&& value) { m_colorLabelOptionsHasBeenSet = true; m_colorLabelOptions = std::move(value); }

    /**
     * <p>The label options (label text, label visibility and sort icon visibility) for
     * a color that is used in a bar chart.</p>
     */
    inline BarChartConfiguration& WithColorLabelOptions(const ChartAxisLabelOptions& value) { SetColorLabelOptions(value); return *this;}

    /**
     * <p>The label options (label text, label visibility and sort icon visibility) for
     * a color that is used in a bar chart.</p>
     */
    inline BarChartConfiguration& WithColorLabelOptions(ChartAxisLabelOptions&& value) { SetColorLabelOptions(std::move(value)); return *this;}


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
    inline BarChartConfiguration& WithLegend(const LegendOptions& value) { SetLegend(value); return *this;}

    /**
     * <p>The legend display setup of the visual.</p>
     */
    inline BarChartConfiguration& WithLegend(LegendOptions&& value) { SetLegend(std::move(value)); return *this;}


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
    inline BarChartConfiguration& WithDataLabels(const DataLabelOptions& value) { SetDataLabels(value); return *this;}

    /**
     * <p>The options that determine if visual data labels are displayed.</p>
     */
    inline BarChartConfiguration& WithDataLabels(DataLabelOptions&& value) { SetDataLabels(std::move(value)); return *this;}


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
    inline BarChartConfiguration& WithTooltip(const TooltipOptions& value) { SetTooltip(value); return *this;}

    /**
     * <p>The tooltip display setup of the visual.</p>
     */
    inline BarChartConfiguration& WithTooltip(TooltipOptions&& value) { SetTooltip(std::move(value)); return *this;}


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
    inline BarChartConfiguration& WithReferenceLines(const Aws::Vector<ReferenceLine>& value) { SetReferenceLines(value); return *this;}

    /**
     * <p>The reference line setup of the visual.</p>
     */
    inline BarChartConfiguration& WithReferenceLines(Aws::Vector<ReferenceLine>&& value) { SetReferenceLines(std::move(value)); return *this;}

    /**
     * <p>The reference line setup of the visual.</p>
     */
    inline BarChartConfiguration& AddReferenceLines(const ReferenceLine& value) { m_referenceLinesHasBeenSet = true; m_referenceLines.push_back(value); return *this; }

    /**
     * <p>The reference line setup of the visual.</p>
     */
    inline BarChartConfiguration& AddReferenceLines(ReferenceLine&& value) { m_referenceLinesHasBeenSet = true; m_referenceLines.push_back(std::move(value)); return *this; }


    /**
     * <p>The contribution analysis (anomaly configuration) setup of the visual.</p>
     */
    inline const Aws::Vector<ContributionAnalysisDefault>& GetContributionAnalysisDefaults() const{ return m_contributionAnalysisDefaults; }

    /**
     * <p>The contribution analysis (anomaly configuration) setup of the visual.</p>
     */
    inline bool ContributionAnalysisDefaultsHasBeenSet() const { return m_contributionAnalysisDefaultsHasBeenSet; }

    /**
     * <p>The contribution analysis (anomaly configuration) setup of the visual.</p>
     */
    inline void SetContributionAnalysisDefaults(const Aws::Vector<ContributionAnalysisDefault>& value) { m_contributionAnalysisDefaultsHasBeenSet = true; m_contributionAnalysisDefaults = value; }

    /**
     * <p>The contribution analysis (anomaly configuration) setup of the visual.</p>
     */
    inline void SetContributionAnalysisDefaults(Aws::Vector<ContributionAnalysisDefault>&& value) { m_contributionAnalysisDefaultsHasBeenSet = true; m_contributionAnalysisDefaults = std::move(value); }

    /**
     * <p>The contribution analysis (anomaly configuration) setup of the visual.</p>
     */
    inline BarChartConfiguration& WithContributionAnalysisDefaults(const Aws::Vector<ContributionAnalysisDefault>& value) { SetContributionAnalysisDefaults(value); return *this;}

    /**
     * <p>The contribution analysis (anomaly configuration) setup of the visual.</p>
     */
    inline BarChartConfiguration& WithContributionAnalysisDefaults(Aws::Vector<ContributionAnalysisDefault>&& value) { SetContributionAnalysisDefaults(std::move(value)); return *this;}

    /**
     * <p>The contribution analysis (anomaly configuration) setup of the visual.</p>
     */
    inline BarChartConfiguration& AddContributionAnalysisDefaults(const ContributionAnalysisDefault& value) { m_contributionAnalysisDefaultsHasBeenSet = true; m_contributionAnalysisDefaults.push_back(value); return *this; }

    /**
     * <p>The contribution analysis (anomaly configuration) setup of the visual.</p>
     */
    inline BarChartConfiguration& AddContributionAnalysisDefaults(ContributionAnalysisDefault&& value) { m_contributionAnalysisDefaultsHasBeenSet = true; m_contributionAnalysisDefaults.push_back(std::move(value)); return *this; }

  private:

    BarChartFieldWells m_fieldWells;
    bool m_fieldWellsHasBeenSet = false;

    BarChartSortConfiguration m_sortConfiguration;
    bool m_sortConfigurationHasBeenSet = false;

    BarChartOrientation m_orientation;
    bool m_orientationHasBeenSet = false;

    BarsArrangement m_barsArrangement;
    bool m_barsArrangementHasBeenSet = false;

    VisualPalette m_visualPalette;
    bool m_visualPaletteHasBeenSet = false;

    SmallMultiplesOptions m_smallMultiplesOptions;
    bool m_smallMultiplesOptionsHasBeenSet = false;

    AxisDisplayOptions m_categoryAxis;
    bool m_categoryAxisHasBeenSet = false;

    ChartAxisLabelOptions m_categoryLabelOptions;
    bool m_categoryLabelOptionsHasBeenSet = false;

    AxisDisplayOptions m_valueAxis;
    bool m_valueAxisHasBeenSet = false;

    ChartAxisLabelOptions m_valueLabelOptions;
    bool m_valueLabelOptionsHasBeenSet = false;

    ChartAxisLabelOptions m_colorLabelOptions;
    bool m_colorLabelOptionsHasBeenSet = false;

    LegendOptions m_legend;
    bool m_legendHasBeenSet = false;

    DataLabelOptions m_dataLabels;
    bool m_dataLabelsHasBeenSet = false;

    TooltipOptions m_tooltip;
    bool m_tooltipHasBeenSet = false;

    Aws::Vector<ReferenceLine> m_referenceLines;
    bool m_referenceLinesHasBeenSet = false;

    Aws::Vector<ContributionAnalysisDefault> m_contributionAnalysisDefaults;
    bool m_contributionAnalysisDefaultsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
