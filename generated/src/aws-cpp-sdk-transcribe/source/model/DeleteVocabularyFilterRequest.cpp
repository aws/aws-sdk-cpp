/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribe/model/DeleteVocabularyFilterRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::TranscribeService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteVocabularyFilterRequest::DeleteVocabularyFilterRequest() : 
    m_vocabularyFilterNameHasBeenSet(false)
{
}

Aws::String DeleteVocabularyFilterRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_vocabularyFilterNameHasBeenSet)
  {
   payload.WithString("VocabularyFilterName", m_vocabularyFilterName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteVocabularyFilterRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Transcribe.DeleteVocabularyFilter"));
  return headers;

}




