﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/ListDocumentsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListDocumentsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_documentFilterListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> documentFilterListJsonList(m_documentFilterList.size());
   for(unsigned documentFilterListIndex = 0; documentFilterListIndex < documentFilterListJsonList.GetLength(); ++documentFilterListIndex)
   {
     documentFilterListJsonList[documentFilterListIndex].AsObject(m_documentFilterList[documentFilterListIndex].Jsonize());
   }
   payload.WithArray("DocumentFilterList", std::move(documentFilterListJsonList));

  }

  if(m_filtersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> filtersJsonList(m_filters.size());
   for(unsigned filtersIndex = 0; filtersIndex < filtersJsonList.GetLength(); ++filtersIndex)
   {
     filtersJsonList[filtersIndex].AsObject(m_filters[filtersIndex].Jsonize());
   }
   payload.WithArray("Filters", std::move(filtersJsonList));

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListDocumentsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonSSM.ListDocuments"));
  return headers;

}




