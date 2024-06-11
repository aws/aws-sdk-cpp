/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/LineChartFieldWells.h>
#include <aws/quicksight/model/LineChartSortConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/LineChartType.h>
#include <aws/quicksight/model/SmallMultiplesOptions.h>
#include <aws/quicksight/model/AxisDisplayOptions.h>
#include <aws/quicksight/model/ChartAxisLabelOptions.h>
#include <aws/quicksight/model/LineSeriesAxisDisplayOptions.h>
#include <aws/quicksight/model/SingleAxisOptions.h>
#include <aws/quicksight/model/LineChartDefaultSeriesSettings.h>
#include <aws/quicksight/model/LegendOptions.h>
#include <aws/quicksight/model/DataLabelOptions.h>
#include <aws/quicksight/model/TooltipOptions.h>
#include <aws/quicksight/model/VisualPalette.h>
#include <aws/quicksight/model/VisualInteractionOptions.h>
#include <aws/quicksight/model/ForecastConfiguration.h>
#include <aws/quicksight/model/SeriesItem.h>
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
   * <p>The configuration of a line chart.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/LineChartConfiguration">AWS
   * API Reference</a></p>
   */
  class LineChartConfiguration
  {
  public:
    AWS_QUICKSIGHT_API LineChartConfiguration();
    AWS_QUICKSIGHT_API LineChartConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API LineChartConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The field well configuration of a line chart.</p>
     */
    inline const LineChartFieldWells& GetFieldWells() const{ return m_fieldWells; }
    inline bool FieldWellsHasBeenSet() const { return m_fieldWellsHasBeenSet; }
    inline void SetFieldWells(const LineChartFieldWells& value) { m_fieldWellsHasBeenSet = true; m_fieldWells = value; }
    inline void SetFieldWells(LineChartFieldWells&& value) { m_fieldWellsHasBeenSet = true; m_fieldWells = std::move(value); }
    inline LineChartConfiguration& WithFieldWells(const LineChartFieldWells& value) { SetFieldWells(value); return *this;}
    inline LineChartConfiguration& WithFieldWells(LineChartFieldWells&& value) { SetFieldWells(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sort configuration of a line chart.</p>
     */
    inline const LineChartSortConfiguration& GetSortConfiguration() const{ return m_sortConfiguration; }
    inline bool SortConfigurationHasBeenSet() const { return m_sortConfigurationHasBeenSet; }
    inline void SetSortConfiguration(const LineChartSortConfiguration& value) { m_sortConfigurationHasBeenSet = true; m_sortConfiguration = value; }
    inline void SetSortConfiguration(LineChartSortConfiguration&& value) { m_sortConfigurationHasBeenSet = true; m_sortConfiguration = std::move(value); }
    inline LineChartConfiguration& WithSortConfiguration(const LineChartSortConfiguration& value) { SetSortConfiguration(value); return *this;}
    inline LineChartConfiguration& WithSortConfiguration(LineChartSortConfiguration&& value) { SetSortConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The forecast configuration of a line chart.</p>
     */
    inline const Aws::Vector<ForecastConfiguration>& GetForecastConfigurations() const{ return m_forecastConfigurations; }
    inline bool ForecastConfigurationsHasBeenSet() const { return m_forecastConfigurationsHasBeenSet; }
    inline void SetForecastConfigurations(const Aws::Vector<ForecastConfiguration>& value) { m_forecastConfigurationsHasBeenSet = true; m_forecastConfigurations = value; }
    inline void SetForecastConfigurations(Aws::Vector<ForecastConfiguration>&& value) { m_forecastConfigurationsHasBeenSet = true; m_forecastConfigurations = std::move(value); }
    inline LineChartConfiguration& WithForecastConfigurations(const Aws::Vector<ForecastConfiguration>& value) { SetForecastConfigurations(value); return *this;}
    inline LineChartConfiguration& WithForecastConfigurations(Aws::Vector<ForecastConfiguration>&& value) { SetForecastConfigurations(std::move(value)); return *this;}
    inline LineChartConfiguration& AddForecastConfigurations(const ForecastConfiguration& value) { m_forecastConfigurationsHasBeenSet = true; m_forecastConfigurations.push_back(value); return *this; }
    inline LineChartConfiguration& AddForecastConfigurations(ForecastConfiguration&& value) { m_forecastConfigurationsHasBeenSet = true; m_forecastConfigurations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Determines the type of the line chart.</p>
     */
    inline const LineChartType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const LineChartType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(LineChartType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline LineChartConfiguration& WithType(const LineChartType& value) { SetType(value); return *this;}
    inline LineChartConfiguration& WithType(LineChartType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The small multiples setup for the visual.</p>
     */
    inline const SmallMultiplesOptions& GetSmallMultiplesOptions() const{ return m_smallMultiplesOptions; }
    inline bool SmallMultiplesOptionsHasBeenSet() const { return m_smallMultiplesOptionsHasBeenSet; }
    inline void SetSmallMultiplesOptions(const SmallMultiplesOptions& value) { m_smallMultiplesOptionsHasBeenSet = true; m_smallMultiplesOptions = value; }
    inline void SetSmallMultiplesOptions(SmallMultiplesOptions&& value) { m_smallMultiplesOptionsHasBeenSet = true; m_smallMultiplesOptions = std::move(value); }
    inline LineChartConfiguration& WithSmallMultiplesOptions(const SmallMultiplesOptions& value) { SetSmallMultiplesOptions(value); return *this;}
    inline LineChartConfiguration& WithSmallMultiplesOptions(SmallMultiplesOptions&& value) { SetSmallMultiplesOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options that determine the presentation of the x-axis.</p>
     */
    inline const AxisDisplayOptions& GetXAxisDisplayOptions() const{ return m_xAxisDisplayOptions; }
    inline bool XAxisDisplayOptionsHasBeenSet() const { return m_xAxisDisplayOptionsHasBeenSet; }
    inline void SetXAxisDisplayOptions(const AxisDisplayOptions& value) { m_xAxisDisplayOptionsHasBeenSet = true; m_xAxisDisplayOptions = value; }
    inline void SetXAxisDisplayOptions(AxisDisplayOptions&& value) { m_xAxisDisplayOptionsHasBeenSet = true; m_xAxisDisplayOptions = std::move(value); }
    inline LineChartConfiguration& WithXAxisDisplayOptions(const AxisDisplayOptions& value) { SetXAxisDisplayOptions(value); return *this;}
    inline LineChartConfiguration& WithXAxisDisplayOptions(AxisDisplayOptions&& value) { SetXAxisDisplayOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options that determine the presentation of the x-axis label.</p>
     */
    inline const ChartAxisLabelOptions& GetXAxisLabelOptions() const{ return m_xAxisLabelOptions; }
    inline bool XAxisLabelOptionsHasBeenSet() const { return m_xAxisLabelOptionsHasBeenSet; }
    inline void SetXAxisLabelOptions(const ChartAxisLabelOptions& value) { m_xAxisLabelOptionsHasBeenSet = true; m_xAxisLabelOptions = value; }
    inline void SetXAxisLabelOptions(ChartAxisLabelOptions&& value) { m_xAxisLabelOptionsHasBeenSet = true; m_xAxisLabelOptions = std::move(value); }
    inline LineChartConfiguration& WithXAxisLabelOptions(const ChartAxisLabelOptions& value) { SetXAxisLabelOptions(value); return *this;}
    inline LineChartConfiguration& WithXAxisLabelOptions(ChartAxisLabelOptions&& value) { SetXAxisLabelOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The series axis configuration of a line chart.</p>
     */
    inline const LineSeriesAxisDisplayOptions& GetPrimaryYAxisDisplayOptions() const{ return m_primaryYAxisDisplayOptions; }
    inline bool PrimaryYAxisDisplayOptionsHasBeenSet() const { return m_primaryYAxisDisplayOptionsHasBeenSet; }
    inline void SetPrimaryYAxisDisplayOptions(const LineSeriesAxisDisplayOptions& value) { m_primaryYAxisDisplayOptionsHasBeenSet = true; m_primaryYAxisDisplayOptions = value; }
    inline void SetPrimaryYAxisDisplayOptions(LineSeriesAxisDisplayOptions&& value) { m_primaryYAxisDisplayOptionsHasBeenSet = true; m_primaryYAxisDisplayOptions = std::move(value); }
    inline LineChartConfiguration& WithPrimaryYAxisDisplayOptions(const LineSeriesAxisDisplayOptions& value) { SetPrimaryYAxisDisplayOptions(value); return *this;}
    inline LineChartConfiguration& WithPrimaryYAxisDisplayOptions(LineSeriesAxisDisplayOptions&& value) { SetPrimaryYAxisDisplayOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options that determine the presentation of the y-axis label.</p>
     */
    inline const ChartAxisLabelOptions& GetPrimaryYAxisLabelOptions() const{ return m_primaryYAxisLabelOptions; }
    inline bool PrimaryYAxisLabelOptionsHasBeenSet() const { return m_primaryYAxisLabelOptionsHasBeenSet; }
    inline void SetPrimaryYAxisLabelOptions(const ChartAxisLabelOptions& value) { m_primaryYAxisLabelOptionsHasBeenSet = true; m_primaryYAxisLabelOptions = value; }
    inline void SetPrimaryYAxisLabelOptions(ChartAxisLabelOptions&& value) { m_primaryYAxisLabelOptionsHasBeenSet = true; m_primaryYAxisLabelOptions = std::move(value); }
    inline LineChartConfiguration& WithPrimaryYAxisLabelOptions(const ChartAxisLabelOptions& value) { SetPrimaryYAxisLabelOptions(value); return *this;}
    inline LineChartConfiguration& WithPrimaryYAxisLabelOptions(ChartAxisLabelOptions&& value) { SetPrimaryYAxisLabelOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The series axis configuration of a line chart.</p>
     */
    inline const LineSeriesAxisDisplayOptions& GetSecondaryYAxisDisplayOptions() const{ return m_secondaryYAxisDisplayOptions; }
    inline bool SecondaryYAxisDisplayOptionsHasBeenSet() const { return m_secondaryYAxisDisplayOptionsHasBeenSet; }
    inline void SetSecondaryYAxisDisplayOptions(const LineSeriesAxisDisplayOptions& value) { m_secondaryYAxisDisplayOptionsHasBeenSet = true; m_secondaryYAxisDisplayOptions = value; }
    inline void SetSecondaryYAxisDisplayOptions(LineSeriesAxisDisplayOptions&& value) { m_secondaryYAxisDisplayOptionsHasBeenSet = true; m_secondaryYAxisDisplayOptions = std::move(value); }
    inline LineChartConfiguration& WithSecondaryYAxisDisplayOptions(const LineSeriesAxisDisplayOptions& value) { SetSecondaryYAxisDisplayOptions(value); return *this;}
    inline LineChartConfiguration& WithSecondaryYAxisDisplayOptions(LineSeriesAxisDisplayOptions&& value) { SetSecondaryYAxisDisplayOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options that determine the presentation of the secondary y-axis
     * label.</p>
     */
    inline const ChartAxisLabelOptions& GetSecondaryYAxisLabelOptions() const{ return m_secondaryYAxisLabelOptions; }
    inline bool SecondaryYAxisLabelOptionsHasBeenSet() const { return m_secondaryYAxisLabelOptionsHasBeenSet; }
    inline void SetSecondaryYAxisLabelOptions(const ChartAxisLabelOptions& value) { m_secondaryYAxisLabelOptionsHasBeenSet = true; m_secondaryYAxisLabelOptions = value; }
    inline void SetSecondaryYAxisLabelOptions(ChartAxisLabelOptions&& value) { m_secondaryYAxisLabelOptionsHasBeenSet = true; m_secondaryYAxisLabelOptions = std::move(value); }
    inline LineChartConfiguration& WithSecondaryYAxisLabelOptions(const ChartAxisLabelOptions& value) { SetSecondaryYAxisLabelOptions(value); return *this;}
    inline LineChartConfiguration& WithSecondaryYAxisLabelOptions(ChartAxisLabelOptions&& value) { SetSecondaryYAxisLabelOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const SingleAxisOptions& GetSingleAxisOptions() const{ return m_singleAxisOptions; }
    inline bool SingleAxisOptionsHasBeenSet() const { return m_singleAxisOptionsHasBeenSet; }
    inline void SetSingleAxisOptions(const SingleAxisOptions& value) { m_singleAxisOptionsHasBeenSet = true; m_singleAxisOptions = value; }
    inline void SetSingleAxisOptions(SingleAxisOptions&& value) { m_singleAxisOptionsHasBeenSet = true; m_singleAxisOptions = std::move(value); }
    inline LineChartConfiguration& WithSingleAxisOptions(const SingleAxisOptions& value) { SetSingleAxisOptions(value); return *this;}
    inline LineChartConfiguration& WithSingleAxisOptions(SingleAxisOptions&& value) { SetSingleAxisOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options that determine the default presentation of all line series in
     * <code>LineChartVisual</code>.</p>
     */
    inline const LineChartDefaultSeriesSettings& GetDefaultSeriesSettings() const{ return m_defaultSeriesSettings; }
    inline bool DefaultSeriesSettingsHasBeenSet() const { return m_defaultSeriesSettingsHasBeenSet; }
    inline void SetDefaultSeriesSettings(const LineChartDefaultSeriesSettings& value) { m_defaultSeriesSettingsHasBeenSet = true; m_defaultSeriesSettings = value; }
    inline void SetDefaultSeriesSettings(LineChartDefaultSeriesSettings&& value) { m_defaultSeriesSettingsHasBeenSet = true; m_defaultSeriesSettings = std::move(value); }
    inline LineChartConfiguration& WithDefaultSeriesSettings(const LineChartDefaultSeriesSettings& value) { SetDefaultSeriesSettings(value); return *this;}
    inline LineChartConfiguration& WithDefaultSeriesSettings(LineChartDefaultSeriesSettings&& value) { SetDefaultSeriesSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The series item configuration of a line chart.</p>
     */
    inline const Aws::Vector<SeriesItem>& GetSeries() const{ return m_series; }
    inline bool SeriesHasBeenSet() const { return m_seriesHasBeenSet; }
    inline void SetSeries(const Aws::Vector<SeriesItem>& value) { m_seriesHasBeenSet = true; m_series = value; }
    inline void SetSeries(Aws::Vector<SeriesItem>&& value) { m_seriesHasBeenSet = true; m_series = std::move(value); }
    inline LineChartConfiguration& WithSeries(const Aws::Vector<SeriesItem>& value) { SetSeries(value); return *this;}
    inline LineChartConfiguration& WithSeries(Aws::Vector<SeriesItem>&& value) { SetSeries(std::move(value)); return *this;}
    inline LineChartConfiguration& AddSeries(const SeriesItem& value) { m_seriesHasBeenSet = true; m_series.push_back(value); return *this; }
    inline LineChartConfiguration& AddSeries(SeriesItem&& value) { m_seriesHasBeenSet = true; m_series.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The legend configuration of a line chart.</p>
     */
    inline const LegendOptions& GetLegend() const{ return m_legend; }
    inline bool LegendHasBeenSet() const { return m_legendHasBeenSet; }
    inline void SetLegend(const LegendOptions& value) { m_legendHasBeenSet = true; m_legend = value; }
    inline void SetLegend(LegendOptions&& value) { m_legendHasBeenSet = true; m_legend = std::move(value); }
    inline LineChartConfiguration& WithLegend(const LegendOptions& value) { SetLegend(value); return *this;}
    inline LineChartConfiguration& WithLegend(LegendOptions&& value) { SetLegend(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data label configuration of a line chart.</p>
     */
    inline const DataLabelOptions& GetDataLabels() const{ return m_dataLabels; }
    inline bool DataLabelsHasBeenSet() const { return m_dataLabelsHasBeenSet; }
    inline void SetDataLabels(const DataLabelOptions& value) { m_dataLabelsHasBeenSet = true; m_dataLabels = value; }
    inline void SetDataLabels(DataLabelOptions&& value) { m_dataLabelsHasBeenSet = true; m_dataLabels = std::move(value); }
    inline LineChartConfiguration& WithDataLabels(const DataLabelOptions& value) { SetDataLabels(value); return *this;}
    inline LineChartConfiguration& WithDataLabels(DataLabelOptions&& value) { SetDataLabels(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reference lines configuration of a line chart.</p>
     */
    inline const Aws::Vector<ReferenceLine>& GetReferenceLines() const{ return m_referenceLines; }
    inline bool ReferenceLinesHasBeenSet() const { return m_referenceLinesHasBeenSet; }
    inline void SetReferenceLines(const Aws::Vector<ReferenceLine>& value) { m_referenceLinesHasBeenSet = true; m_referenceLines = value; }
    inline void SetReferenceLines(Aws::Vector<ReferenceLine>&& value) { m_referenceLinesHasBeenSet = true; m_referenceLines = std::move(value); }
    inline LineChartConfiguration& WithReferenceLines(const Aws::Vector<ReferenceLine>& value) { SetReferenceLines(value); return *this;}
    inline LineChartConfiguration& WithReferenceLines(Aws::Vector<ReferenceLine>&& value) { SetReferenceLines(std::move(value)); return *this;}
    inline LineChartConfiguration& AddReferenceLines(const ReferenceLine& value) { m_referenceLinesHasBeenSet = true; m_referenceLines.push_back(value); return *this; }
    inline LineChartConfiguration& AddReferenceLines(ReferenceLine&& value) { m_referenceLinesHasBeenSet = true; m_referenceLines.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The tooltip configuration of a line chart.</p>
     */
    inline const TooltipOptions& GetTooltip() const{ return m_tooltip; }
    inline bool TooltipHasBeenSet() const { return m_tooltipHasBeenSet; }
    inline void SetTooltip(const TooltipOptions& value) { m_tooltipHasBeenSet = true; m_tooltip = value; }
    inline void SetTooltip(TooltipOptions&& value) { m_tooltipHasBeenSet = true; m_tooltip = std::move(value); }
    inline LineChartConfiguration& WithTooltip(const TooltipOptions& value) { SetTooltip(value); return *this;}
    inline LineChartConfiguration& WithTooltip(TooltipOptions&& value) { SetTooltip(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default configuration of a line chart's contribution analysis.</p>
     */
    inline const Aws::Vector<ContributionAnalysisDefault>& GetContributionAnalysisDefaults() const{ return m_contributionAnalysisDefaults; }
    inline bool ContributionAnalysisDefaultsHasBeenSet() const { return m_contributionAnalysisDefaultsHasBeenSet; }
    inline void SetContributionAnalysisDefaults(const Aws::Vector<ContributionAnalysisDefault>& value) { m_contributionAnalysisDefaultsHasBeenSet = true; m_contributionAnalysisDefaults = value; }
    inline void SetContributionAnalysisDefaults(Aws::Vector<ContributionAnalysisDefault>&& value) { m_contributionAnalysisDefaultsHasBeenSet = true; m_contributionAnalysisDefaults = std::move(value); }
    inline LineChartConfiguration& WithContributionAnalysisDefaults(const Aws::Vector<ContributionAnalysisDefault>& value) { SetContributionAnalysisDefaults(value); return *this;}
    inline LineChartConfiguration& WithContributionAnalysisDefaults(Aws::Vector<ContributionAnalysisDefault>&& value) { SetContributionAnalysisDefaults(std::move(value)); return *this;}
    inline LineChartConfiguration& AddContributionAnalysisDefaults(const ContributionAnalysisDefault& value) { m_contributionAnalysisDefaultsHasBeenSet = true; m_contributionAnalysisDefaults.push_back(value); return *this; }
    inline LineChartConfiguration& AddContributionAnalysisDefaults(ContributionAnalysisDefault&& value) { m_contributionAnalysisDefaultsHasBeenSet = true; m_contributionAnalysisDefaults.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The visual palette configuration of a line chart.</p>
     */
    inline const VisualPalette& GetVisualPalette() const{ return m_visualPalette; }
    inline bool VisualPaletteHasBeenSet() const { return m_visualPaletteHasBeenSet; }
    inline void SetVisualPalette(const VisualPalette& value) { m_visualPaletteHasBeenSet = true; m_visualPalette = value; }
    inline void SetVisualPalette(VisualPalette&& value) { m_visualPaletteHasBeenSet = true; m_visualPalette = std::move(value); }
    inline LineChartConfiguration& WithVisualPalette(const VisualPalette& value) { SetVisualPalette(value); return *this;}
    inline LineChartConfiguration& WithVisualPalette(VisualPalette&& value) { SetVisualPalette(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The general visual interactions setup for a visual.</p>
     */
    inline const VisualInteractionOptions& GetInteractions() const{ return m_interactions; }
    inline bool InteractionsHasBeenSet() const { return m_interactionsHasBeenSet; }
    inline void SetInteractions(const VisualInteractionOptions& value) { m_interactionsHasBeenSet = true; m_interactions = value; }
    inline void SetInteractions(VisualInteractionOptions&& value) { m_interactionsHasBeenSet = true; m_interactions = std::move(value); }
    inline LineChartConfiguration& WithInteractions(const VisualInteractionOptions& value) { SetInteractions(value); return *this;}
    inline LineChartConfiguration& WithInteractions(VisualInteractionOptions&& value) { SetInteractions(std::move(value)); return *this;}
    ///@}
  private:

    LineChartFieldWells m_fieldWells;
    bool m_fieldWellsHasBeenSet = false;

    LineChartSortConfiguration m_sortConfiguration;
    bool m_sortConfigurationHasBeenSet = false;

    Aws::Vector<ForecastConfiguration> m_forecastConfigurations;
    bool m_forecastConfigurationsHasBeenSet = false;

    LineChartType m_type;
    bool m_typeHasBeenSet = false;

    SmallMultiplesOptions m_smallMultiplesOptions;
    bool m_smallMultiplesOptionsHasBeenSet = false;

    AxisDisplayOptions m_xAxisDisplayOptions;
    bool m_xAxisDisplayOptionsHasBeenSet = false;

    ChartAxisLabelOptions m_xAxisLabelOptions;
    bool m_xAxisLabelOptionsHasBeenSet = false;

    LineSeriesAxisDisplayOptions m_primaryYAxisDisplayOptions;
    bool m_primaryYAxisDisplayOptionsHasBeenSet = false;

    ChartAxisLabelOptions m_primaryYAxisLabelOptions;
    bool m_primaryYAxisLabelOptionsHasBeenSet = false;

    LineSeriesAxisDisplayOptions m_secondaryYAxisDisplayOptions;
    bool m_secondaryYAxisDisplayOptionsHasBeenSet = false;

    ChartAxisLabelOptions m_secondaryYAxisLabelOptions;
    bool m_secondaryYAxisLabelOptionsHasBeenSet = false;

    SingleAxisOptions m_singleAxisOptions;
    bool m_singleAxisOptionsHasBeenSet = false;

    LineChartDefaultSeriesSettings m_defaultSeriesSettings;
    bool m_defaultSeriesSettingsHasBeenSet = false;

    Aws::Vector<SeriesItem> m_series;
    bool m_seriesHasBeenSet = false;

    LegendOptions m_legend;
    bool m_legendHasBeenSet = false;

    DataLabelOptions m_dataLabels;
    bool m_dataLabelsHasBeenSet = false;

    Aws::Vector<ReferenceLine> m_referenceLines;
    bool m_referenceLinesHasBeenSet = false;

    TooltipOptions m_tooltip;
    bool m_tooltipHasBeenSet = false;

    Aws::Vector<ContributionAnalysisDefault> m_contributionAnalysisDefaults;
    bool m_contributionAnalysisDefaultsHasBeenSet = false;

    VisualPalette m_visualPalette;
    bool m_visualPaletteHasBeenSet = false;

    VisualInteractionOptions m_interactions;
    bool m_interactionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
