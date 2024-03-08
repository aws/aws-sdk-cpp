/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/GatewayInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace StorageGateway
{
namespace Model
{

GatewayInfo::GatewayInfo() : 
    m_gatewayIdHasBeenSet(false),
    m_gatewayARNHasBeenSet(false),
    m_gatewayTypeHasBeenSet(false),
    m_gatewayOperationalStateHasBeenSet(false),
    m_gatewayNameHasBeenSet(false),
    m_ec2InstanceIdHasBeenSet(false),
    m_ec2InstanceRegionHasBeenSet(false),
    m_hostEnvironment(HostEnvironment::NOT_SET),
    m_hostEnvironmentHasBeenSet(false),
    m_hostEnvironmentIdHasBeenSet(false),
    m_deprecationDateHasBeenSet(false),
    m_softwareVersionHasBeenSet(false)
{
}

GatewayInfo::GatewayInfo(JsonView jsonValue) : 
    m_gatewayIdHasBeenSet(false),
    m_gatewayARNHasBeenSet(false),
    m_gatewayTypeHasBeenSet(false),
    m_gatewayOperationalStateHasBeenSet(false),
    m_gatewayNameHasBeenSet(false),
    m_ec2InstanceIdHasBeenSet(false),
    m_ec2InstanceRegionHasBeenSet(false),
    m_hostEnvironment(HostEnvironment::NOT_SET),
    m_hostEnvironmentHasBeenSet(false),
    m_hostEnvironmentIdHasBeenSet(false),
    m_deprecationDateHasBeenSet(false),
    m_softwareVersionHasBeenSet(false)
{
  *this = jsonValue;
}

GatewayInfo& GatewayInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("GatewayId"))
  {
    m_gatewayId = jsonValue.GetString("GatewayId");

    m_gatewayIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GatewayARN"))
  {
    m_gatewayARN = jsonValue.GetString("GatewayARN");

    m_gatewayARNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GatewayType"))
  {
    m_gatewayType = jsonValue.GetString("GatewayType");

    m_gatewayTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GatewayOperationalState"))
  {
    m_gatewayOperationalState = jsonValue.GetString("GatewayOperationalState");

    m_gatewayOperationalStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GatewayName"))
  {
    m_gatewayName = jsonValue.GetString("GatewayName");

    m_gatewayNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Ec2InstanceId"))
  {
    m_ec2InstanceId = jsonValue.GetString("Ec2InstanceId");

    m_ec2InstanceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Ec2InstanceRegion"))
  {
    m_ec2InstanceRegion = jsonValue.GetString("Ec2InstanceRegion");

    m_ec2InstanceRegionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HostEnvironment"))
  {
    m_hostEnvironment = HostEnvironmentMapper::GetHostEnvironmentForName(jsonValue.GetString("HostEnvironment"));

    m_hostEnvironmentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HostEnvironmentId"))
  {
    m_hostEnvironmentId = jsonValue.GetString("HostEnvironmentId");

    m_hostEnvironmentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeprecationDate"))
  {
    m_deprecationDate = jsonValue.GetString("DeprecationDate");

    m_deprecationDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SoftwareVersion"))
  {
    m_softwareVersion = jsonValue.GetString("SoftwareVersion");

    m_softwareVersionHasBeenSet = true;
  }

  return *this;
}

JsonValue GatewayInfo::Jsonize() const
{
  JsonValue payload;

  if(m_gatewayIdHasBeenSet)
  {
   payload.WithString("GatewayId", m_gatewayId);

  }

  if(m_gatewayARNHasBeenSet)
  {
   payload.WithString("GatewayARN", m_gatewayARN);

  }

  if(m_gatewayTypeHasBeenSet)
  {
   payload.WithString("GatewayType", m_gatewayType);

  }

  if(m_gatewayOperationalStateHasBeenSet)
  {
   payload.WithString("GatewayOperationalState", m_gatewayOperationalState);

  }

  if(m_gatewayNameHasBeenSet)
  {
   payload.WithString("GatewayName", m_gatewayName);

  }

  if(m_ec2InstanceIdHasBeenSet)
  {
   payload.WithString("Ec2InstanceId", m_ec2InstanceId);

  }

  if(m_ec2InstanceRegionHasBeenSet)
  {
   payload.WithString("Ec2InstanceRegion", m_ec2InstanceRegion);

  }

  if(m_hostEnvironmentHasBeenSet)
  {
   payload.WithString("HostEnvironment", HostEnvironmentMapper::GetNameForHostEnvironment(m_hostEnvironment));
  }

  if(m_hostEnvironmentIdHasBeenSet)
  {
   payload.WithString("HostEnvironmentId", m_hostEnvironmentId);

  }

  if(m_deprecationDateHasBeenSet)
  {
   payload.WithString("DeprecationDate", m_deprecationDate);

  }

  if(m_softwareVersionHasBeenSet)
  {
   payload.WithString("SoftwareVersion", m_softwareVersion);

  }

  return payload;
}

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
