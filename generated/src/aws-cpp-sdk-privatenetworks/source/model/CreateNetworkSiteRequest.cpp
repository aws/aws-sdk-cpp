/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/privatenetworks/model/CreateNetworkSiteRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PrivateNetworks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateNetworkSiteRequest::CreateNetworkSiteRequest() : 
    m_availabilityZoneHasBeenSet(false),
    m_availabilityZoneIdHasBeenSet(false),
    m_clientTokenHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_networkArnHasBeenSet(false),
    m_networkSiteNameHasBeenSet(false),
    m_pendingPlanHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateNetworkSiteRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_availabilityZoneHasBeenSet)
  {
   payload.WithString("availabilityZone", m_availabilityZone);

  }

  if(m_availabilityZoneIdHasBeenSet)
  {
   payload.WithString("availabilityZoneId", m_availabilityZoneId);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_networkArnHasBeenSet)
  {
   payload.WithString("networkArn", m_networkArn);

  }

  if(m_networkSiteNameHasBeenSet)
  {
   payload.WithString("networkSiteName", m_networkSiteName);

  }

  if(m_pendingPlanHasBeenSet)
  {
   payload.WithObject("pendingPlan", m_pendingPlan.Jsonize());

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  return payload.View().WriteReadable();
}




