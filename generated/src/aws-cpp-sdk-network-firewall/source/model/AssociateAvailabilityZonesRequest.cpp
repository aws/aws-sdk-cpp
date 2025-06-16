/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/AssociateAvailabilityZonesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::NetworkFirewall::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String AssociateAvailabilityZonesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_updateTokenHasBeenSet)
  {
   payload.WithString("UpdateToken", m_updateToken);

  }

  if(m_firewallArnHasBeenSet)
  {
   payload.WithString("FirewallArn", m_firewallArn);

  }

  if(m_firewallNameHasBeenSet)
  {
   payload.WithString("FirewallName", m_firewallName);

  }

  if(m_availabilityZoneMappingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> availabilityZoneMappingsJsonList(m_availabilityZoneMappings.size());
   for(unsigned availabilityZoneMappingsIndex = 0; availabilityZoneMappingsIndex < availabilityZoneMappingsJsonList.GetLength(); ++availabilityZoneMappingsIndex)
   {
     availabilityZoneMappingsJsonList[availabilityZoneMappingsIndex].AsObject(m_availabilityZoneMappings[availabilityZoneMappingsIndex].Jsonize());
   }
   payload.WithArray("AvailabilityZoneMappings", std::move(availabilityZoneMappingsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection AssociateAvailabilityZonesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "NetworkFirewall_20201112.AssociateAvailabilityZones"));
  return headers;

}




