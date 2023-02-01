/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/WaterfallChartOptions.h>
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

WaterfallChartOptions::WaterfallChartOptions() : 
    m_totalBarLabelHasBeenSet(false)
{
}

WaterfallChartOptions::WaterfallChartOptions(JsonView jsonValue) : 
    m_totalBarLabelHasBeenSet(false)
{
  *this = jsonValue;
}

WaterfallChartOptions& WaterfallChartOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TotalBarLabel"))
  {
    m_totalBarLabel = jsonValue.GetString("TotalBarLabel");

    m_totalBarLabelHasBeenSet = true;
  }

  return *this;
}

JsonValue WaterfallChartOptions::Jsonize() const
{
  JsonValue payload;

  if(m_totalBarLabelHasBeenSet)
  {
   payload.WithString("TotalBarLabel", m_totalBarLabel);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
