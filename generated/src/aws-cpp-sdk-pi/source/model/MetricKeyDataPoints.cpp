/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pi/model/MetricKeyDataPoints.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PI
{
namespace Model
{

MetricKeyDataPoints::MetricKeyDataPoints() : 
    m_keyHasBeenSet(false),
    m_dataPointsHasBeenSet(false)
{
}

MetricKeyDataPoints::MetricKeyDataPoints(JsonView jsonValue) : 
    m_keyHasBeenSet(false),
    m_dataPointsHasBeenSet(false)
{
  *this = jsonValue;
}

MetricKeyDataPoints& MetricKeyDataPoints::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Key"))
  {
    m_key = jsonValue.GetObject("Key");

    m_keyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataPoints"))
  {
    Aws::Utils::Array<JsonView> dataPointsJsonList = jsonValue.GetArray("DataPoints");
    for(unsigned dataPointsIndex = 0; dataPointsIndex < dataPointsJsonList.GetLength(); ++dataPointsIndex)
    {
      m_dataPoints.push_back(dataPointsJsonList[dataPointsIndex].AsObject());
    }
    m_dataPointsHasBeenSet = true;
  }

  return *this;
}

JsonValue MetricKeyDataPoints::Jsonize() const
{
  JsonValue payload;

  if(m_keyHasBeenSet)
  {
   payload.WithObject("Key", m_key.Jsonize());

  }

  if(m_dataPointsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dataPointsJsonList(m_dataPoints.size());
   for(unsigned dataPointsIndex = 0; dataPointsIndex < dataPointsJsonList.GetLength(); ++dataPointsIndex)
   {
     dataPointsJsonList[dataPointsIndex].AsObject(m_dataPoints[dataPointsIndex].Jsonize());
   }
   payload.WithArray("DataPoints", std::move(dataPointsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace PI
} // namespace Aws
