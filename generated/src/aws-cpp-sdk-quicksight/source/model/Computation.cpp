/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/Computation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

Computation::Computation() : 
    m_topBottomRankedHasBeenSet(false),
    m_topBottomMoversHasBeenSet(false),
    m_totalAggregationHasBeenSet(false),
    m_maximumMinimumHasBeenSet(false),
    m_metricComparisonHasBeenSet(false),
    m_periodOverPeriodHasBeenSet(false),
    m_periodToDateHasBeenSet(false),
    m_growthRateHasBeenSet(false),
    m_uniqueValuesHasBeenSet(false),
    m_forecastHasBeenSet(false)
{
}

Computation::Computation(JsonView jsonValue) : 
    m_topBottomRankedHasBeenSet(false),
    m_topBottomMoversHasBeenSet(false),
    m_totalAggregationHasBeenSet(false),
    m_maximumMinimumHasBeenSet(false),
    m_metricComparisonHasBeenSet(false),
    m_periodOverPeriodHasBeenSet(false),
    m_periodToDateHasBeenSet(false),
    m_growthRateHasBeenSet(false),
    m_uniqueValuesHasBeenSet(false),
    m_forecastHasBeenSet(false)
{
  *this = jsonValue;
}

Computation& Computation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TopBottomRanked"))
  {
    m_topBottomRanked = jsonValue.GetObject("TopBottomRanked");

    m_topBottomRankedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TopBottomMovers"))
  {
    m_topBottomMovers = jsonValue.GetObject("TopBottomMovers");

    m_topBottomMoversHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TotalAggregation"))
  {
    m_totalAggregation = jsonValue.GetObject("TotalAggregation");

    m_totalAggregationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaximumMinimum"))
  {
    m_maximumMinimum = jsonValue.GetObject("MaximumMinimum");

    m_maximumMinimumHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MetricComparison"))
  {
    m_metricComparison = jsonValue.GetObject("MetricComparison");

    m_metricComparisonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PeriodOverPeriod"))
  {
    m_periodOverPeriod = jsonValue.GetObject("PeriodOverPeriod");

    m_periodOverPeriodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PeriodToDate"))
  {
    m_periodToDate = jsonValue.GetObject("PeriodToDate");

    m_periodToDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GrowthRate"))
  {
    m_growthRate = jsonValue.GetObject("GrowthRate");

    m_growthRateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UniqueValues"))
  {
    m_uniqueValues = jsonValue.GetObject("UniqueValues");

    m_uniqueValuesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Forecast"))
  {
    m_forecast = jsonValue.GetObject("Forecast");

    m_forecastHasBeenSet = true;
  }

  return *this;
}

JsonValue Computation::Jsonize() const
{
  JsonValue payload;

  if(m_topBottomRankedHasBeenSet)
  {
   payload.WithObject("TopBottomRanked", m_topBottomRanked.Jsonize());

  }

  if(m_topBottomMoversHasBeenSet)
  {
   payload.WithObject("TopBottomMovers", m_topBottomMovers.Jsonize());

  }

  if(m_totalAggregationHasBeenSet)
  {
   payload.WithObject("TotalAggregation", m_totalAggregation.Jsonize());

  }

  if(m_maximumMinimumHasBeenSet)
  {
   payload.WithObject("MaximumMinimum", m_maximumMinimum.Jsonize());

  }

  if(m_metricComparisonHasBeenSet)
  {
   payload.WithObject("MetricComparison", m_metricComparison.Jsonize());

  }

  if(m_periodOverPeriodHasBeenSet)
  {
   payload.WithObject("PeriodOverPeriod", m_periodOverPeriod.Jsonize());

  }

  if(m_periodToDateHasBeenSet)
  {
   payload.WithObject("PeriodToDate", m_periodToDate.Jsonize());

  }

  if(m_growthRateHasBeenSet)
  {
   payload.WithObject("GrowthRate", m_growthRate.Jsonize());

  }

  if(m_uniqueValuesHasBeenSet)
  {
   payload.WithObject("UniqueValues", m_uniqueValues.Jsonize());

  }

  if(m_forecastHasBeenSet)
  {
   payload.WithObject("Forecast", m_forecast.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
