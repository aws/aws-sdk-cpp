/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/privatenetworks/model/UpdateNetworkSiteRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PrivateNetworks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateNetworkSiteRequest::UpdateNetworkSiteRequest() : 
    m_clientTokenHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_networkSiteArnHasBeenSet(false)
{
}

Aws::String UpdateNetworkSiteRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_networkSiteArnHasBeenSet)
  {
   payload.WithString("networkSiteArn", m_networkSiteArn);

  }

  return payload.View().WriteReadable();
}




