/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resource-explorer-2/model/UpdateViewRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ResourceExplorer2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateViewRequest::UpdateViewRequest() : 
    m_filtersHasBeenSet(false),
    m_includedPropertiesHasBeenSet(false),
    m_viewArnHasBeenSet(false)
{
}

Aws::String UpdateViewRequest::SerializePayload() const
{
  JsonValue payload;

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

  if(m_viewArnHasBeenSet)
  {
   payload.WithString("ViewArn", m_viewArn);

  }

  return payload.View().WriteReadable();
}




