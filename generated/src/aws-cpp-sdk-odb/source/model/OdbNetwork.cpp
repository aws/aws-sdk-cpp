/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/odb/model/OdbNetwork.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace odb
{
namespace Model
{

OdbNetwork::OdbNetwork(JsonView jsonValue)
{
  *this = jsonValue;
}

OdbNetwork& OdbNetwork::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("odbNetworkId"))
  {
    m_odbNetworkId = jsonValue.GetString("odbNetworkId");
    m_odbNetworkIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("displayName"))
  {
    m_displayName = jsonValue.GetString("displayName");
    m_displayNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = ResourceStatusMapper::GetResourceStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("statusReason"))
  {
    m_statusReason = jsonValue.GetString("statusReason");
    m_statusReasonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("odbNetworkArn"))
  {
    m_odbNetworkArn = jsonValue.GetString("odbNetworkArn");
    m_odbNetworkArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("availabilityZone"))
  {
    m_availabilityZone = jsonValue.GetString("availabilityZone");
    m_availabilityZoneHasBeenSet = true;
  }
  if(jsonValue.ValueExists("availabilityZoneId"))
  {
    m_availabilityZoneId = jsonValue.GetString("availabilityZoneId");
    m_availabilityZoneIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("clientSubnetCidr"))
  {
    m_clientSubnetCidr = jsonValue.GetString("clientSubnetCidr");
    m_clientSubnetCidrHasBeenSet = true;
  }
  if(jsonValue.ValueExists("backupSubnetCidr"))
  {
    m_backupSubnetCidr = jsonValue.GetString("backupSubnetCidr");
    m_backupSubnetCidrHasBeenSet = true;
  }
  if(jsonValue.ValueExists("customDomainName"))
  {
    m_customDomainName = jsonValue.GetString("customDomainName");
    m_customDomainNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("defaultDnsPrefix"))
  {
    m_defaultDnsPrefix = jsonValue.GetString("defaultDnsPrefix");
    m_defaultDnsPrefixHasBeenSet = true;
  }
  if(jsonValue.ValueExists("peeredCidrs"))
  {
    Aws::Utils::Array<JsonView> peeredCidrsJsonList = jsonValue.GetArray("peeredCidrs");
    for(unsigned peeredCidrsIndex = 0; peeredCidrsIndex < peeredCidrsJsonList.GetLength(); ++peeredCidrsIndex)
    {
      m_peeredCidrs.push_back(peeredCidrsJsonList[peeredCidrsIndex].AsString());
    }
    m_peeredCidrsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ociNetworkAnchorId"))
  {
    m_ociNetworkAnchorId = jsonValue.GetString("ociNetworkAnchorId");
    m_ociNetworkAnchorIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ociNetworkAnchorUrl"))
  {
    m_ociNetworkAnchorUrl = jsonValue.GetString("ociNetworkAnchorUrl");
    m_ociNetworkAnchorUrlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ociResourceAnchorName"))
  {
    m_ociResourceAnchorName = jsonValue.GetString("ociResourceAnchorName");
    m_ociResourceAnchorNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ociVcnId"))
  {
    m_ociVcnId = jsonValue.GetString("ociVcnId");
    m_ociVcnIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ociVcnUrl"))
  {
    m_ociVcnUrl = jsonValue.GetString("ociVcnUrl");
    m_ociVcnUrlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ociDnsForwardingConfigs"))
  {
    Aws::Utils::Array<JsonView> ociDnsForwardingConfigsJsonList = jsonValue.GetArray("ociDnsForwardingConfigs");
    for(unsigned ociDnsForwardingConfigsIndex = 0; ociDnsForwardingConfigsIndex < ociDnsForwardingConfigsJsonList.GetLength(); ++ociDnsForwardingConfigsIndex)
    {
      m_ociDnsForwardingConfigs.push_back(ociDnsForwardingConfigsJsonList[ociDnsForwardingConfigsIndex].AsObject());
    }
    m_ociDnsForwardingConfigsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("percentProgress"))
  {
    m_percentProgress = jsonValue.GetDouble("percentProgress");
    m_percentProgressHasBeenSet = true;
  }
  if(jsonValue.ValueExists("managedServices"))
  {
    m_managedServices = jsonValue.GetObject("managedServices");
    m_managedServicesHasBeenSet = true;
  }
  return *this;
}

JsonValue OdbNetwork::Jsonize() const
{
  JsonValue payload;

  if(m_odbNetworkIdHasBeenSet)
  {
   payload.WithString("odbNetworkId", m_odbNetworkId);

  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("displayName", m_displayName);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ResourceStatusMapper::GetNameForResourceStatus(m_status));
  }

  if(m_statusReasonHasBeenSet)
  {
   payload.WithString("statusReason", m_statusReason);

  }

  if(m_odbNetworkArnHasBeenSet)
  {
   payload.WithString("odbNetworkArn", m_odbNetworkArn);

  }

  if(m_availabilityZoneHasBeenSet)
  {
   payload.WithString("availabilityZone", m_availabilityZone);

  }

  if(m_availabilityZoneIdHasBeenSet)
  {
   payload.WithString("availabilityZoneId", m_availabilityZoneId);

  }

  if(m_clientSubnetCidrHasBeenSet)
  {
   payload.WithString("clientSubnetCidr", m_clientSubnetCidr);

  }

  if(m_backupSubnetCidrHasBeenSet)
  {
   payload.WithString("backupSubnetCidr", m_backupSubnetCidr);

  }

  if(m_customDomainNameHasBeenSet)
  {
   payload.WithString("customDomainName", m_customDomainName);

  }

  if(m_defaultDnsPrefixHasBeenSet)
  {
   payload.WithString("defaultDnsPrefix", m_defaultDnsPrefix);

  }

  if(m_peeredCidrsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> peeredCidrsJsonList(m_peeredCidrs.size());
   for(unsigned peeredCidrsIndex = 0; peeredCidrsIndex < peeredCidrsJsonList.GetLength(); ++peeredCidrsIndex)
   {
     peeredCidrsJsonList[peeredCidrsIndex].AsString(m_peeredCidrs[peeredCidrsIndex]);
   }
   payload.WithArray("peeredCidrs", std::move(peeredCidrsJsonList));

  }

  if(m_ociNetworkAnchorIdHasBeenSet)
  {
   payload.WithString("ociNetworkAnchorId", m_ociNetworkAnchorId);

  }

  if(m_ociNetworkAnchorUrlHasBeenSet)
  {
   payload.WithString("ociNetworkAnchorUrl", m_ociNetworkAnchorUrl);

  }

  if(m_ociResourceAnchorNameHasBeenSet)
  {
   payload.WithString("ociResourceAnchorName", m_ociResourceAnchorName);

  }

  if(m_ociVcnIdHasBeenSet)
  {
   payload.WithString("ociVcnId", m_ociVcnId);

  }

  if(m_ociVcnUrlHasBeenSet)
  {
   payload.WithString("ociVcnUrl", m_ociVcnUrl);

  }

  if(m_ociDnsForwardingConfigsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ociDnsForwardingConfigsJsonList(m_ociDnsForwardingConfigs.size());
   for(unsigned ociDnsForwardingConfigsIndex = 0; ociDnsForwardingConfigsIndex < ociDnsForwardingConfigsJsonList.GetLength(); ++ociDnsForwardingConfigsIndex)
   {
     ociDnsForwardingConfigsJsonList[ociDnsForwardingConfigsIndex].AsObject(m_ociDnsForwardingConfigs[ociDnsForwardingConfigsIndex].Jsonize());
   }
   payload.WithArray("ociDnsForwardingConfigs", std::move(ociDnsForwardingConfigsJsonList));

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_percentProgressHasBeenSet)
  {
   payload.WithDouble("percentProgress", m_percentProgress);

  }

  if(m_managedServicesHasBeenSet)
  {
   payload.WithObject("managedServices", m_managedServices.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace odb
} // namespace Aws
