/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribe/model/GetVocabularyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::TranscribeService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetVocabularyRequest::GetVocabularyRequest() : 
    m_vocabularyNameHasBeenSet(false)
{
}

Aws::String GetVocabularyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_vocabularyNameHasBeenSet)
  {
   payload.WithString("VocabularyName", m_vocabularyName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetVocabularyRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Transcribe.GetVocabulary"));
  return headers;

}




