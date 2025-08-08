/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/UltraServer.h>
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

UltraServer::UltraServer(JsonView jsonValue)
{
  *this = jsonValue;
}

UltraServer& UltraServer::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("UltraServerId"))
  {
    m_ultraServerId = jsonValue.GetString("UltraServerId");
    m_ultraServerIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UltraServerType"))
  {
    m_ultraServerType = jsonValue.GetString("UltraServerType");
    m_ultraServerTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AvailabilityZone"))
  {
    m_availabilityZone = jsonValue.GetString("AvailabilityZone");
    m_availabilityZoneHasBeenSet = true;
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
  if(jsonValue.ValueExists("ConfiguredSpareInstanceCount"))
  {
    m_configuredSpareInstanceCount = jsonValue.GetInteger("ConfiguredSpareInstanceCount");
    m_configuredSpareInstanceCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AvailableInstanceCount"))
  {
    m_availableInstanceCount = jsonValue.GetInteger("AvailableInstanceCount");
    m_availableInstanceCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InUseInstanceCount"))
  {
    m_inUseInstanceCount = jsonValue.GetInteger("InUseInstanceCount");
    m_inUseInstanceCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AvailableSpareInstanceCount"))
  {
    m_availableSpareInstanceCount = jsonValue.GetInteger("AvailableSpareInstanceCount");
    m_availableSpareInstanceCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UnhealthyInstanceCount"))
  {
    m_unhealthyInstanceCount = jsonValue.GetInteger("UnhealthyInstanceCount");
    m_unhealthyInstanceCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("HealthStatus"))
  {
    m_healthStatus = UltraServerHealthStatusMapper::GetUltraServerHealthStatusForName(jsonValue.GetString("HealthStatus"));
    m_healthStatusHasBeenSet = true;
  }
  return *this;
}

JsonValue UltraServer::Jsonize() const
{
  JsonValue payload;

  if(m_ultraServerIdHasBeenSet)
  {
   payload.WithString("UltraServerId", m_ultraServerId);

  }

  if(m_ultraServerTypeHasBeenSet)
  {
   payload.WithString("UltraServerType", m_ultraServerType);

  }

  if(m_availabilityZoneHasBeenSet)
  {
   payload.WithString("AvailabilityZone", m_availabilityZone);

  }

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("InstanceType", ReservedCapacityInstanceTypeMapper::GetNameForReservedCapacityInstanceType(m_instanceType));
  }

  if(m_totalInstanceCountHasBeenSet)
  {
   payload.WithInteger("TotalInstanceCount", m_totalInstanceCount);

  }

  if(m_configuredSpareInstanceCountHasBeenSet)
  {
   payload.WithInteger("ConfiguredSpareInstanceCount", m_configuredSpareInstanceCount);

  }

  if(m_availableInstanceCountHasBeenSet)
  {
   payload.WithInteger("AvailableInstanceCount", m_availableInstanceCount);

  }

  if(m_inUseInstanceCountHasBeenSet)
  {
   payload.WithInteger("InUseInstanceCount", m_inUseInstanceCount);

  }

  if(m_availableSpareInstanceCountHasBeenSet)
  {
   payload.WithInteger("AvailableSpareInstanceCount", m_availableSpareInstanceCount);

  }

  if(m_unhealthyInstanceCountHasBeenSet)
  {
   payload.WithInteger("UnhealthyInstanceCount", m_unhealthyInstanceCount);

  }

  if(m_healthStatusHasBeenSet)
  {
   payload.WithString("HealthStatus", UltraServerHealthStatusMapper::GetNameForUltraServerHealthStatus(m_healthStatus));
  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
