/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/GetProvisionedProductOutputsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ServiceCatalog::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetProvisionedProductOutputsRequest::GetProvisionedProductOutputsRequest() : 
    m_acceptLanguageHasBeenSet(false),
    m_provisionedProductIdHasBeenSet(false),
    m_provisionedProductNameHasBeenSet(false),
    m_outputKeysHasBeenSet(false),
    m_pageSize(0),
    m_pageSizeHasBeenSet(false),
    m_pageTokenHasBeenSet(false)
{
}

Aws::String GetProvisionedProductOutputsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_acceptLanguageHasBeenSet)
  {
   payload.WithString("AcceptLanguage", m_acceptLanguage);

  }

  if(m_provisionedProductIdHasBeenSet)
  {
   payload.WithString("ProvisionedProductId", m_provisionedProductId);

  }

  if(m_provisionedProductNameHasBeenSet)
  {
   payload.WithString("ProvisionedProductName", m_provisionedProductName);

  }

  if(m_outputKeysHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> outputKeysJsonList(m_outputKeys.size());
   for(unsigned outputKeysIndex = 0; outputKeysIndex < outputKeysJsonList.GetLength(); ++outputKeysIndex)
   {
     outputKeysJsonList[outputKeysIndex].AsString(m_outputKeys[outputKeysIndex]);
   }
   payload.WithArray("OutputKeys", std::move(outputKeysJsonList));

  }

  if(m_pageSizeHasBeenSet)
  {
   payload.WithInteger("PageSize", m_pageSize);

  }

  if(m_pageTokenHasBeenSet)
  {
   payload.WithString("PageToken", m_pageToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetProvisionedProductOutputsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWS242ServiceCatalogService.GetProvisionedProductOutputs"));
  return headers;

}




