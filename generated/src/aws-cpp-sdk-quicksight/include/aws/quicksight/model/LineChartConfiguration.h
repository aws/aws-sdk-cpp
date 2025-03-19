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
    AWS_QUICKSIGHT_API LineChartConfiguration() = default;
    AWS_QUICKSIGHT_API LineChartConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API LineChartConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The field well configuration of a line chart.</p>
     */
    inline const LineChartFieldWells& GetFieldWells() const { return m_fieldWells; }
    inline bool FieldWellsHasBeenSet() const { return m_fieldWellsHasBeenSet; }
    template<typename FieldWellsT = LineChartFieldWells>
    void SetFieldWells(FieldWellsT&& value) { m_fieldWellsHasBeenSet = true; m_fieldWells = std::forward<FieldWellsT>(value); }
    template<typename FieldWellsT = LineChartFieldWells>
    LineChartConfiguration& WithFieldWells(FieldWellsT&& value) { SetFieldWells(std::forward<FieldWellsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sort configuration of a line chart.</p>
     */
    inline const LineChartSortConfiguration& GetSortConfiguration() const { return m_sortConfiguration; }
    inline bool SortConfigurationHasBeenSet() const { return m_sortConfigurationHasBeenSet; }
    template<typename SortConfigurationT = LineChartSortConfiguration>
    void SetSortConfiguration(SortConfigurationT&& value) { m_sortConfigurationHasBeenSet = true; m_sortConfiguration = std::forward<SortConfigurationT>(value); }
    template<typename SortConfigurationT = LineChartSortConfiguration>
    LineChartConfiguration& WithSortConfiguration(SortConfigurationT&& value) { SetSortConfiguration(std::forward<SortConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The forecast configuration of a line chart.</p>
     */
    inline const Aws::Vector<ForecastConfiguration>& GetForecastConfigurations() const { return m_forecastConfigurations; }
    inline bool ForecastConfigurationsHasBeenSet() const { return m_forecastConfigurationsHasBeenSet; }
    template<typename ForecastConfigurationsT = Aws::Vector<ForecastConfiguration>>
    void SetForecastConfigurations(ForecastConfigurationsT&& value) { m_forecastConfigurationsHasBeenSet = true; m_forecastConfigurations = std::forward<ForecastConfigurationsT>(value); }
    template<typename ForecastConfigurationsT = Aws::Vector<ForecastConfiguration>>
    LineChartConfiguration& WithForecastConfigurations(ForecastConfigurationsT&& value) { SetForecastConfigurations(std::forward<ForecastConfigurationsT>(value)); return *this;}
    template<typename ForecastConfigurationsT = ForecastConfiguration>
    LineChartConfiguration& AddForecastConfigurations(ForecastConfigurationsT&& value) { m_forecastConfigurationsHasBeenSet = true; m_forecastConfigurations.emplace_back(std::forward<ForecastConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Determines the type of the line chart.</p>
     */
    inline LineChartType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(LineChartType value) { m_typeHasBeenSet = true; m_type = value; }
    inline LineChartConfiguration& WithType(LineChartType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The small multiples setup for the visual.</p>
     */
    inline const SmallMultiplesOptions& GetSmallMultiplesOptions() const { return m_smallMultiplesOptions; }
    inline bool SmallMultiplesOptionsHasBeenSet() const { return m_smallMultiplesOptionsHasBeenSet; }
    template<typename SmallMultiplesOptionsT = SmallMultiplesOptions>
    void SetSmallMultiplesOptions(SmallMultiplesOptionsT&& value) { m_smallMultiplesOptionsHasBeenSet = true; m_smallMultiplesOptions = std::forward<SmallMultiplesOptionsT>(value); }
    template<typename SmallMultiplesOptionsT = SmallMultiplesOptions>
    LineChartConfiguration& WithSmallMultiplesOptions(SmallMultiplesOptionsT&& value) { SetSmallMultiplesOptions(std::forward<SmallMultiplesOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options that determine the presentation of the x-axis.</p>
     */
    inline const AxisDisplayOptions& GetXAxisDisplayOptions() const { return m_xAxisDisplayOptions; }
    inline bool XAxisDisplayOptionsHasBeenSet() const { return m_xAxisDisplayOptionsHasBeenSet; }
    template<typename XAxisDisplayOptionsT = AxisDisplayOptions>
    void SetXAxisDisplayOptions(XAxisDisplayOptionsT&& value) { m_xAxisDisplayOptionsHasBeenSet = true; m_xAxisDisplayOptions = std::forward<XAxisDisplayOptionsT>(value); }
    template<typename XAxisDisplayOptionsT = AxisDisplayOptions>
    LineChartConfiguration& WithXAxisDisplayOptions(XAxisDisplayOptionsT&& value) { SetXAxisDisplayOptions(std::forward<XAxisDisplayOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options that determine the presentation of the x-axis label.</p>
     */
    inline const ChartAxisLabelOptions& GetXAxisLabelOptions() const { return m_xAxisLabelOptions; }
    inline bool XAxisLabelOptionsHasBeenSet() const { return m_xAxisLabelOptionsHasBeenSet; }
    template<typename XAxisLabelOptionsT = ChartAxisLabelOptions>
    void SetXAxisLabelOptions(XAxisLabelOptionsT&& value) { m_xAxisLabelOptionsHasBeenSet = true; m_xAxisLabelOptions = std::forward<XAxisLabelOptionsT>(value); }
    template<typename XAxisLabelOptionsT = ChartAxisLabelOptions>
    LineChartConfiguration& WithXAxisLabelOptions(XAxisLabelOptionsT&& value) { SetXAxisLabelOptions(std::forward<XAxisLabelOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The series axis configuration of a line chart.</p>
     */
    inline const LineSeriesAxisDisplayOptions& GetPrimaryYAxisDisplayOptions() const { return m_primaryYAxisDisplayOptions; }
    inline bool PrimaryYAxisDisplayOptionsHasBeenSet() const { return m_primaryYAxisDisplayOptionsHasBeenSet; }
    template<typename PrimaryYAxisDisplayOptionsT = LineSeriesAxisDisplayOptions>
    void SetPrimaryYAxisDisplayOptions(PrimaryYAxisDisplayOptionsT&& value) { m_primaryYAxisDisplayOptionsHasBeenSet = true; m_primaryYAxisDisplayOptions = std::forward<PrimaryYAxisDisplayOptionsT>(value); }
    template<typename PrimaryYAxisDisplayOptionsT = LineSeriesAxisDisplayOptions>
    LineChartConfiguration& WithPrimaryYAxisDisplayOptions(PrimaryYAxisDisplayOptionsT&& value) { SetPrimaryYAxisDisplayOptions(std::forward<PrimaryYAxisDisplayOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options that determine the presentation of the y-axis label.</p>
     */
    inline const ChartAxisLabelOptions& GetPrimaryYAxisLabelOptions() const { return m_primaryYAxisLabelOptions; }
    inline bool PrimaryYAxisLabelOptionsHasBeenSet() const { return m_primaryYAxisLabelOptionsHasBeenSet; }
    template<typename PrimaryYAxisLabelOptionsT = ChartAxisLabelOptions>
    void SetPrimaryYAxisLabelOptions(PrimaryYAxisLabelOptionsT&& value) { m_primaryYAxisLabelOptionsHasBeenSet = true; m_primaryYAxisLabelOptions = std::forward<PrimaryYAxisLabelOptionsT>(value); }
    template<typename PrimaryYAxisLabelOptionsT = ChartAxisLabelOptions>
    LineChartConfiguration& WithPrimaryYAxisLabelOptions(PrimaryYAxisLabelOptionsT&& value) { SetPrimaryYAxisLabelOptions(std::forward<PrimaryYAxisLabelOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The series axis configuration of a line chart.</p>
     */
    inline const LineSeriesAxisDisplayOptions& GetSecondaryYAxisDisplayOptions() const { return m_secondaryYAxisDisplayOptions; }
    inline bool SecondaryYAxisDisplayOptionsHasBeenSet() const { return m_secondaryYAxisDisplayOptionsHasBeenSet; }
    template<typename SecondaryYAxisDisplayOptionsT = LineSeriesAxisDisplayOptions>
    void SetSecondaryYAxisDisplayOptions(SecondaryYAxisDisplayOptionsT&& value) { m_secondaryYAxisDisplayOptionsHasBeenSet = true; m_secondaryYAxisDisplayOptions = std::forward<SecondaryYAxisDisplayOptionsT>(value); }
    template<typename SecondaryYAxisDisplayOptionsT = LineSeriesAxisDisplayOptions>
    LineChartConfiguration& WithSecondaryYAxisDisplayOptions(SecondaryYAxisDisplayOptionsT&& value) { SetSecondaryYAxisDisplayOptions(std::forward<SecondaryYAxisDisplayOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options that determine the presentation of the secondary y-axis
     * label.</p>
     */
    inline const ChartAxisLabelOptions& GetSecondaryYAxisLabelOptions() const { return m_secondaryYAxisLabelOptions; }
    inline bool SecondaryYAxisLabelOptionsHasBeenSet() const { return m_secondaryYAxisLabelOptionsHasBeenSet; }
    template<typename SecondaryYAxisLabelOptionsT = ChartAxisLabelOptions>
    void SetSecondaryYAxisLabelOptions(SecondaryYAxisLabelOptionsT&& value) { m_secondaryYAxisLabelOptionsHasBeenSet = true; m_secondaryYAxisLabelOptions = std::forward<SecondaryYAxisLabelOptionsT>(value); }
    template<typename SecondaryYAxisLabelOptionsT = ChartAxisLabelOptions>
    LineChartConfiguration& WithSecondaryYAxisLabelOptions(SecondaryYAxisLabelOptionsT&& value) { SetSecondaryYAxisLabelOptions(std::forward<SecondaryYAxisLabelOptionsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const SingleAxisOptions& GetSingleAxisOptions() const { return m_singleAxisOptions; }
    inline bool SingleAxisOptionsHasBeenSet() const { return m_singleAxisOptionsHasBeenSet; }
    template<typename SingleAxisOptionsT = SingleAxisOptions>
    void SetSingleAxisOptions(SingleAxisOptionsT&& value) { m_singleAxisOptionsHasBeenSet = true; m_singleAxisOptions = std::forward<SingleAxisOptionsT>(value); }
    template<typename SingleAxisOptionsT = SingleAxisOptions>
    LineChartConfiguration& WithSingleAxisOptions(SingleAxisOptionsT&& value) { SetSingleAxisOptions(std::forward<SingleAxisOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options that determine the default presentation of all line series in
     * <code>LineChartVisual</code>.</p>
     */
    inline const LineChartDefaultSeriesSettings& GetDefaultSeriesSettings() const { return m_defaultSeriesSettings; }
    inline bool DefaultSeriesSettingsHasBeenSet() const { return m_defaultSeriesSettingsHasBeenSet; }
    template<typename DefaultSeriesSettingsT = LineChartDefaultSeriesSettings>
    void SetDefaultSeriesSettings(DefaultSeriesSettingsT&& value) { m_defaultSeriesSettingsHasBeenSet = true; m_defaultSeriesSettings = std::forward<DefaultSeriesSettingsT>(value); }
    template<typename DefaultSeriesSettingsT = LineChartDefaultSeriesSettings>
    LineChartConfiguration& WithDefaultSeriesSettings(DefaultSeriesSettingsT&& value) { SetDefaultSeriesSettings(std::forward<DefaultSeriesSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The series item configuration of a line chart.</p>
     */
    inline const Aws::Vector<SeriesItem>& GetSeries() const { return m_series; }
    inline bool SeriesHasBeenSet() const { return m_seriesHasBeenSet; }
    template<typename SeriesT = Aws::Vector<SeriesItem>>
    void SetSeries(SeriesT&& value) { m_seriesHasBeenSet = true; m_series = std::forward<SeriesT>(value); }
    template<typename SeriesT = Aws::Vector<SeriesItem>>
    LineChartConfiguration& WithSeries(SeriesT&& value) { SetSeries(std::forward<SeriesT>(value)); return *this;}
    template<typename SeriesT = SeriesItem>
    LineChartConfiguration& AddSeries(SeriesT&& value) { m_seriesHasBeenSet = true; m_series.emplace_back(std::forward<SeriesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The legend configuration of a line chart.</p>
     */
    inline const LegendOptions& GetLegend() const { return m_legend; }
    inline bool LegendHasBeenSet() const { return m_legendHasBeenSet; }
    template<typename LegendT = LegendOptions>
    void SetLegend(LegendT&& value) { m_legendHasBeenSet = true; m_legend = std::forward<LegendT>(value); }
    template<typename LegendT = LegendOptions>
    LineChartConfiguration& WithLegend(LegendT&& value) { SetLegend(std::forward<LegendT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data label configuration of a line chart.</p>
     */
    inline const DataLabelOptions& GetDataLabels() const { return m_dataLabels; }
    inline bool DataLabelsHasBeenSet() const { return m_dataLabelsHasBeenSet; }
    template<typename DataLabelsT = DataLabelOptions>
    void SetDataLabels(DataLabelsT&& value) { m_dataLabelsHasBeenSet = true; m_dataLabels = std::forward<DataLabelsT>(value); }
    template<typename DataLabelsT = DataLabelOptions>
    LineChartConfiguration& WithDataLabels(DataLabelsT&& value) { SetDataLabels(std::forward<DataLabelsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reference lines configuration of a line chart.</p>
     */
    inline const Aws::Vector<ReferenceLine>& GetReferenceLines() const { return m_referenceLines; }
    inline bool ReferenceLinesHasBeenSet() const { return m_referenceLinesHasBeenSet; }
    template<typename ReferenceLinesT = Aws::Vector<ReferenceLine>>
    void SetReferenceLines(ReferenceLinesT&& value) { m_referenceLinesHasBeenSet = true; m_referenceLines = std::forward<ReferenceLinesT>(value); }
    template<typename ReferenceLinesT = Aws::Vector<ReferenceLine>>
    LineChartConfiguration& WithReferenceLines(ReferenceLinesT&& value) { SetReferenceLines(std::forward<ReferenceLinesT>(value)); return *this;}
    template<typename ReferenceLinesT = ReferenceLine>
    LineChartConfiguration& AddReferenceLines(ReferenceLinesT&& value) { m_referenceLinesHasBeenSet = true; m_referenceLines.emplace_back(std::forward<ReferenceLinesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The tooltip configuration of a line chart.</p>
     */
    inline const TooltipOptions& GetTooltip() const { return m_tooltip; }
    inline bool TooltipHasBeenSet() const { return m_tooltipHasBeenSet; }
    template<typename TooltipT = TooltipOptions>
    void SetTooltip(TooltipT&& value) { m_tooltipHasBeenSet = true; m_tooltip = std::forward<TooltipT>(value); }
    template<typename TooltipT = TooltipOptions>
    LineChartConfiguration& WithTooltip(TooltipT&& value) { SetTooltip(std::forward<TooltipT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default configuration of a line chart's contribution analysis.</p>
     */
    inline const Aws::Vector<ContributionAnalysisDefault>& GetContributionAnalysisDefaults() const { return m_contributionAnalysisDefaults; }
    inline bool ContributionAnalysisDefaultsHasBeenSet() const { return m_contributionAnalysisDefaultsHasBeenSet; }
    template<typename ContributionAnalysisDefaultsT = Aws::Vector<ContributionAnalysisDefault>>
    void SetContributionAnalysisDefaults(ContributionAnalysisDefaultsT&& value) { m_contributionAnalysisDefaultsHasBeenSet = true; m_contributionAnalysisDefaults = std::forward<ContributionAnalysisDefaultsT>(value); }
    template<typename ContributionAnalysisDefaultsT = Aws::Vector<ContributionAnalysisDefault>>
    LineChartConfiguration& WithContributionAnalysisDefaults(ContributionAnalysisDefaultsT&& value) { SetContributionAnalysisDefaults(std::forward<ContributionAnalysisDefaultsT>(value)); return *this;}
    template<typename ContributionAnalysisDefaultsT = ContributionAnalysisDefault>
    LineChartConfiguration& AddContributionAnalysisDefaults(ContributionAnalysisDefaultsT&& value) { m_contributionAnalysisDefaultsHasBeenSet = true; m_contributionAnalysisDefaults.emplace_back(std::forward<ContributionAnalysisDefaultsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The visual palette configuration of a line chart.</p>
     */
    inline const VisualPalette& GetVisualPalette() const { return m_visualPalette; }
    inline bool VisualPaletteHasBeenSet() const { return m_visualPaletteHasBeenSet; }
    template<typename VisualPaletteT = VisualPalette>
    void SetVisualPalette(VisualPaletteT&& value) { m_visualPaletteHasBeenSet = true; m_visualPalette = std::forward<VisualPaletteT>(value); }
    template<typename VisualPaletteT = VisualPalette>
    LineChartConfiguration& WithVisualPalette(VisualPaletteT&& value) { SetVisualPalette(std::forward<VisualPaletteT>(value)); return *this;}
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
    LineChartConfiguration& WithInteractions(InteractionsT&& value) { SetInteractions(std::forward<InteractionsT>(value)); return *this;}
    ///@}
  private:

    LineChartFieldWells m_fieldWells;
    bool m_fieldWellsHasBeenSet = false;

    LineChartSortConfiguration m_sortConfiguration;
    bool m_sortConfigurationHasBeenSet = false;

    Aws::Vector<ForecastConfiguration> m_forecastConfigurations;
    bool m_forecastConfigurationsHasBeenSet = false;

    LineChartType m_type{LineChartType::NOT_SET};
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
