/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/GaugeChartColorConfiguration.h>
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

GaugeChartColorConfiguration::GaugeChartColorConfiguration() : 
    m_foregroundColorHasBeenSet(false),
    m_backgroundColorHasBeenSet(false)
{
}

GaugeChartColorConfiguration::GaugeChartColorConfiguration(JsonView jsonValue) : 
    m_foregroundColorHasBeenSet(false),
    m_backgroundColorHasBeenSet(false)
{
  *this = jsonValue;
}

GaugeChartColorConfiguration& GaugeChartColorConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ForegroundColor"))
  {
    m_foregroundColor = jsonValue.GetString("ForegroundColor");

    m_foregroundColorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BackgroundColor"))
  {
    m_backgroundColor = jsonValue.GetString("BackgroundColor");

    m_backgroundColorHasBeenSet = true;
  }

  return *this;
}

JsonValue GaugeChartColorConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_foregroundColorHasBeenSet)
  {
   payload.WithString("ForegroundColor", m_foregroundColor);

  }

  if(m_backgroundColorHasBeenSet)
  {
   payload.WithString("BackgroundColor", m_backgroundColor);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
