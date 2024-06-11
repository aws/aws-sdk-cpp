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
    AWS_QUICKSIGHT_API Computation();
    AWS_QUICKSIGHT_API Computation(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Computation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The top ranked and bottom ranked computation configuration.</p>
     */
    inline const TopBottomRankedComputation& GetTopBottomRanked() const{ return m_topBottomRanked; }
    inline bool TopBottomRankedHasBeenSet() const { return m_topBottomRankedHasBeenSet; }
    inline void SetTopBottomRanked(const TopBottomRankedComputation& value) { m_topBottomRankedHasBeenSet = true; m_topBottomRanked = value; }
    inline void SetTopBottomRanked(TopBottomRankedComputation&& value) { m_topBottomRankedHasBeenSet = true; m_topBottomRanked = std::move(value); }
    inline Computation& WithTopBottomRanked(const TopBottomRankedComputation& value) { SetTopBottomRanked(value); return *this;}
    inline Computation& WithTopBottomRanked(TopBottomRankedComputation&& value) { SetTopBottomRanked(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The top movers and bottom movers computation configuration.</p>
     */
    inline const TopBottomMoversComputation& GetTopBottomMovers() const{ return m_topBottomMovers; }
    inline bool TopBottomMoversHasBeenSet() const { return m_topBottomMoversHasBeenSet; }
    inline void SetTopBottomMovers(const TopBottomMoversComputation& value) { m_topBottomMoversHasBeenSet = true; m_topBottomMovers = value; }
    inline void SetTopBottomMovers(TopBottomMoversComputation&& value) { m_topBottomMoversHasBeenSet = true; m_topBottomMovers = std::move(value); }
    inline Computation& WithTopBottomMovers(const TopBottomMoversComputation& value) { SetTopBottomMovers(value); return *this;}
    inline Computation& WithTopBottomMovers(TopBottomMoversComputation&& value) { SetTopBottomMovers(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total aggregation computation configuration.</p>
     */
    inline const TotalAggregationComputation& GetTotalAggregation() const{ return m_totalAggregation; }
    inline bool TotalAggregationHasBeenSet() const { return m_totalAggregationHasBeenSet; }
    inline void SetTotalAggregation(const TotalAggregationComputation& value) { m_totalAggregationHasBeenSet = true; m_totalAggregation = value; }
    inline void SetTotalAggregation(TotalAggregationComputation&& value) { m_totalAggregationHasBeenSet = true; m_totalAggregation = std::move(value); }
    inline Computation& WithTotalAggregation(const TotalAggregationComputation& value) { SetTotalAggregation(value); return *this;}
    inline Computation& WithTotalAggregation(TotalAggregationComputation&& value) { SetTotalAggregation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum and minimum computation configuration.</p>
     */
    inline const MaximumMinimumComputation& GetMaximumMinimum() const{ return m_maximumMinimum; }
    inline bool MaximumMinimumHasBeenSet() const { return m_maximumMinimumHasBeenSet; }
    inline void SetMaximumMinimum(const MaximumMinimumComputation& value) { m_maximumMinimumHasBeenSet = true; m_maximumMinimum = value; }
    inline void SetMaximumMinimum(MaximumMinimumComputation&& value) { m_maximumMinimumHasBeenSet = true; m_maximumMinimum = std::move(value); }
    inline Computation& WithMaximumMinimum(const MaximumMinimumComputation& value) { SetMaximumMinimum(value); return *this;}
    inline Computation& WithMaximumMinimum(MaximumMinimumComputation&& value) { SetMaximumMinimum(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metric comparison computation configuration.</p>
     */
    inline const MetricComparisonComputation& GetMetricComparison() const{ return m_metricComparison; }
    inline bool MetricComparisonHasBeenSet() const { return m_metricComparisonHasBeenSet; }
    inline void SetMetricComparison(const MetricComparisonComputation& value) { m_metricComparisonHasBeenSet = true; m_metricComparison = value; }
    inline void SetMetricComparison(MetricComparisonComputation&& value) { m_metricComparisonHasBeenSet = true; m_metricComparison = std::move(value); }
    inline Computation& WithMetricComparison(const MetricComparisonComputation& value) { SetMetricComparison(value); return *this;}
    inline Computation& WithMetricComparison(MetricComparisonComputation&& value) { SetMetricComparison(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The period over period computation configuration.</p>
     */
    inline const PeriodOverPeriodComputation& GetPeriodOverPeriod() const{ return m_periodOverPeriod; }
    inline bool PeriodOverPeriodHasBeenSet() const { return m_periodOverPeriodHasBeenSet; }
    inline void SetPeriodOverPeriod(const PeriodOverPeriodComputation& value) { m_periodOverPeriodHasBeenSet = true; m_periodOverPeriod = value; }
    inline void SetPeriodOverPeriod(PeriodOverPeriodComputation&& value) { m_periodOverPeriodHasBeenSet = true; m_periodOverPeriod = std::move(value); }
    inline Computation& WithPeriodOverPeriod(const PeriodOverPeriodComputation& value) { SetPeriodOverPeriod(value); return *this;}
    inline Computation& WithPeriodOverPeriod(PeriodOverPeriodComputation&& value) { SetPeriodOverPeriod(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The period to <code>DataSetIdentifier</code> computation configuration.</p>
     */
    inline const PeriodToDateComputation& GetPeriodToDate() const{ return m_periodToDate; }
    inline bool PeriodToDateHasBeenSet() const { return m_periodToDateHasBeenSet; }
    inline void SetPeriodToDate(const PeriodToDateComputation& value) { m_periodToDateHasBeenSet = true; m_periodToDate = value; }
    inline void SetPeriodToDate(PeriodToDateComputation&& value) { m_periodToDateHasBeenSet = true; m_periodToDate = std::move(value); }
    inline Computation& WithPeriodToDate(const PeriodToDateComputation& value) { SetPeriodToDate(value); return *this;}
    inline Computation& WithPeriodToDate(PeriodToDateComputation&& value) { SetPeriodToDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The growth rate computation configuration.</p>
     */
    inline const GrowthRateComputation& GetGrowthRate() const{ return m_growthRate; }
    inline bool GrowthRateHasBeenSet() const { return m_growthRateHasBeenSet; }
    inline void SetGrowthRate(const GrowthRateComputation& value) { m_growthRateHasBeenSet = true; m_growthRate = value; }
    inline void SetGrowthRate(GrowthRateComputation&& value) { m_growthRateHasBeenSet = true; m_growthRate = std::move(value); }
    inline Computation& WithGrowthRate(const GrowthRateComputation& value) { SetGrowthRate(value); return *this;}
    inline Computation& WithGrowthRate(GrowthRateComputation&& value) { SetGrowthRate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique values computation configuration.</p>
     */
    inline const UniqueValuesComputation& GetUniqueValues() const{ return m_uniqueValues; }
    inline bool UniqueValuesHasBeenSet() const { return m_uniqueValuesHasBeenSet; }
    inline void SetUniqueValues(const UniqueValuesComputation& value) { m_uniqueValuesHasBeenSet = true; m_uniqueValues = value; }
    inline void SetUniqueValues(UniqueValuesComputation&& value) { m_uniqueValuesHasBeenSet = true; m_uniqueValues = std::move(value); }
    inline Computation& WithUniqueValues(const UniqueValuesComputation& value) { SetUniqueValues(value); return *this;}
    inline Computation& WithUniqueValues(UniqueValuesComputation&& value) { SetUniqueValues(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The forecast computation configuration.</p>
     */
    inline const ForecastComputation& GetForecast() const{ return m_forecast; }
    inline bool ForecastHasBeenSet() const { return m_forecastHasBeenSet; }
    inline void SetForecast(const ForecastComputation& value) { m_forecastHasBeenSet = true; m_forecast = value; }
    inline void SetForecast(ForecastComputation&& value) { m_forecastHasBeenSet = true; m_forecast = std::move(value); }
    inline Computation& WithForecast(const ForecastComputation& value) { SetForecast(value); return *this;}
    inline Computation& WithForecast(ForecastComputation&& value) { SetForecast(std::move(value)); return *this;}
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
