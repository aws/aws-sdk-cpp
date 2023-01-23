/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ForecastConfiguration.h>
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

ForecastConfiguration::ForecastConfiguration() : 
    m_forecastPropertiesHasBeenSet(false),
    m_scenarioHasBeenSet(false)
{
}

ForecastConfiguration::ForecastConfiguration(JsonView jsonValue) : 
    m_forecastPropertiesHasBeenSet(false),
    m_scenarioHasBeenSet(false)
{
  *this = jsonValue;
}

ForecastConfiguration& ForecastConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ForecastProperties"))
  {
    m_forecastProperties = jsonValue.GetObject("ForecastProperties");

    m_forecastPropertiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Scenario"))
  {
    m_scenario = jsonValue.GetObject("Scenario");

    m_scenarioHasBeenSet = true;
  }

  return *this;
}

JsonValue ForecastConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_forecastPropertiesHasBeenSet)
  {
   payload.WithObject("ForecastProperties", m_forecastProperties.Jsonize());

  }

  if(m_scenarioHasBeenSet)
  {
   payload.WithObject("Scenario", m_scenario.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
