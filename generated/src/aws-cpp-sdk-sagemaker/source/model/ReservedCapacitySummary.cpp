﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ReservedCapacitySummary.h>
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

ReservedCapacitySummary::ReservedCapacitySummary() : 
    m_reservedCapacityArnHasBeenSet(false),
    m_instanceType(ReservedCapacityInstanceType::NOT_SET),
    m_instanceTypeHasBeenSet(false),
    m_totalInstanceCount(0),
    m_totalInstanceCountHasBeenSet(false),
    m_status(ReservedCapacityStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_durationHours(0),
    m_durationHoursHasBeenSet(false),
    m_durationMinutes(0),
    m_durationMinutesHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
}

ReservedCapacitySummary::ReservedCapacitySummary(JsonView jsonValue)
  : ReservedCapacitySummary()
{
  *this = jsonValue;
}

ReservedCapacitySummary& ReservedCapacitySummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ReservedCapacityArn"))
  {
    m_reservedCapacityArn = jsonValue.GetString("ReservedCapacityArn");

    m_reservedCapacityArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceType"))
  {
    m_instanceType = ReservedCapacityInstanceTypeMapper::GetReservedCapacityInstanceTypeForName(jsonValue.GetString("InstanceType"));

    m_instanceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TotalInstanceCount"))
  {
    m_totalInstanceCount = jsonValue.GetInteger("TotalInstanceCount");

    m_totalInstanceCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = ReservedCapacityStatusMapper::GetReservedCapacityStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
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

JsonValue ReservedCapacitySummary::Jsonize() const
{
  JsonValue payload;

  if(m_reservedCapacityArnHasBeenSet)
  {
   payload.WithString("ReservedCapacityArn", m_reservedCapacityArn);

  }

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("InstanceType", ReservedCapacityInstanceTypeMapper::GetNameForReservedCapacityInstanceType(m_instanceType));
  }

  if(m_totalInstanceCountHasBeenSet)
  {
   payload.WithInteger("TotalInstanceCount", m_totalInstanceCount);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ReservedCapacityStatusMapper::GetNameForReservedCapacityStatus(m_status));
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
