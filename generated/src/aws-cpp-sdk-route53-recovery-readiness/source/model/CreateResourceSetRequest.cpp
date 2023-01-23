/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53-recovery-readiness/model/CreateResourceSetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Route53RecoveryReadiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateResourceSetRequest::CreateResourceSetRequest() : 
    m_resourceSetNameHasBeenSet(false),
    m_resourceSetTypeHasBeenSet(false),
    m_resourcesHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateResourceSetRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resourceSetNameHasBeenSet)
  {
   payload.WithString("resourceSetName", m_resourceSetName);

  }

  if(m_resourceSetTypeHasBeenSet)
  {
   payload.WithString("resourceSetType", m_resourceSetType);

  }

  if(m_resourcesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourcesJsonList(m_resources.size());
   for(unsigned resourcesIndex = 0; resourcesIndex < resourcesJsonList.GetLength(); ++resourcesIndex)
   {
     resourcesJsonList[resourcesIndex].AsObject(m_resources[resourcesIndex].Jsonize());
   }
   payload.WithArray("resources", std::move(resourcesJsonList));

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




