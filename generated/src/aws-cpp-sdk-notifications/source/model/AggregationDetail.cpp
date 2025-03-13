/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/notifications/model/AggregationDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Notifications
{
namespace Model
{

AggregationDetail::AggregationDetail(JsonView jsonValue)
{
  *this = jsonValue;
}

AggregationDetail& AggregationDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("summarizationDimensions"))
  {
    Aws::Utils::Array<JsonView> summarizationDimensionsJsonList = jsonValue.GetArray("summarizationDimensions");
    for(unsigned summarizationDimensionsIndex = 0; summarizationDimensionsIndex < summarizationDimensionsJsonList.GetLength(); ++summarizationDimensionsIndex)
    {
      m_summarizationDimensions.push_back(summarizationDimensionsJsonList[summarizationDimensionsIndex].AsObject());
    }
    m_summarizationDimensionsHasBeenSet = true;
  }
  return *this;
}

JsonValue AggregationDetail::Jsonize() const
{
  JsonValue payload;

  if(m_summarizationDimensionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> summarizationDimensionsJsonList(m_summarizationDimensions.size());
   for(unsigned summarizationDimensionsIndex = 0; summarizationDimensionsIndex < summarizationDimensionsJsonList.GetLength(); ++summarizationDimensionsIndex)
   {
     summarizationDimensionsJsonList[summarizationDimensionsIndex].AsObject(m_summarizationDimensions[summarizationDimensionsIndex].Jsonize());
   }
   payload.WithArray("summarizationDimensions", std::move(summarizationDimensionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Notifications
} // namespace Aws
