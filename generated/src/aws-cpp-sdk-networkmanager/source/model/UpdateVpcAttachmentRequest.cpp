/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/UpdateVpcAttachmentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::NetworkManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateVpcAttachmentRequest::UpdateVpcAttachmentRequest() : 
    m_attachmentIdHasBeenSet(false),
    m_addSubnetArnsHasBeenSet(false),
    m_removeSubnetArnsHasBeenSet(false),
    m_optionsHasBeenSet(false)
{
}

Aws::String UpdateVpcAttachmentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_addSubnetArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> addSubnetArnsJsonList(m_addSubnetArns.size());
   for(unsigned addSubnetArnsIndex = 0; addSubnetArnsIndex < addSubnetArnsJsonList.GetLength(); ++addSubnetArnsIndex)
   {
     addSubnetArnsJsonList[addSubnetArnsIndex].AsString(m_addSubnetArns[addSubnetArnsIndex]);
   }
   payload.WithArray("AddSubnetArns", std::move(addSubnetArnsJsonList));

  }

  if(m_removeSubnetArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> removeSubnetArnsJsonList(m_removeSubnetArns.size());
   for(unsigned removeSubnetArnsIndex = 0; removeSubnetArnsIndex < removeSubnetArnsJsonList.GetLength(); ++removeSubnetArnsIndex)
   {
     removeSubnetArnsJsonList[removeSubnetArnsIndex].AsString(m_removeSubnetArns[removeSubnetArnsIndex]);
   }
   payload.WithArray("RemoveSubnetArns", std::move(removeSubnetArnsJsonList));

  }

  if(m_optionsHasBeenSet)
  {
   payload.WithObject("Options", m_options.Jsonize());

  }

  return payload.View().WriteReadable();
}




