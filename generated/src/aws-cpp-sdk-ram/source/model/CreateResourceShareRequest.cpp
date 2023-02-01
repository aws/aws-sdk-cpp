/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ram/model/CreateResourceShareRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::RAM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateResourceShareRequest::CreateResourceShareRequest() : 
    m_nameHasBeenSet(false),
    m_resourceArnsHasBeenSet(false),
    m_principalsHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_allowExternalPrincipals(false),
    m_allowExternalPrincipalsHasBeenSet(false),
    m_clientTokenHasBeenSet(false),
    m_permissionArnsHasBeenSet(false)
{
}

Aws::String CreateResourceShareRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_resourceArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceArnsJsonList(m_resourceArns.size());
   for(unsigned resourceArnsIndex = 0; resourceArnsIndex < resourceArnsJsonList.GetLength(); ++resourceArnsIndex)
   {
     resourceArnsJsonList[resourceArnsIndex].AsString(m_resourceArns[resourceArnsIndex]);
   }
   payload.WithArray("resourceArns", std::move(resourceArnsJsonList));

  }

  if(m_principalsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> principalsJsonList(m_principals.size());
   for(unsigned principalsIndex = 0; principalsIndex < principalsJsonList.GetLength(); ++principalsIndex)
   {
     principalsJsonList[principalsIndex].AsString(m_principals[principalsIndex]);
   }
   payload.WithArray("principals", std::move(principalsJsonList));

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  if(m_allowExternalPrincipalsHasBeenSet)
  {
   payload.WithBool("allowExternalPrincipals", m_allowExternalPrincipals);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_permissionArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> permissionArnsJsonList(m_permissionArns.size());
   for(unsigned permissionArnsIndex = 0; permissionArnsIndex < permissionArnsJsonList.GetLength(); ++permissionArnsIndex)
   {
     permissionArnsJsonList[permissionArnsIndex].AsString(m_permissionArns[permissionArnsIndex]);
   }
   payload.WithArray("permissionArns", std::move(permissionArnsJsonList));

  }

  return payload.View().WriteReadable();
}




