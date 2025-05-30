/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/Ec2CapacityReservation.h>
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

Ec2CapacityReservation::Ec2CapacityReservation(JsonView jsonValue)
{
  *this = jsonValue;
}

Ec2CapacityReservation& Ec2CapacityReservation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Ec2CapacityReservationId"))
  {
    m_ec2CapacityReservationId = jsonValue.GetString("Ec2CapacityReservationId");
    m_ec2CapacityReservationIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TotalInstanceCount"))
  {
    m_totalInstanceCount = jsonValue.GetInteger("TotalInstanceCount");
    m_totalInstanceCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AvailableInstanceCount"))
  {
    m_availableInstanceCount = jsonValue.GetInteger("AvailableInstanceCount");
    m_availableInstanceCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UsedByCurrentEndpoint"))
  {
    m_usedByCurrentEndpoint = jsonValue.GetInteger("UsedByCurrentEndpoint");
    m_usedByCurrentEndpointHasBeenSet = true;
  }
  return *this;
}

JsonValue Ec2CapacityReservation::Jsonize() const
{
  JsonValue payload;

  if(m_ec2CapacityReservationIdHasBeenSet)
  {
   payload.WithString("Ec2CapacityReservationId", m_ec2CapacityReservationId);

  }

  if(m_totalInstanceCountHasBeenSet)
  {
   payload.WithInteger("TotalInstanceCount", m_totalInstanceCount);

  }

  if(m_availableInstanceCountHasBeenSet)
  {
   payload.WithInteger("AvailableInstanceCount", m_availableInstanceCount);

  }

  if(m_usedByCurrentEndpointHasBeenSet)
  {
   payload.WithInteger("UsedByCurrentEndpoint", m_usedByCurrentEndpoint);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
