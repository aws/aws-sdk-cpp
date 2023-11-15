/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog-appregistry/model/AssociateResourceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppRegistry::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AssociateResourceRequest::AssociateResourceRequest() : 
    m_applicationHasBeenSet(false),
    m_resourceType(ResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_resourceHasBeenSet(false),
    m_optionsHasBeenSet(false)
{
}

Aws::String AssociateResourceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_optionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> optionsJsonList(m_options.size());
   for(unsigned optionsIndex = 0; optionsIndex < optionsJsonList.GetLength(); ++optionsIndex)
   {
     optionsJsonList[optionsIndex].AsString(AssociationOptionMapper::GetNameForAssociationOption(m_options[optionsIndex]));
   }
   payload.WithArray("options", std::move(optionsJsonList));

  }

  return payload.View().WriteReadable();
}




