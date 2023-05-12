/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/VPCConnectionSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

VPCConnectionSummary::VPCConnectionSummary() : 
    m_vPCConnectionIdHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_vPCIdHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_dnsResolversHasBeenSet(false),
    m_status(VPCConnectionResourceStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_availabilityStatus(VPCConnectionAvailabilityStatus::NOT_SET),
    m_availabilityStatusHasBeenSet(false),
    m_networkInterfacesHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false)
{
}

VPCConnectionSummary::VPCConnectionSummary(JsonView jsonValue) : 
    m_vPCConnectionIdHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_vPCIdHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_dnsResolversHasBeenSet(false),
    m_status(VPCConnectionResourceStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_availabilityStatus(VPCConnectionAvailabilityStatus::NOT_SET),
    m_availabilityStatusHasBeenSet(false),
    m_networkInterfacesHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false)
{
  *this = jsonValue;
}

VPCConnectionSummary& VPCConnectionSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("VPCConnectionId"))
  {
    m_vPCConnectionId = jsonValue.GetString("VPCConnectionId");

    m_vPCConnectionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VPCId"))
  {
    m_vPCId = jsonValue.GetString("VPCId");

    m_vPCIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecurityGroupIds"))
  {
    Aws::Utils::Array<JsonView> securityGroupIdsJsonList = jsonValue.GetArray("SecurityGroupIds");
    for(unsigned securityGroupIdsIndex = 0; securityGroupIdsIndex < securityGroupIdsJsonList.GetLength(); ++securityGroupIdsIndex)
    {
      m_securityGroupIds.push_back(securityGroupIdsJsonList[securityGroupIdsIndex].AsString());
    }
    m_securityGroupIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DnsResolvers"))
  {
    Aws::Utils::Array<JsonView> dnsResolversJsonList = jsonValue.GetArray("DnsResolvers");
    for(unsigned dnsResolversIndex = 0; dnsResolversIndex < dnsResolversJsonList.GetLength(); ++dnsResolversIndex)
    {
      m_dnsResolvers.push_back(dnsResolversJsonList[dnsResolversIndex].AsString());
    }
    m_dnsResolversHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = VPCConnectionResourceStatusMapper::GetVPCConnectionResourceStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AvailabilityStatus"))
  {
    m_availabilityStatus = VPCConnectionAvailabilityStatusMapper::GetVPCConnectionAvailabilityStatusForName(jsonValue.GetString("AvailabilityStatus"));

    m_availabilityStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NetworkInterfaces"))
  {
    Aws::Utils::Array<JsonView> networkInterfacesJsonList = jsonValue.GetArray("NetworkInterfaces");
    for(unsigned networkInterfacesIndex = 0; networkInterfacesIndex < networkInterfacesJsonList.GetLength(); ++networkInterfacesIndex)
    {
      m_networkInterfaces.push_back(networkInterfacesJsonList[networkInterfacesIndex].AsObject());
    }
    m_networkInterfacesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTime"))
  {
    m_createdTime = jsonValue.GetDouble("CreatedTime");

    m_createdTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdatedTime"))
  {
    m_lastUpdatedTime = jsonValue.GetDouble("LastUpdatedTime");

    m_lastUpdatedTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue VPCConnectionSummary::Jsonize() const
{
  JsonValue payload;

  if(m_vPCConnectionIdHasBeenSet)
  {
   payload.WithString("VPCConnectionId", m_vPCConnectionId);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_vPCIdHasBeenSet)
  {
   payload.WithString("VPCId", m_vPCId);

  }

  if(m_securityGroupIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> securityGroupIdsJsonList(m_securityGroupIds.size());
   for(unsigned securityGroupIdsIndex = 0; securityGroupIdsIndex < securityGroupIdsJsonList.GetLength(); ++securityGroupIdsIndex)
   {
     securityGroupIdsJsonList[securityGroupIdsIndex].AsString(m_securityGroupIds[securityGroupIdsIndex]);
   }
   payload.WithArray("SecurityGroupIds", std::move(securityGroupIdsJsonList));

  }

  if(m_dnsResolversHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dnsResolversJsonList(m_dnsResolvers.size());
   for(unsigned dnsResolversIndex = 0; dnsResolversIndex < dnsResolversJsonList.GetLength(); ++dnsResolversIndex)
   {
     dnsResolversJsonList[dnsResolversIndex].AsString(m_dnsResolvers[dnsResolversIndex]);
   }
   payload.WithArray("DnsResolvers", std::move(dnsResolversJsonList));

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", VPCConnectionResourceStatusMapper::GetNameForVPCConnectionResourceStatus(m_status));
  }

  if(m_availabilityStatusHasBeenSet)
  {
   payload.WithString("AvailabilityStatus", VPCConnectionAvailabilityStatusMapper::GetNameForVPCConnectionAvailabilityStatus(m_availabilityStatus));
  }

  if(m_networkInterfacesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> networkInterfacesJsonList(m_networkInterfaces.size());
   for(unsigned networkInterfacesIndex = 0; networkInterfacesIndex < networkInterfacesJsonList.GetLength(); ++networkInterfacesIndex)
   {
     networkInterfacesJsonList[networkInterfacesIndex].AsObject(m_networkInterfaces[networkInterfacesIndex].Jsonize());
   }
   payload.WithArray("NetworkInterfaces", std::move(networkInterfacesJsonList));

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  if(m_createdTimeHasBeenSet)
  {
   payload.WithDouble("CreatedTime", m_createdTime.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedTimeHasBeenSet)
  {
   payload.WithDouble("LastUpdatedTime", m_lastUpdatedTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
