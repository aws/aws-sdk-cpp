/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribe/model/ListLanguageModelsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::TranscribeService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListLanguageModelsRequest::ListLanguageModelsRequest() : 
    m_statusEquals(ModelStatus::NOT_SET),
    m_statusEqualsHasBeenSet(false),
    m_nameContainsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String ListLanguageModelsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_statusEqualsHasBeenSet)
  {
   payload.WithString("StatusEquals", ModelStatusMapper::GetNameForModelStatus(m_statusEquals));
  }

  if(m_nameContainsHasBeenSet)
  {
   payload.WithString("NameContains", m_nameContains);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListLanguageModelsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Transcribe.ListLanguageModels"));
  return headers;

}




