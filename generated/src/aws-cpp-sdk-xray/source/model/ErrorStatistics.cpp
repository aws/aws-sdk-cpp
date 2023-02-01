/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/xray/model/ErrorStatistics.h>
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

ErrorStatistics::ErrorStatistics() : 
    m_throttleCount(0),
    m_throttleCountHasBeenSet(false),
    m_otherCount(0),
    m_otherCountHasBeenSet(false),
    m_totalCount(0),
    m_totalCountHasBeenSet(false)
{
}

ErrorStatistics::ErrorStatistics(JsonView jsonValue) : 
    m_throttleCount(0),
    m_throttleCountHasBeenSet(false),
    m_otherCount(0),
    m_otherCountHasBeenSet(false),
    m_totalCount(0),
    m_totalCountHasBeenSet(false)
{
  *this = jsonValue;
}

ErrorStatistics& ErrorStatistics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ThrottleCount"))
  {
    m_throttleCount = jsonValue.GetInt64("ThrottleCount");

    m_throttleCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OtherCount"))
  {
    m_otherCount = jsonValue.GetInt64("OtherCount");

    m_otherCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TotalCount"))
  {
    m_totalCount = jsonValue.GetInt64("TotalCount");

    m_totalCountHasBeenSet = true;
  }

  return *this;
}

JsonValue ErrorStatistics::Jsonize() const
{
  JsonValue payload;

  if(m_throttleCountHasBeenSet)
  {
   payload.WithInt64("ThrottleCount", m_throttleCount);

  }

  if(m_otherCountHasBeenSet)
  {
   payload.WithInt64("OtherCount", m_otherCount);

  }

  if(m_totalCountHasBeenSet)
  {
   payload.WithInt64("TotalCount", m_totalCount);

  }

  return payload;
}

} // namespace Model
} // namespace XRay
} // namespace Aws
