/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/LineSeriesAxisDisplayOptions.h>
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

LineSeriesAxisDisplayOptions::LineSeriesAxisDisplayOptions() : 
    m_axisOptionsHasBeenSet(false),
    m_missingDataConfigurationsHasBeenSet(false)
{
}

LineSeriesAxisDisplayOptions::LineSeriesAxisDisplayOptions(JsonView jsonValue) : 
    m_axisOptionsHasBeenSet(false),
    m_missingDataConfigurationsHasBeenSet(false)
{
  *this = jsonValue;
}

LineSeriesAxisDisplayOptions& LineSeriesAxisDisplayOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AxisOptions"))
  {
    m_axisOptions = jsonValue.GetObject("AxisOptions");

    m_axisOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MissingDataConfigurations"))
  {
    Aws::Utils::Array<JsonView> missingDataConfigurationsJsonList = jsonValue.GetArray("MissingDataConfigurations");
    for(unsigned missingDataConfigurationsIndex = 0; missingDataConfigurationsIndex < missingDataConfigurationsJsonList.GetLength(); ++missingDataConfigurationsIndex)
    {
      m_missingDataConfigurations.push_back(missingDataConfigurationsJsonList[missingDataConfigurationsIndex].AsObject());
    }
    m_missingDataConfigurationsHasBeenSet = true;
  }

  return *this;
}

JsonValue LineSeriesAxisDisplayOptions::Jsonize() const
{
  JsonValue payload;

  if(m_axisOptionsHasBeenSet)
  {
   payload.WithObject("AxisOptions", m_axisOptions.Jsonize());

  }

  if(m_missingDataConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> missingDataConfigurationsJsonList(m_missingDataConfigurations.size());
   for(unsigned missingDataConfigurationsIndex = 0; missingDataConfigurationsIndex < missingDataConfigurationsJsonList.GetLength(); ++missingDataConfigurationsIndex)
   {
     missingDataConfigurationsJsonList[missingDataConfigurationsIndex].AsObject(m_missingDataConfigurations[missingDataConfigurationsIndex].Jsonize());
   }
   payload.WithArray("MissingDataConfigurations", std::move(missingDataConfigurationsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
