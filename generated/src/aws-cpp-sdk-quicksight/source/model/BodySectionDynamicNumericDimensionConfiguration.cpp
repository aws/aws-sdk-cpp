/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/BodySectionDynamicNumericDimensionConfiguration.h>
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

BodySectionDynamicNumericDimensionConfiguration::BodySectionDynamicNumericDimensionConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

BodySectionDynamicNumericDimensionConfiguration& BodySectionDynamicNumericDimensionConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Column"))
  {
    m_column = jsonValue.GetObject("Column");
    m_columnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Limit"))
  {
    m_limit = jsonValue.GetInteger("Limit");
    m_limitHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SortByMetrics"))
  {
    Aws::Utils::Array<JsonView> sortByMetricsJsonList = jsonValue.GetArray("SortByMetrics");
    for(unsigned sortByMetricsIndex = 0; sortByMetricsIndex < sortByMetricsJsonList.GetLength(); ++sortByMetricsIndex)
    {
      m_sortByMetrics.push_back(sortByMetricsJsonList[sortByMetricsIndex].AsObject());
    }
    m_sortByMetricsHasBeenSet = true;
  }
  return *this;
}

JsonValue BodySectionDynamicNumericDimensionConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_columnHasBeenSet)
  {
   payload.WithObject("Column", m_column.Jsonize());

  }

  if(m_limitHasBeenSet)
  {
   payload.WithInteger("Limit", m_limit);

  }

  if(m_sortByMetricsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sortByMetricsJsonList(m_sortByMetrics.size());
   for(unsigned sortByMetricsIndex = 0; sortByMetricsIndex < sortByMetricsJsonList.GetLength(); ++sortByMetricsIndex)
   {
     sortByMetricsJsonList[sortByMetricsIndex].AsObject(m_sortByMetrics[sortByMetricsIndex].Jsonize());
   }
   payload.WithArray("SortByMetrics", std::move(sortByMetricsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
