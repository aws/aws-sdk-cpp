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


    /**
     * <p>The top ranked and bottom ranked computation configuration.</p>
     */
    inline const TopBottomRankedComputation& GetTopBottomRanked() const{ return m_topBottomRanked; }

    /**
     * <p>The top ranked and bottom ranked computation configuration.</p>
     */
    inline bool TopBottomRankedHasBeenSet() const { return m_topBottomRankedHasBeenSet; }

    /**
     * <p>The top ranked and bottom ranked computation configuration.</p>
     */
    inline void SetTopBottomRanked(const TopBottomRankedComputation& value) { m_topBottomRankedHasBeenSet = true; m_topBottomRanked = value; }

    /**
     * <p>The top ranked and bottom ranked computation configuration.</p>
     */
    inline void SetTopBottomRanked(TopBottomRankedComputation&& value) { m_topBottomRankedHasBeenSet = true; m_topBottomRanked = std::move(value); }

    /**
     * <p>The top ranked and bottom ranked computation configuration.</p>
     */
    inline Computation& WithTopBottomRanked(const TopBottomRankedComputation& value) { SetTopBottomRanked(value); return *this;}

    /**
     * <p>The top ranked and bottom ranked computation configuration.</p>
     */
    inline Computation& WithTopBottomRanked(TopBottomRankedComputation&& value) { SetTopBottomRanked(std::move(value)); return *this;}


    /**
     * <p>The top movers and bottom movers computation configuration.</p>
     */
    inline const TopBottomMoversComputation& GetTopBottomMovers() const{ return m_topBottomMovers; }

    /**
     * <p>The top movers and bottom movers computation configuration.</p>
     */
    inline bool TopBottomMoversHasBeenSet() const { return m_topBottomMoversHasBeenSet; }

    /**
     * <p>The top movers and bottom movers computation configuration.</p>
     */
    inline void SetTopBottomMovers(const TopBottomMoversComputation& value) { m_topBottomMoversHasBeenSet = true; m_topBottomMovers = value; }

    /**
     * <p>The top movers and bottom movers computation configuration.</p>
     */
    inline void SetTopBottomMovers(TopBottomMoversComputation&& value) { m_topBottomMoversHasBeenSet = true; m_topBottomMovers = std::move(value); }

    /**
     * <p>The top movers and bottom movers computation configuration.</p>
     */
    inline Computation& WithTopBottomMovers(const TopBottomMoversComputation& value) { SetTopBottomMovers(value); return *this;}

    /**
     * <p>The top movers and bottom movers computation configuration.</p>
     */
    inline Computation& WithTopBottomMovers(TopBottomMoversComputation&& value) { SetTopBottomMovers(std::move(value)); return *this;}


    /**
     * <p>The total aggregation computation configuration.</p>
     */
    inline const TotalAggregationComputation& GetTotalAggregation() const{ return m_totalAggregation; }

    /**
     * <p>The total aggregation computation configuration.</p>
     */
    inline bool TotalAggregationHasBeenSet() const { return m_totalAggregationHasBeenSet; }

    /**
     * <p>The total aggregation computation configuration.</p>
     */
    inline void SetTotalAggregation(const TotalAggregationComputation& value) { m_totalAggregationHasBeenSet = true; m_totalAggregation = value; }

    /**
     * <p>The total aggregation computation configuration.</p>
     */
    inline void SetTotalAggregation(TotalAggregationComputation&& value) { m_totalAggregationHasBeenSet = true; m_totalAggregation = std::move(value); }

    /**
     * <p>The total aggregation computation configuration.</p>
     */
    inline Computation& WithTotalAggregation(const TotalAggregationComputation& value) { SetTotalAggregation(value); return *this;}

    /**
     * <p>The total aggregation computation configuration.</p>
     */
    inline Computation& WithTotalAggregation(TotalAggregationComputation&& value) { SetTotalAggregation(std::move(value)); return *this;}


    /**
     * <p>The maximum and minimum computation configuration.</p>
     */
    inline const MaximumMinimumComputation& GetMaximumMinimum() const{ return m_maximumMinimum; }

    /**
     * <p>The maximum and minimum computation configuration.</p>
     */
    inline bool MaximumMinimumHasBeenSet() const { return m_maximumMinimumHasBeenSet; }

    /**
     * <p>The maximum and minimum computation configuration.</p>
     */
    inline void SetMaximumMinimum(const MaximumMinimumComputation& value) { m_maximumMinimumHasBeenSet = true; m_maximumMinimum = value; }

    /**
     * <p>The maximum and minimum computation configuration.</p>
     */
    inline void SetMaximumMinimum(MaximumMinimumComputation&& value) { m_maximumMinimumHasBeenSet = true; m_maximumMinimum = std::move(value); }

    /**
     * <p>The maximum and minimum computation configuration.</p>
     */
    inline Computation& WithMaximumMinimum(const MaximumMinimumComputation& value) { SetMaximumMinimum(value); return *this;}

    /**
     * <p>The maximum and minimum computation configuration.</p>
     */
    inline Computation& WithMaximumMinimum(MaximumMinimumComputation&& value) { SetMaximumMinimum(std::move(value)); return *this;}


    /**
     * <p>The metric comparison computation configuration.</p>
     */
    inline const MetricComparisonComputation& GetMetricComparison() const{ return m_metricComparison; }

    /**
     * <p>The metric comparison computation configuration.</p>
     */
    inline bool MetricComparisonHasBeenSet() const { return m_metricComparisonHasBeenSet; }

    /**
     * <p>The metric comparison computation configuration.</p>
     */
    inline void SetMetricComparison(const MetricComparisonComputation& value) { m_metricComparisonHasBeenSet = true; m_metricComparison = value; }

    /**
     * <p>The metric comparison computation configuration.</p>
     */
    inline void SetMetricComparison(MetricComparisonComputation&& value) { m_metricComparisonHasBeenSet = true; m_metricComparison = std::move(value); }

    /**
     * <p>The metric comparison computation configuration.</p>
     */
    inline Computation& WithMetricComparison(const MetricComparisonComputation& value) { SetMetricComparison(value); return *this;}

    /**
     * <p>The metric comparison computation configuration.</p>
     */
    inline Computation& WithMetricComparison(MetricComparisonComputation&& value) { SetMetricComparison(std::move(value)); return *this;}


    /**
     * <p>The period over period computation configuration.</p>
     */
    inline const PeriodOverPeriodComputation& GetPeriodOverPeriod() const{ return m_periodOverPeriod; }

    /**
     * <p>The period over period computation configuration.</p>
     */
    inline bool PeriodOverPeriodHasBeenSet() const { return m_periodOverPeriodHasBeenSet; }

    /**
     * <p>The period over period computation configuration.</p>
     */
    inline void SetPeriodOverPeriod(const PeriodOverPeriodComputation& value) { m_periodOverPeriodHasBeenSet = true; m_periodOverPeriod = value; }

    /**
     * <p>The period over period computation configuration.</p>
     */
    inline void SetPeriodOverPeriod(PeriodOverPeriodComputation&& value) { m_periodOverPeriodHasBeenSet = true; m_periodOverPeriod = std::move(value); }

    /**
     * <p>The period over period computation configuration.</p>
     */
    inline Computation& WithPeriodOverPeriod(const PeriodOverPeriodComputation& value) { SetPeriodOverPeriod(value); return *this;}

    /**
     * <p>The period over period computation configuration.</p>
     */
    inline Computation& WithPeriodOverPeriod(PeriodOverPeriodComputation&& value) { SetPeriodOverPeriod(std::move(value)); return *this;}


    /**
     * <p>The period to <code>DataSetIdentifier</code> computation configuration.</p>
     */
    inline const PeriodToDateComputation& GetPeriodToDate() const{ return m_periodToDate; }

    /**
     * <p>The period to <code>DataSetIdentifier</code> computation configuration.</p>
     */
    inline bool PeriodToDateHasBeenSet() const { return m_periodToDateHasBeenSet; }

    /**
     * <p>The period to <code>DataSetIdentifier</code> computation configuration.</p>
     */
    inline void SetPeriodToDate(const PeriodToDateComputation& value) { m_periodToDateHasBeenSet = true; m_periodToDate = value; }

    /**
     * <p>The period to <code>DataSetIdentifier</code> computation configuration.</p>
     */
    inline void SetPeriodToDate(PeriodToDateComputation&& value) { m_periodToDateHasBeenSet = true; m_periodToDate = std::move(value); }

    /**
     * <p>The period to <code>DataSetIdentifier</code> computation configuration.</p>
     */
    inline Computation& WithPeriodToDate(const PeriodToDateComputation& value) { SetPeriodToDate(value); return *this;}

    /**
     * <p>The period to <code>DataSetIdentifier</code> computation configuration.</p>
     */
    inline Computation& WithPeriodToDate(PeriodToDateComputation&& value) { SetPeriodToDate(std::move(value)); return *this;}


    /**
     * <p>The growth rate computation configuration.</p>
     */
    inline const GrowthRateComputation& GetGrowthRate() const{ return m_growthRate; }

    /**
     * <p>The growth rate computation configuration.</p>
     */
    inline bool GrowthRateHasBeenSet() const { return m_growthRateHasBeenSet; }

    /**
     * <p>The growth rate computation configuration.</p>
     */
    inline void SetGrowthRate(const GrowthRateComputation& value) { m_growthRateHasBeenSet = true; m_growthRate = value; }

    /**
     * <p>The growth rate computation configuration.</p>
     */
    inline void SetGrowthRate(GrowthRateComputation&& value) { m_growthRateHasBeenSet = true; m_growthRate = std::move(value); }

    /**
     * <p>The growth rate computation configuration.</p>
     */
    inline Computation& WithGrowthRate(const GrowthRateComputation& value) { SetGrowthRate(value); return *this;}

    /**
     * <p>The growth rate computation configuration.</p>
     */
    inline Computation& WithGrowthRate(GrowthRateComputation&& value) { SetGrowthRate(std::move(value)); return *this;}


    /**
     * <p>The unique values computation configuration.</p>
     */
    inline const UniqueValuesComputation& GetUniqueValues() const{ return m_uniqueValues; }

    /**
     * <p>The unique values computation configuration.</p>
     */
    inline bool UniqueValuesHasBeenSet() const { return m_uniqueValuesHasBeenSet; }

    /**
     * <p>The unique values computation configuration.</p>
     */
    inline void SetUniqueValues(const UniqueValuesComputation& value) { m_uniqueValuesHasBeenSet = true; m_uniqueValues = value; }

    /**
     * <p>The unique values computation configuration.</p>
     */
    inline void SetUniqueValues(UniqueValuesComputation&& value) { m_uniqueValuesHasBeenSet = true; m_uniqueValues = std::move(value); }

    /**
     * <p>The unique values computation configuration.</p>
     */
    inline Computation& WithUniqueValues(const UniqueValuesComputation& value) { SetUniqueValues(value); return *this;}

    /**
     * <p>The unique values computation configuration.</p>
     */
    inline Computation& WithUniqueValues(UniqueValuesComputation&& value) { SetUniqueValues(std::move(value)); return *this;}


    /**
     * <p>The forecast computation configuration.</p>
     */
    inline const ForecastComputation& GetForecast() const{ return m_forecast; }

    /**
     * <p>The forecast computation configuration.</p>
     */
    inline bool ForecastHasBeenSet() const { return m_forecastHasBeenSet; }

    /**
     * <p>The forecast computation configuration.</p>
     */
    inline void SetForecast(const ForecastComputation& value) { m_forecastHasBeenSet = true; m_forecast = value; }

    /**
     * <p>The forecast computation configuration.</p>
     */
    inline void SetForecast(ForecastComputation&& value) { m_forecastHasBeenSet = true; m_forecast = std::move(value); }

    /**
     * <p>The forecast computation configuration.</p>
     */
    inline Computation& WithForecast(const ForecastComputation& value) { SetForecast(value); return *this;}

    /**
     * <p>The forecast computation configuration.</p>
     */
    inline Computation& WithForecast(ForecastComputation&& value) { SetForecast(std::move(value)); return *this;}

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
