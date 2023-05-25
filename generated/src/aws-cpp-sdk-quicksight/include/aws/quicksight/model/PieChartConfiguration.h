/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/PieChartFieldWells.h>
#include <aws/quicksight/model/PieChartSortConfiguration.h>
#include <aws/quicksight/model/DonutOptions.h>
#include <aws/quicksight/model/SmallMultiplesOptions.h>
#include <aws/quicksight/model/ChartAxisLabelOptions.h>
#include <aws/quicksight/model/LegendOptions.h>
#include <aws/quicksight/model/DataLabelOptions.h>
#include <aws/quicksight/model/TooltipOptions.h>
#include <aws/quicksight/model/VisualPalette.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>The configuration of a pie chart.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/PieChartConfiguration">AWS
   * API Reference</a></p>
   */
  class PieChartConfiguration
  {
  public:
    AWS_QUICKSIGHT_API PieChartConfiguration();
    AWS_QUICKSIGHT_API PieChartConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API PieChartConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The field wells of the visual.</p>
     */
    inline const PieChartFieldWells& GetFieldWells() const{ return m_fieldWells; }

    /**
     * <p>The field wells of the visual.</p>
     */
    inline bool FieldWellsHasBeenSet() const { return m_fieldWellsHasBeenSet; }

    /**
     * <p>The field wells of the visual.</p>
     */
    inline void SetFieldWells(const PieChartFieldWells& value) { m_fieldWellsHasBeenSet = true; m_fieldWells = value; }

    /**
     * <p>The field wells of the visual.</p>
     */
    inline void SetFieldWells(PieChartFieldWells&& value) { m_fieldWellsHasBeenSet = true; m_fieldWells = std::move(value); }

    /**
     * <p>The field wells of the visual.</p>
     */
    inline PieChartConfiguration& WithFieldWells(const PieChartFieldWells& value) { SetFieldWells(value); return *this;}

    /**
     * <p>The field wells of the visual.</p>
     */
    inline PieChartConfiguration& WithFieldWells(PieChartFieldWells&& value) { SetFieldWells(std::move(value)); return *this;}


    /**
     * <p>The sort configuration of a pie chart.</p>
     */
    inline const PieChartSortConfiguration& GetSortConfiguration() const{ return m_sortConfiguration; }

    /**
     * <p>The sort configuration of a pie chart.</p>
     */
    inline bool SortConfigurationHasBeenSet() const { return m_sortConfigurationHasBeenSet; }

    /**
     * <p>The sort configuration of a pie chart.</p>
     */
    inline void SetSortConfiguration(const PieChartSortConfiguration& value) { m_sortConfigurationHasBeenSet = true; m_sortConfiguration = value; }

    /**
     * <p>The sort configuration of a pie chart.</p>
     */
    inline void SetSortConfiguration(PieChartSortConfiguration&& value) { m_sortConfigurationHasBeenSet = true; m_sortConfiguration = std::move(value); }

    /**
     * <p>The sort configuration of a pie chart.</p>
     */
    inline PieChartConfiguration& WithSortConfiguration(const PieChartSortConfiguration& value) { SetSortConfiguration(value); return *this;}

    /**
     * <p>The sort configuration of a pie chart.</p>
     */
    inline PieChartConfiguration& WithSortConfiguration(PieChartSortConfiguration&& value) { SetSortConfiguration(std::move(value)); return *this;}


    /**
     * <p>The options that determine the shape of the chart. This option determines
     * whether the chart is a pie chart or a donut chart.</p>
     */
    inline const DonutOptions& GetDonutOptions() const{ return m_donutOptions; }

    /**
     * <p>The options that determine the shape of the chart. This option determines
     * whether the chart is a pie chart or a donut chart.</p>
     */
    inline bool DonutOptionsHasBeenSet() const { return m_donutOptionsHasBeenSet; }

    /**
     * <p>The options that determine the shape of the chart. This option determines
     * whether the chart is a pie chart or a donut chart.</p>
     */
    inline void SetDonutOptions(const DonutOptions& value) { m_donutOptionsHasBeenSet = true; m_donutOptions = value; }

    /**
     * <p>The options that determine the shape of the chart. This option determines
     * whether the chart is a pie chart or a donut chart.</p>
     */
    inline void SetDonutOptions(DonutOptions&& value) { m_donutOptionsHasBeenSet = true; m_donutOptions = std::move(value); }

    /**
     * <p>The options that determine the shape of the chart. This option determines
     * whether the chart is a pie chart or a donut chart.</p>
     */
    inline PieChartConfiguration& WithDonutOptions(const DonutOptions& value) { SetDonutOptions(value); return *this;}

    /**
     * <p>The options that determine the shape of the chart. This option determines
     * whether the chart is a pie chart or a donut chart.</p>
     */
    inline PieChartConfiguration& WithDonutOptions(DonutOptions&& value) { SetDonutOptions(std::move(value)); return *this;}


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
    inline PieChartConfiguration& WithSmallMultiplesOptions(const SmallMultiplesOptions& value) { SetSmallMultiplesOptions(value); return *this;}

    /**
     * <p>The small multiples setup for the visual.</p>
     */
    inline PieChartConfiguration& WithSmallMultiplesOptions(SmallMultiplesOptions&& value) { SetSmallMultiplesOptions(std::move(value)); return *this;}


    /**
     * <p>The label options of the group/color that is displayed in a pie chart.</p>
     */
    inline const ChartAxisLabelOptions& GetCategoryLabelOptions() const{ return m_categoryLabelOptions; }

    /**
     * <p>The label options of the group/color that is displayed in a pie chart.</p>
     */
    inline bool CategoryLabelOptionsHasBeenSet() const { return m_categoryLabelOptionsHasBeenSet; }

    /**
     * <p>The label options of the group/color that is displayed in a pie chart.</p>
     */
    inline void SetCategoryLabelOptions(const ChartAxisLabelOptions& value) { m_categoryLabelOptionsHasBeenSet = true; m_categoryLabelOptions = value; }

    /**
     * <p>The label options of the group/color that is displayed in a pie chart.</p>
     */
    inline void SetCategoryLabelOptions(ChartAxisLabelOptions&& value) { m_categoryLabelOptionsHasBeenSet = true; m_categoryLabelOptions = std::move(value); }

    /**
     * <p>The label options of the group/color that is displayed in a pie chart.</p>
     */
    inline PieChartConfiguration& WithCategoryLabelOptions(const ChartAxisLabelOptions& value) { SetCategoryLabelOptions(value); return *this;}

    /**
     * <p>The label options of the group/color that is displayed in a pie chart.</p>
     */
    inline PieChartConfiguration& WithCategoryLabelOptions(ChartAxisLabelOptions&& value) { SetCategoryLabelOptions(std::move(value)); return *this;}


    /**
     * <p>The label options for the value that is displayed in a pie chart.</p>
     */
    inline const ChartAxisLabelOptions& GetValueLabelOptions() const{ return m_valueLabelOptions; }

    /**
     * <p>The label options for the value that is displayed in a pie chart.</p>
     */
    inline bool ValueLabelOptionsHasBeenSet() const { return m_valueLabelOptionsHasBeenSet; }

    /**
     * <p>The label options for the value that is displayed in a pie chart.</p>
     */
    inline void SetValueLabelOptions(const ChartAxisLabelOptions& value) { m_valueLabelOptionsHasBeenSet = true; m_valueLabelOptions = value; }

    /**
     * <p>The label options for the value that is displayed in a pie chart.</p>
     */
    inline void SetValueLabelOptions(ChartAxisLabelOptions&& value) { m_valueLabelOptionsHasBeenSet = true; m_valueLabelOptions = std::move(value); }

    /**
     * <p>The label options for the value that is displayed in a pie chart.</p>
     */
    inline PieChartConfiguration& WithValueLabelOptions(const ChartAxisLabelOptions& value) { SetValueLabelOptions(value); return *this;}

    /**
     * <p>The label options for the value that is displayed in a pie chart.</p>
     */
    inline PieChartConfiguration& WithValueLabelOptions(ChartAxisLabelOptions&& value) { SetValueLabelOptions(std::move(value)); return *this;}


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
    inline PieChartConfiguration& WithLegend(const LegendOptions& value) { SetLegend(value); return *this;}

    /**
     * <p>The legend display setup of the visual.</p>
     */
    inline PieChartConfiguration& WithLegend(LegendOptions&& value) { SetLegend(std::move(value)); return *this;}


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
    inline PieChartConfiguration& WithDataLabels(const DataLabelOptions& value) { SetDataLabels(value); return *this;}

    /**
     * <p>The options that determine if visual data labels are displayed.</p>
     */
    inline PieChartConfiguration& WithDataLabels(DataLabelOptions&& value) { SetDataLabels(std::move(value)); return *this;}


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
    inline PieChartConfiguration& WithTooltip(const TooltipOptions& value) { SetTooltip(value); return *this;}

    /**
     * <p>The tooltip display setup of the visual.</p>
     */
    inline PieChartConfiguration& WithTooltip(TooltipOptions&& value) { SetTooltip(std::move(value)); return *this;}


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
    inline PieChartConfiguration& WithVisualPalette(const VisualPalette& value) { SetVisualPalette(value); return *this;}

    /**
     * <p>The palette (chart color) display setup of the visual.</p>
     */
    inline PieChartConfiguration& WithVisualPalette(VisualPalette&& value) { SetVisualPalette(std::move(value)); return *this;}


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
    inline PieChartConfiguration& WithContributionAnalysisDefaults(const Aws::Vector<ContributionAnalysisDefault>& value) { SetContributionAnalysisDefaults(value); return *this;}

    /**
     * <p>The contribution analysis (anomaly configuration) setup of the visual.</p>
     */
    inline PieChartConfiguration& WithContributionAnalysisDefaults(Aws::Vector<ContributionAnalysisDefault>&& value) { SetContributionAnalysisDefaults(std::move(value)); return *this;}

    /**
     * <p>The contribution analysis (anomaly configuration) setup of the visual.</p>
     */
    inline PieChartConfiguration& AddContributionAnalysisDefaults(const ContributionAnalysisDefault& value) { m_contributionAnalysisDefaultsHasBeenSet = true; m_contributionAnalysisDefaults.push_back(value); return *this; }

    /**
     * <p>The contribution analysis (anomaly configuration) setup of the visual.</p>
     */
    inline PieChartConfiguration& AddContributionAnalysisDefaults(ContributionAnalysisDefault&& value) { m_contributionAnalysisDefaultsHasBeenSet = true; m_contributionAnalysisDefaults.push_back(std::move(value)); return *this; }

  private:

    PieChartFieldWells m_fieldWells;
    bool m_fieldWellsHasBeenSet = false;

    PieChartSortConfiguration m_sortConfiguration;
    bool m_sortConfigurationHasBeenSet = false;

    DonutOptions m_donutOptions;
    bool m_donutOptionsHasBeenSet = false;

    SmallMultiplesOptions m_smallMultiplesOptions;
    bool m_smallMultiplesOptionsHasBeenSet = false;

    ChartAxisLabelOptions m_categoryLabelOptions;
    bool m_categoryLabelOptionsHasBeenSet = false;

    ChartAxisLabelOptions m_valueLabelOptions;
    bool m_valueLabelOptionsHasBeenSet = false;

    LegendOptions m_legend;
    bool m_legendHasBeenSet = false;

    DataLabelOptions m_dataLabels;
    bool m_dataLabelsHasBeenSet = false;

    TooltipOptions m_tooltip;
    bool m_tooltipHasBeenSet = false;

    VisualPalette m_visualPalette;
    bool m_visualPaletteHasBeenSet = false;

    Aws::Vector<ContributionAnalysisDefault> m_contributionAnalysisDefaults;
    bool m_contributionAnalysisDefaultsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
