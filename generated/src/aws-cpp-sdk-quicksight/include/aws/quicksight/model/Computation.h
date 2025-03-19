/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/TopBottomRankedComputation.h>
#include <aws/quicksight/model/TopBottomMoversComputation.h>
#include <aws/quicksight/model/TotalAggregationComputation.h>
#include <aws/quicksight/model/MaximumMinimumComputation.h>
#include <aws/quicksight/model/MetricComparisonComputation.h>
#include <aws/quicksight/model/PeriodOverPeriodComputation.h>
#include <aws/quicksight/model/PeriodToDateComputation.h>
#include <aws/quicksight/model/GrowthRateComputation.h>
#include <aws/quicksight/model/UniqueValuesComputation.h>
#include <aws/quicksight/model/ForecastComputation.h>
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
   * <p>The computation union that is used in an insight visual.</p> <p>This is a
   * union type structure. For this structure to be valid, only one of the attributes
   * can be defined.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/Computation">AWS
   * API Reference</a></p>
   */
  class Computation
  {
  public:
    AWS_QUICKSIGHT_API Computation() = default;
    AWS_QUICKSIGHT_API Computation(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Computation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The top ranked and bottom ranked computation configuration.</p>
     */
    inline const TopBottomRankedComputation& GetTopBottomRanked() const { return m_topBottomRanked; }
    inline bool TopBottomRankedHasBeenSet() const { return m_topBottomRankedHasBeenSet; }
    template<typename TopBottomRankedT = TopBottomRankedComputation>
    void SetTopBottomRanked(TopBottomRankedT&& value) { m_topBottomRankedHasBeenSet = true; m_topBottomRanked = std::forward<TopBottomRankedT>(value); }
    template<typename TopBottomRankedT = TopBottomRankedComputation>
    Computation& WithTopBottomRanked(TopBottomRankedT&& value) { SetTopBottomRanked(std::forward<TopBottomRankedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The top movers and bottom movers computation configuration.</p>
     */
    inline const TopBottomMoversComputation& GetTopBottomMovers() const { return m_topBottomMovers; }
    inline bool TopBottomMoversHasBeenSet() const { return m_topBottomMoversHasBeenSet; }
    template<typename TopBottomMoversT = TopBottomMoversComputation>
    void SetTopBottomMovers(TopBottomMoversT&& value) { m_topBottomMoversHasBeenSet = true; m_topBottomMovers = std::forward<TopBottomMoversT>(value); }
    template<typename TopBottomMoversT = TopBottomMoversComputation>
    Computation& WithTopBottomMovers(TopBottomMoversT&& value) { SetTopBottomMovers(std::forward<TopBottomMoversT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total aggregation computation configuration.</p>
     */
    inline const TotalAggregationComputation& GetTotalAggregation() const { return m_totalAggregation; }
    inline bool TotalAggregationHasBeenSet() const { return m_totalAggregationHasBeenSet; }
    template<typename TotalAggregationT = TotalAggregationComputation>
    void SetTotalAggregation(TotalAggregationT&& value) { m_totalAggregationHasBeenSet = true; m_totalAggregation = std::forward<TotalAggregationT>(value); }
    template<typename TotalAggregationT = TotalAggregationComputation>
    Computation& WithTotalAggregation(TotalAggregationT&& value) { SetTotalAggregation(std::forward<TotalAggregationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum and minimum computation configuration.</p>
     */
    inline const MaximumMinimumComputation& GetMaximumMinimum() const { return m_maximumMinimum; }
    inline bool MaximumMinimumHasBeenSet() const { return m_maximumMinimumHasBeenSet; }
    template<typename MaximumMinimumT = MaximumMinimumComputation>
    void SetMaximumMinimum(MaximumMinimumT&& value) { m_maximumMinimumHasBeenSet = true; m_maximumMinimum = std::forward<MaximumMinimumT>(value); }
    template<typename MaximumMinimumT = MaximumMinimumComputation>
    Computation& WithMaximumMinimum(MaximumMinimumT&& value) { SetMaximumMinimum(std::forward<MaximumMinimumT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metric comparison computation configuration.</p>
     */
    inline const MetricComparisonComputation& GetMetricComparison() const { return m_metricComparison; }
    inline bool MetricComparisonHasBeenSet() const { return m_metricComparisonHasBeenSet; }
    template<typename MetricComparisonT = MetricComparisonComputation>
    void SetMetricComparison(MetricComparisonT&& value) { m_metricComparisonHasBeenSet = true; m_metricComparison = std::forward<MetricComparisonT>(value); }
    template<typename MetricComparisonT = MetricComparisonComputation>
    Computation& WithMetricComparison(MetricComparisonT&& value) { SetMetricComparison(std::forward<MetricComparisonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The period over period computation configuration.</p>
     */
    inline const PeriodOverPeriodComputation& GetPeriodOverPeriod() const { return m_periodOverPeriod; }
    inline bool PeriodOverPeriodHasBeenSet() const { return m_periodOverPeriodHasBeenSet; }
    template<typename PeriodOverPeriodT = PeriodOverPeriodComputation>
    void SetPeriodOverPeriod(PeriodOverPeriodT&& value) { m_periodOverPeriodHasBeenSet = true; m_periodOverPeriod = std::forward<PeriodOverPeriodT>(value); }
    template<typename PeriodOverPeriodT = PeriodOverPeriodComputation>
    Computation& WithPeriodOverPeriod(PeriodOverPeriodT&& value) { SetPeriodOverPeriod(std::forward<PeriodOverPeriodT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The period to <code>DataSetIdentifier</code> computation configuration.</p>
     */
    inline const PeriodToDateComputation& GetPeriodToDate() const { return m_periodToDate; }
    inline bool PeriodToDateHasBeenSet() const { return m_periodToDateHasBeenSet; }
    template<typename PeriodToDateT = PeriodToDateComputation>
    void SetPeriodToDate(PeriodToDateT&& value) { m_periodToDateHasBeenSet = true; m_periodToDate = std::forward<PeriodToDateT>(value); }
    template<typename PeriodToDateT = PeriodToDateComputation>
    Computation& WithPeriodToDate(PeriodToDateT&& value) { SetPeriodToDate(std::forward<PeriodToDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The growth rate computation configuration.</p>
     */
    inline const GrowthRateComputation& GetGrowthRate() const { return m_growthRate; }
    inline bool GrowthRateHasBeenSet() const { return m_growthRateHasBeenSet; }
    template<typename GrowthRateT = GrowthRateComputation>
    void SetGrowthRate(GrowthRateT&& value) { m_growthRateHasBeenSet = true; m_growthRate = std::forward<GrowthRateT>(value); }
    template<typename GrowthRateT = GrowthRateComputation>
    Computation& WithGrowthRate(GrowthRateT&& value) { SetGrowthRate(std::forward<GrowthRateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique values computation configuration.</p>
     */
    inline const UniqueValuesComputation& GetUniqueValues() const { return m_uniqueValues; }
    inline bool UniqueValuesHasBeenSet() const { return m_uniqueValuesHasBeenSet; }
    template<typename UniqueValuesT = UniqueValuesComputation>
    void SetUniqueValues(UniqueValuesT&& value) { m_uniqueValuesHasBeenSet = true; m_uniqueValues = std::forward<UniqueValuesT>(value); }
    template<typename UniqueValuesT = UniqueValuesComputation>
    Computation& WithUniqueValues(UniqueValuesT&& value) { SetUniqueValues(std::forward<UniqueValuesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The forecast computation configuration.</p>
     */
    inline const ForecastComputation& GetForecast() const { return m_forecast; }
    inline bool ForecastHasBeenSet() const { return m_forecastHasBeenSet; }
    template<typename ForecastT = ForecastComputation>
    void SetForecast(ForecastT&& value) { m_forecastHasBeenSet = true; m_forecast = std::forward<ForecastT>(value); }
    template<typename ForecastT = ForecastComputation>
    Computation& WithForecast(ForecastT&& value) { SetForecast(std::forward<ForecastT>(value)); return *this;}
    ///@}
  private:

    TopBottomRankedComputation m_topBottomRanked;
    bool m_topBottomRankedHasBeenSet = false;

    TopBottomMoversComputation m_topBottomMovers;
    bool m_topBottomMoversHasBeenSet = false;

    TotalAggregationComputation m_totalAggregation;
    bool m_totalAggregationHasBeenSet = false;

    MaximumMinimumComputation m_maximumMinimum;
    bool m_maximumMinimumHasBeenSet = false;

    MetricComparisonComputation m_metricComparison;
    bool m_metricComparisonHasBeenSet = false;

    PeriodOverPeriodComputation m_periodOverPeriod;
    bool m_periodOverPeriodHasBeenSet = false;

    PeriodToDateComputation m_periodToDate;
    bool m_periodToDateHasBeenSet = false;

    GrowthRateComputation m_growthRate;
    bool m_growthRateHasBeenSet = false;

    UniqueValuesComputation m_uniqueValues;
    bool m_uniqueValuesHasBeenSet = false;

    ForecastComputation m_forecast;
    bool m_forecastHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
