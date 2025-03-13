/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/privatenetworks/model/ActivateNetworkSiteRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PrivateNetworks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ActivateNetworkSiteRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_commitmentConfigurationHasBeenSet)
  {
   payload.WithObject("commitmentConfiguration", m_commitmentConfiguration.Jsonize());

  }

  if(m_networkSiteArnHasBeenSet)
  {
   payload.WithString("networkSiteArn", m_networkSiteArn);

  }

  if(m_shippingAddressHasBeenSet)
  {
   payload.WithObject("shippingAddress", m_shippingAddress.Jsonize());

  }

  return payload.View().WriteReadable();
}




