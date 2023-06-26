/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/GaugeChartArcConditionalFormatting.h>
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

GaugeChartArcConditionalFormatting::GaugeChartArcConditionalFormatting() : 
    m_foregroundColorHasBeenSet(false)
{
}

GaugeChartArcConditionalFormatting::GaugeChartArcConditionalFormatting(JsonView jsonValue) : 
    m_foregroundColorHasBeenSet(false)
{
  *this = jsonValue;
}

GaugeChartArcConditionalFormatting& GaugeChartArcConditionalFormatting::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ForegroundColor"))
  {
    m_foregroundColor = jsonValue.GetObject("ForegroundColor");

    m_foregroundColorHasBeenSet = true;
  }

  return *this;
}

JsonValue GaugeChartArcConditionalFormatting::Jsonize() const
{
  JsonValue payload;

  if(m_foregroundColorHasBeenSet)
  {
   payload.WithObject("ForegroundColor", m_foregroundColor.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
