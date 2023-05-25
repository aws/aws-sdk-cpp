/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/ExecuteProvisionedProductServiceActionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ServiceCatalog::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ExecuteProvisionedProductServiceActionRequest::ExecuteProvisionedProductServiceActionRequest() : 
    m_provisionedProductIdHasBeenSet(false),
    m_serviceActionIdHasBeenSet(false),
    m_executeToken(Aws::Utils::UUID::RandomUUID()),
    m_executeTokenHasBeenSet(true),
    m_acceptLanguageHasBeenSet(false),
    m_parametersHasBeenSet(false)
{
}

Aws::String ExecuteProvisionedProductServiceActionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_provisionedProductIdHasBeenSet)
  {
   payload.WithString("ProvisionedProductId", m_provisionedProductId);

  }

  if(m_serviceActionIdHasBeenSet)
  {
   payload.WithString("ServiceActionId", m_serviceActionId);

  }

  if(m_executeTokenHasBeenSet)
  {
   payload.WithString("ExecuteToken", m_executeToken);

  }

  if(m_acceptLanguageHasBeenSet)
  {
   payload.WithString("AcceptLanguage", m_acceptLanguage);

  }

  if(m_parametersHasBeenSet)
  {
   JsonValue parametersJsonMap;
   for(auto& parametersItem : m_parameters)
   {
     Aws::Utils::Array<JsonValue> executionParameterValueListJsonList(parametersItem.second.size());
     for(unsigned executionParameterValueListIndex = 0; executionParameterValueListIndex < executionParameterValueListJsonList.GetLength(); ++executionParameterValueListIndex)
     {
       executionParameterValueListJsonList[executionParameterValueListIndex].AsString(parametersItem.second[executionParameterValueListIndex]);
     }
     parametersJsonMap.WithArray(parametersItem.first, std::move(executionParameterValueListJsonList));
   }
   payload.WithObject("Parameters", std::move(parametersJsonMap));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ExecuteProvisionedProductServiceActionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWS242ServiceCatalogService.ExecuteProvisionedProductServiceAction"));
  return headers;

}




