/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-write/model/RetentionProperties.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TimestreamWrite
{
namespace Model
{

RetentionProperties::RetentionProperties() : 
    m_memoryStoreRetentionPeriodInHours(0),
    m_memoryStoreRetentionPeriodInHoursHasBeenSet(false),
    m_magneticStoreRetentionPeriodInDays(0),
    m_magneticStoreRetentionPeriodInDaysHasBeenSet(false)
{
}

RetentionProperties::RetentionProperties(JsonView jsonValue) : 
    m_memoryStoreRetentionPeriodInHours(0),
    m_memoryStoreRetentionPeriodInHoursHasBeenSet(false),
    m_magneticStoreRetentionPeriodInDays(0),
    m_magneticStoreRetentionPeriodInDaysHasBeenSet(false)
{
  *this = jsonValue;
}

RetentionProperties& RetentionProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MemoryStoreRetentionPeriodInHours"))
  {
    m_memoryStoreRetentionPeriodInHours = jsonValue.GetInt64("MemoryStoreRetentionPeriodInHours");

    m_memoryStoreRetentionPeriodInHoursHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MagneticStoreRetentionPeriodInDays"))
  {
    m_magneticStoreRetentionPeriodInDays = jsonValue.GetInt64("MagneticStoreRetentionPeriodInDays");

    m_magneticStoreRetentionPeriodInDaysHasBeenSet = true;
  }

  return *this;
}

JsonValue RetentionProperties::Jsonize() const
{
  JsonValue payload;

  if(m_memoryStoreRetentionPeriodInHoursHasBeenSet)
  {
   payload.WithInt64("MemoryStoreRetentionPeriodInHours", m_memoryStoreRetentionPeriodInHours);

  }

  if(m_magneticStoreRetentionPeriodInDaysHasBeenSet)
  {
   payload.WithInt64("MagneticStoreRetentionPeriodInDays", m_magneticStoreRetentionPeriodInDays);

  }

  return payload;
}

} // namespace Model
} // namespace TimestreamWrite
} // namespace Aws
