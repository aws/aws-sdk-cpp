/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/UpdateServiceActionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ServiceCatalog::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateServiceActionRequest::UpdateServiceActionRequest() : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_definitionHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_acceptLanguageHasBeenSet(false)
{
}

Aws::String UpdateServiceActionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_definitionHasBeenSet)
  {
   JsonValue definitionJsonMap;
   for(auto& definitionItem : m_definition)
   {
     definitionJsonMap.WithString(ServiceActionDefinitionKeyMapper::GetNameForServiceActionDefinitionKey(definitionItem.first), definitionItem.second);
   }
   payload.WithObject("Definition", std::move(definitionJsonMap));

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_acceptLanguageHasBeenSet)
  {
   payload.WithString("AcceptLanguage", m_acceptLanguage);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateServiceActionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWS242ServiceCatalogService.UpdateServiceAction"));
  return headers;

}




