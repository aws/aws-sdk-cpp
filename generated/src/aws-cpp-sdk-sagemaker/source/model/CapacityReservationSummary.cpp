/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/CapacityReservationSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

CapacityReservationSummary::CapacityReservationSummary(JsonView jsonValue) { *this = jsonValue; }

CapacityReservationSummary& CapacityReservationSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("SMCapacityReservationArn")) {
    m_sMCapacityReservationArn = jsonValue.GetString("SMCapacityReservationArn");
    m_sMCapacityReservationArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SMCapacityReservationId")) {
    m_sMCapacityReservationId = jsonValue.GetString("SMCapacityReservationId");
    m_sMCapacityReservationIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Owner")) {
    m_owner = jsonValue.GetString("Owner");
    m_ownerHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = CapacityReservationStatusMapper::GetCapacityReservationStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("InstanceType")) {
    m_instanceType = jsonValue.GetString("InstanceType");
    m_instanceTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AvailabilityZone")) {
    m_availabilityZone = jsonValue.GetString("AvailabilityZone");
    m_availabilityZoneHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AvailabilityZoneId")) {
    m_availabilityZoneId = jsonValue.GetString("AvailabilityZoneId");
    m_availabilityZoneIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TotalInstanceCount")) {
    m_totalInstanceCount = jsonValue.GetInteger("TotalInstanceCount");
    m_totalInstanceCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StartTime")) {
    m_startTime = jsonValue.GetDouble("StartTime");
    m_startTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EndTime")) {
    m_endTime = jsonValue.GetDouble("EndTime");
    m_endTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreationTime")) {
    m_creationTime = jsonValue.GetDouble("CreationTime");
    m_creationTimeHasBeenSet = true;
  }
  return *this;
}

JsonValue CapacityReservationSummary::Jsonize() const {
  JsonValue payload;

  if (m_sMCapacityReservationArnHasBeenSet) {
    payload.WithString("SMCapacityReservationArn", m_sMCapacityReservationArn);
  }

  if (m_sMCapacityReservationIdHasBeenSet) {
    payload.WithString("SMCapacityReservationId", m_sMCapacityReservationId);
  }

  if (m_ownerHasBeenSet) {
    payload.WithString("Owner", m_owner);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("Status", CapacityReservationStatusMapper::GetNameForCapacityReservationStatus(m_status));
  }

  if (m_instanceTypeHasBeenSet) {
    payload.WithString("InstanceType", m_instanceType);
  }

  if (m_availabilityZoneHasBeenSet) {
    payload.WithString("AvailabilityZone", m_availabilityZone);
  }

  if (m_availabilityZoneIdHasBeenSet) {
    payload.WithString("AvailabilityZoneId", m_availabilityZoneId);
  }

  if (m_totalInstanceCountHasBeenSet) {
    payload.WithInteger("TotalInstanceCount", m_totalInstanceCount);
  }

  if (m_startTimeHasBeenSet) {
    payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if (m_endTimeHasBeenSet) {
    payload.WithDouble("EndTime", m_endTime.SecondsWithMSPrecision());
  }

  if (m_creationTimeHasBeenSet) {
    payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
