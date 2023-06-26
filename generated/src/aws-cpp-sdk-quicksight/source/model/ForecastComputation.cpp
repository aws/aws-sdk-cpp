/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ForecastComputation.h>
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

ForecastComputation::ForecastComputation() : 
    m_computationIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_timeHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_periodsForward(0),
    m_periodsForwardHasBeenSet(false),
    m_periodsBackward(0),
    m_periodsBackwardHasBeenSet(false),
    m_upperBoundary(0.0),
    m_upperBoundaryHasBeenSet(false),
    m_lowerBoundary(0.0),
    m_lowerBoundaryHasBeenSet(false),
    m_predictionInterval(0),
    m_predictionIntervalHasBeenSet(false),
    m_seasonality(ForecastComputationSeasonality::NOT_SET),
    m_seasonalityHasBeenSet(false),
    m_customSeasonalityValue(0),
    m_customSeasonalityValueHasBeenSet(false)
{
}

ForecastComputation::ForecastComputation(JsonView jsonValue) : 
    m_computationIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_timeHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_periodsForward(0),
    m_periodsForwardHasBeenSet(false),
    m_periodsBackward(0),
    m_periodsBackwardHasBeenSet(false),
    m_upperBoundary(0.0),
    m_upperBoundaryHasBeenSet(false),
    m_lowerBoundary(0.0),
    m_lowerBoundaryHasBeenSet(false),
    m_predictionInterval(0),
    m_predictionIntervalHasBeenSet(false),
    m_seasonality(ForecastComputationSeasonality::NOT_SET),
    m_seasonalityHasBeenSet(false),
    m_customSeasonalityValue(0),
    m_customSeasonalityValueHasBeenSet(false)
{
  *this = jsonValue;
}

ForecastComputation& ForecastComputation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ComputationId"))
  {
    m_computationId = jsonValue.GetString("ComputationId");

    m_computationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Time"))
  {
    m_time = jsonValue.GetObject("Time");

    m_timeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetObject("Value");

    m_valueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PeriodsForward"))
  {
    m_periodsForward = jsonValue.GetInteger("PeriodsForward");

    m_periodsForwardHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PeriodsBackward"))
  {
    m_periodsBackward = jsonValue.GetInteger("PeriodsBackward");

    m_periodsBackwardHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UpperBoundary"))
  {
    m_upperBoundary = jsonValue.GetDouble("UpperBoundary");

    m_upperBoundaryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LowerBoundary"))
  {
    m_lowerBoundary = jsonValue.GetDouble("LowerBoundary");

    m_lowerBoundaryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PredictionInterval"))
  {
    m_predictionInterval = jsonValue.GetInteger("PredictionInterval");

    m_predictionIntervalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Seasonality"))
  {
    m_seasonality = ForecastComputationSeasonalityMapper::GetForecastComputationSeasonalityForName(jsonValue.GetString("Seasonality"));

    m_seasonalityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CustomSeasonalityValue"))
  {
    m_customSeasonalityValue = jsonValue.GetInteger("CustomSeasonalityValue");

    m_customSeasonalityValueHasBeenSet = true;
  }

  return *this;
}

JsonValue ForecastComputation::Jsonize() const
{
  JsonValue payload;

  if(m_computationIdHasBeenSet)
  {
   payload.WithString("ComputationId", m_computationId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_timeHasBeenSet)
  {
   payload.WithObject("Time", m_time.Jsonize());

  }

  if(m_valueHasBeenSet)
  {
   payload.WithObject("Value", m_value.Jsonize());

  }

  if(m_periodsForwardHasBeenSet)
  {
   payload.WithInteger("PeriodsForward", m_periodsForward);

  }

  if(m_periodsBackwardHasBeenSet)
  {
   payload.WithInteger("PeriodsBackward", m_periodsBackward);

  }

  if(m_upperBoundaryHasBeenSet)
  {
   payload.WithDouble("UpperBoundary", m_upperBoundary);

  }

  if(m_lowerBoundaryHasBeenSet)
  {
   payload.WithDouble("LowerBoundary", m_lowerBoundary);

  }

  if(m_predictionIntervalHasBeenSet)
  {
   payload.WithInteger("PredictionInterval", m_predictionInterval);

  }

  if(m_seasonalityHasBeenSet)
  {
   payload.WithString("Seasonality", ForecastComputationSeasonalityMapper::GetNameForForecastComputationSeasonality(m_seasonality));
  }

  if(m_customSeasonalityValueHasBeenSet)
  {
   payload.WithInteger("CustomSeasonalityValue", m_customSeasonalityValue);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
