/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/CreateVpcAttachmentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::NetworkManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateVpcAttachmentRequest::CreateVpcAttachmentRequest() : 
    m_coreNetworkIdHasBeenSet(false),
    m_vpcArnHasBeenSet(false),
    m_subnetArnsHasBeenSet(false),
    m_optionsHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true)
{
}

Aws::String CreateVpcAttachmentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_coreNetworkIdHasBeenSet)
  {
   payload.WithString("CoreNetworkId", m_coreNetworkId);

  }

  if(m_vpcArnHasBeenSet)
  {
   payload.WithString("VpcArn", m_vpcArn);

  }

  if(m_subnetArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> subnetArnsJsonList(m_subnetArns.size());
   for(unsigned subnetArnsIndex = 0; subnetArnsIndex < subnetArnsJsonList.GetLength(); ++subnetArnsIndex)
   {
     subnetArnsJsonList[subnetArnsIndex].AsString(m_subnetArns[subnetArnsIndex]);
   }
   payload.WithArray("SubnetArns", std::move(subnetArnsJsonList));

  }

  if(m_optionsHasBeenSet)
  {
   payload.WithObject("Options", m_options.Jsonize());

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}




