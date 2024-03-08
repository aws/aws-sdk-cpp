/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/WaterfallChartGroupColorConfiguration.h>
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

WaterfallChartGroupColorConfiguration::WaterfallChartGroupColorConfiguration() : 
    m_positiveBarColorHasBeenSet(false),
    m_negativeBarColorHasBeenSet(false),
    m_totalBarColorHasBeenSet(false)
{
}

WaterfallChartGroupColorConfiguration::WaterfallChartGroupColorConfiguration(JsonView jsonValue) : 
    m_positiveBarColorHasBeenSet(false),
    m_negativeBarColorHasBeenSet(false),
    m_totalBarColorHasBeenSet(false)
{
  *this = jsonValue;
}

WaterfallChartGroupColorConfiguration& WaterfallChartGroupColorConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PositiveBarColor"))
  {
    m_positiveBarColor = jsonValue.GetString("PositiveBarColor");

    m_positiveBarColorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NegativeBarColor"))
  {
    m_negativeBarColor = jsonValue.GetString("NegativeBarColor");

    m_negativeBarColorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TotalBarColor"))
  {
    m_totalBarColor = jsonValue.GetString("TotalBarColor");

    m_totalBarColorHasBeenSet = true;
  }

  return *this;
}

JsonValue WaterfallChartGroupColorConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_positiveBarColorHasBeenSet)
  {
   payload.WithString("PositiveBarColor", m_positiveBarColor);

  }

  if(m_negativeBarColorHasBeenSet)
  {
   payload.WithString("NegativeBarColor", m_negativeBarColor);

  }

  if(m_totalBarColorHasBeenSet)
  {
   payload.WithString("TotalBarColor", m_totalBarColor);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
