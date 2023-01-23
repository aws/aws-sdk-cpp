/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/xray/model/EdgeStatistics.h>
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

EdgeStatistics::EdgeStatistics() : 
    m_okCount(0),
    m_okCountHasBeenSet(false),
    m_errorStatisticsHasBeenSet(false),
    m_faultStatisticsHasBeenSet(false),
    m_totalCount(0),
    m_totalCountHasBeenSet(false),
    m_totalResponseTime(0.0),
    m_totalResponseTimeHasBeenSet(false)
{
}

EdgeStatistics::EdgeStatistics(JsonView jsonValue) : 
    m_okCount(0),
    m_okCountHasBeenSet(false),
    m_errorStatisticsHasBeenSet(false),
    m_faultStatisticsHasBeenSet(false),
    m_totalCount(0),
    m_totalCountHasBeenSet(false),
    m_totalResponseTime(0.0),
    m_totalResponseTimeHasBeenSet(false)
{
  *this = jsonValue;
}

EdgeStatistics& EdgeStatistics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OkCount"))
  {
    m_okCount = jsonValue.GetInt64("OkCount");

    m_okCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorStatistics"))
  {
    m_errorStatistics = jsonValue.GetObject("ErrorStatistics");

    m_errorStatisticsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FaultStatistics"))
  {
    m_faultStatistics = jsonValue.GetObject("FaultStatistics");

    m_faultStatisticsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TotalCount"))
  {
    m_totalCount = jsonValue.GetInt64("TotalCount");

    m_totalCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TotalResponseTime"))
  {
    m_totalResponseTime = jsonValue.GetDouble("TotalResponseTime");

    m_totalResponseTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue EdgeStatistics::Jsonize() const
{
  JsonValue payload;

  if(m_okCountHasBeenSet)
  {
   payload.WithInt64("OkCount", m_okCount);

  }

  if(m_errorStatisticsHasBeenSet)
  {
   payload.WithObject("ErrorStatistics", m_errorStatistics.Jsonize());

  }

  if(m_faultStatisticsHasBeenSet)
  {
   payload.WithObject("FaultStatistics", m_faultStatistics.Jsonize());

  }

  if(m_totalCountHasBeenSet)
  {
   payload.WithInt64("TotalCount", m_totalCount);

  }

  if(m_totalResponseTimeHasBeenSet)
  {
   payload.WithDouble("TotalResponseTime", m_totalResponseTime);

  }

  return payload;
}

} // namespace Model
} // namespace XRay
} // namespace Aws
