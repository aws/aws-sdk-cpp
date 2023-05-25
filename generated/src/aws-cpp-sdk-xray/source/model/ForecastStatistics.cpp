/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/xray/model/ForecastStatistics.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace XRay
{
namespace Model
{

ForecastStatistics::ForecastStatistics() : 
    m_faultCountHigh(0),
    m_faultCountHighHasBeenSet(false),
    m_faultCountLow(0),
    m_faultCountLowHasBeenSet(false)
{
}

ForecastStatistics::ForecastStatistics(JsonView jsonValue) : 
    m_faultCountHigh(0),
    m_faultCountHighHasBeenSet(false),
    m_faultCountLow(0),
    m_faultCountLowHasBeenSet(false)
{
  *this = jsonValue;
}

ForecastStatistics& ForecastStatistics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FaultCountHigh"))
  {
    m_faultCountHigh = jsonValue.GetInt64("FaultCountHigh");

    m_faultCountHighHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FaultCountLow"))
  {
    m_faultCountLow = jsonValue.GetInt64("FaultCountLow");

    m_faultCountLowHasBeenSet = true;
  }

  return *this;
}

JsonValue ForecastStatistics::Jsonize() const
{
  JsonValue payload;

  if(m_faultCountHighHasBeenSet)
  {
   payload.WithInt64("FaultCountHigh", m_faultCountHigh);

  }

  if(m_faultCountLowHasBeenSet)
  {
   payload.WithInt64("FaultCountLow", m_faultCountLow);

  }

  return payload;
}

} // namespace Model
} // namespace XRay
} // namespace Aws
