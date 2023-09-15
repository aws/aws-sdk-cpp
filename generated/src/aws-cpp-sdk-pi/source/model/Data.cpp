/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pi/model/Data.h>
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

Data::Data() : 
    m_performanceInsightsMetricHasBeenSet(false)
{
}

Data::Data(JsonView jsonValue) : 
    m_performanceInsightsMetricHasBeenSet(false)
{
  *this = jsonValue;
}

Data& Data::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PerformanceInsightsMetric"))
  {
    m_performanceInsightsMetric = jsonValue.GetObject("PerformanceInsightsMetric");

    m_performanceInsightsMetricHasBeenSet = true;
  }

  return *this;
}

JsonValue Data::Jsonize() const
{
  JsonValue payload;

  if(m_performanceInsightsMetricHasBeenSet)
  {
   payload.WithObject("PerformanceInsightsMetric", m_performanceInsightsMetric.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace PI
} // namespace Aws
