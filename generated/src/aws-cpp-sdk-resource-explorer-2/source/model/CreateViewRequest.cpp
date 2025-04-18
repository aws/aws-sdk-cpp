﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resource-explorer-2/model/CreateViewRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ResourceExplorer2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateViewRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  if(m_filtersHasBeenSet)
  {
   payload.WithObject("Filters", m_filters.Jsonize());

  }

  if(m_includedPropertiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> includedPropertiesJsonList(m_includedProperties.size());
   for(unsigned includedPropertiesIndex = 0; includedPropertiesIndex < includedPropertiesJsonList.GetLength(); ++includedPropertiesIndex)
   {
     includedPropertiesJsonList[includedPropertiesIndex].AsObject(m_includedProperties[includedPropertiesIndex].Jsonize());
   }
   payload.WithArray("IncludedProperties", std::move(includedPropertiesJsonList));

  }

  if(m_scopeHasBeenSet)
  {
   payload.WithString("Scope", m_scope);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("Tags", std::move(tagsJsonMap));

  }

  if(m_viewNameHasBeenSet)
  {
   payload.WithString("ViewName", m_viewName);

  }

  return payload.View().WriteReadable();
}




