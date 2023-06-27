/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/privatenetworks/model/StartNetworkResourceUpdateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PrivateNetworks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartNetworkResourceUpdateRequest::StartNetworkResourceUpdateRequest() : 
    m_commitmentConfigurationHasBeenSet(false),
    m_networkResourceArnHasBeenSet(false),
    m_returnReasonHasBeenSet(false),
    m_shippingAddressHasBeenSet(false),
    m_updateType(UpdateType::NOT_SET),
    m_updateTypeHasBeenSet(false)
{
}

Aws::String StartNetworkResourceUpdateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_commitmentConfigurationHasBeenSet)
  {
   payload.WithObject("commitmentConfiguration", m_commitmentConfiguration.Jsonize());

  }

  if(m_networkResourceArnHasBeenSet)
  {
   payload.WithString("networkResourceArn", m_networkResourceArn);

  }

  if(m_returnReasonHasBeenSet)
  {
   payload.WithString("returnReason", m_returnReason);

  }

  if(m_shippingAddressHasBeenSet)
  {
   payload.WithObject("shippingAddress", m_shippingAddress.Jsonize());

  }

  if(m_updateTypeHasBeenSet)
  {
   payload.WithString("updateType", UpdateTypeMapper::GetNameForUpdateType(m_updateType));
  }

  return payload.View().WriteReadable();
}




