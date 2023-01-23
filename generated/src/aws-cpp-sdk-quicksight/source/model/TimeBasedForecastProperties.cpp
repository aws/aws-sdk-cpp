/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TimeBasedForecastProperties.h>
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

TimeBasedForecastProperties::TimeBasedForecastProperties() : 
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
    m_seasonality(0),
    m_seasonalityHasBeenSet(false)
{
}

TimeBasedForecastProperties::TimeBasedForecastProperties(JsonView jsonValue) : 
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
    m_seasonality(0),
    m_seasonalityHasBeenSet(false)
{
  *this = jsonValue;
}

TimeBasedForecastProperties& TimeBasedForecastProperties::operator =(JsonView jsonValue)
{
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
    m_seasonality = jsonValue.GetInteger("Seasonality");

    m_seasonalityHasBeenSet = true;
  }

  return *this;
}

JsonValue TimeBasedForecastProperties::Jsonize() const
{
  JsonValue payload;

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
   payload.WithInteger("Seasonality", m_seasonality);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
