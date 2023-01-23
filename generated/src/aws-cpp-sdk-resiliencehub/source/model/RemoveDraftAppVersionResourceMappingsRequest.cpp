/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/RemoveDraftAppVersionResourceMappingsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ResilienceHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RemoveDraftAppVersionResourceMappingsRequest::RemoveDraftAppVersionResourceMappingsRequest() : 
    m_appArnHasBeenSet(false),
    m_appRegistryAppNamesHasBeenSet(false),
    m_logicalStackNamesHasBeenSet(false),
    m_resourceGroupNamesHasBeenSet(false),
    m_resourceNamesHasBeenSet(false),
    m_terraformSourceNamesHasBeenSet(false)
{
}

Aws::String RemoveDraftAppVersionResourceMappingsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_appArnHasBeenSet)
  {
   payload.WithString("appArn", m_appArn);

  }

  if(m_appRegistryAppNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> appRegistryAppNamesJsonList(m_appRegistryAppNames.size());
   for(unsigned appRegistryAppNamesIndex = 0; appRegistryAppNamesIndex < appRegistryAppNamesJsonList.GetLength(); ++appRegistryAppNamesIndex)
   {
     appRegistryAppNamesJsonList[appRegistryAppNamesIndex].AsString(m_appRegistryAppNames[appRegistryAppNamesIndex]);
   }
   payload.WithArray("appRegistryAppNames", std::move(appRegistryAppNamesJsonList));

  }

  if(m_logicalStackNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> logicalStackNamesJsonList(m_logicalStackNames.size());
   for(unsigned logicalStackNamesIndex = 0; logicalStackNamesIndex < logicalStackNamesJsonList.GetLength(); ++logicalStackNamesIndex)
   {
     logicalStackNamesJsonList[logicalStackNamesIndex].AsString(m_logicalStackNames[logicalStackNamesIndex]);
   }
   payload.WithArray("logicalStackNames", std::move(logicalStackNamesJsonList));

  }

  if(m_resourceGroupNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceGroupNamesJsonList(m_resourceGroupNames.size());
   for(unsigned resourceGroupNamesIndex = 0; resourceGroupNamesIndex < resourceGroupNamesJsonList.GetLength(); ++resourceGroupNamesIndex)
   {
     resourceGroupNamesJsonList[resourceGroupNamesIndex].AsString(m_resourceGroupNames[resourceGroupNamesIndex]);
   }
   payload.WithArray("resourceGroupNames", std::move(resourceGroupNamesJsonList));

  }

  if(m_resourceNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceNamesJsonList(m_resourceNames.size());
   for(unsigned resourceNamesIndex = 0; resourceNamesIndex < resourceNamesJsonList.GetLength(); ++resourceNamesIndex)
   {
     resourceNamesJsonList[resourceNamesIndex].AsString(m_resourceNames[resourceNamesIndex]);
   }
   payload.WithArray("resourceNames", std::move(resourceNamesJsonList));

  }

  if(m_terraformSourceNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> terraformSourceNamesJsonList(m_terraformSourceNames.size());
   for(unsigned terraformSourceNamesIndex = 0; terraformSourceNamesIndex < terraformSourceNamesJsonList.GetLength(); ++terraformSourceNamesIndex)
   {
     terraformSourceNamesJsonList[terraformSourceNamesIndex].AsString(m_terraformSourceNames[terraformSourceNamesIndex]);
   }
   payload.WithArray("terraformSourceNames", std::move(terraformSourceNamesJsonList));

  }

  return payload.View().WriteReadable();
}




