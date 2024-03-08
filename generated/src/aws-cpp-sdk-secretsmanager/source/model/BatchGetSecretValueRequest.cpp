/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/secretsmanager/model/BatchGetSecretValueRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SecretsManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchGetSecretValueRequest::BatchGetSecretValueRequest() : 
    m_secretIdListHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String BatchGetSecretValueRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_secretIdListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> secretIdListJsonList(m_secretIdList.size());
   for(unsigned secretIdListIndex = 0; secretIdListIndex < secretIdListJsonList.GetLength(); ++secretIdListIndex)
   {
     secretIdListJsonList[secretIdListIndex].AsString(m_secretIdList[secretIdListIndex]);
   }
   payload.WithArray("SecretIdList", std::move(secretIdListJsonList));

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

Aws::Http::HeaderValueCollection BatchGetSecretValueRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "secretsmanager.BatchGetSecretValue"));
  return headers;

}




