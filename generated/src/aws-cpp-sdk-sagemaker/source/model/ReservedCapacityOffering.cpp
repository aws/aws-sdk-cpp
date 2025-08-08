/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ReservedCapacityOffering.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

ReservedCapacityOffering::ReservedCapacityOffering(JsonView jsonValue)
{
  *this = jsonValue;
}

ReservedCapacityOffering& ReservedCapacityOffering::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ReservedCapacityType"))
  {
    m_reservedCapacityType = ReservedCapacityTypeMapper::GetReservedCapacityTypeForName(jsonValue.GetString("ReservedCapacityType"));
    m_reservedCapacityTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UltraServerType"))
  {
    m_ultraServerType = jsonValue.GetString("UltraServerType");
    m_ultraServerTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UltraServerCount"))
  {
    m_ultraServerCount = jsonValue.GetInteger("UltraServerCount");
    m_ultraServerCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InstanceType"))
  {
    m_instanceType = ReservedCapacityInstanceTypeMapper::GetReservedCapacityInstanceTypeForName(jsonValue.GetString("InstanceType"));
    m_instanceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InstanceCount"))
  {
    m_instanceCount = jsonValue.GetInteger("InstanceCount");
    m_instanceCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AvailabilityZone"))
  {
    m_availabilityZone = jsonValue.GetString("AvailabilityZone");
    m_availabilityZoneHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DurationHours"))
  {
    m_durationHours = jsonValue.GetInt64("DurationHours");
    m_durationHoursHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DurationMinutes"))
  {
    m_durationMinutes = jsonValue.GetInt64("DurationMinutes");
    m_durationMinutesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetDouble("StartTime");
    m_startTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EndTime"))
  {
    m_endTime = jsonValue.GetDouble("EndTime");
    m_endTimeHasBeenSet = true;
  }
  return *this;
}

JsonValue ReservedCapacityOffering::Jsonize() const
{
  JsonValue payload;

  if(m_reservedCapacityTypeHasBeenSet)
  {
   payload.WithString("ReservedCapacityType", ReservedCapacityTypeMapper::GetNameForReservedCapacityType(m_reservedCapacityType));
  }

  if(m_ultraServerTypeHasBeenSet)
  {
   payload.WithString("UltraServerType", m_ultraServerType);

  }

  if(m_ultraServerCountHasBeenSet)
  {
   payload.WithInteger("UltraServerCount", m_ultraServerCount);

  }

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("InstanceType", ReservedCapacityInstanceTypeMapper::GetNameForReservedCapacityInstanceType(m_instanceType));
  }

  if(m_instanceCountHasBeenSet)
  {
   payload.WithInteger("InstanceCount", m_instanceCount);

  }

  if(m_availabilityZoneHasBeenSet)
  {
   payload.WithString("AvailabilityZone", m_availabilityZone);

  }

  if(m_durationHoursHasBeenSet)
  {
   payload.WithInt64("DurationHours", m_durationHours);

  }

  if(m_durationMinutesHasBeenSet)
  {
   payload.WithInt64("DurationMinutes", m_durationMinutes);

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("EndTime", m_endTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
