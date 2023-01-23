/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribe/model/UpdateVocabularyFilterRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::TranscribeService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateVocabularyFilterRequest::UpdateVocabularyFilterRequest() : 
    m_vocabularyFilterNameHasBeenSet(false),
    m_wordsHasBeenSet(false),
    m_vocabularyFilterFileUriHasBeenSet(false)
{
}

Aws::String UpdateVocabularyFilterRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_vocabularyFilterNameHasBeenSet)
  {
   payload.WithString("VocabularyFilterName", m_vocabularyFilterName);

  }

  if(m_wordsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> wordsJsonList(m_words.size());
   for(unsigned wordsIndex = 0; wordsIndex < wordsJsonList.GetLength(); ++wordsIndex)
   {
     wordsJsonList[wordsIndex].AsString(m_words[wordsIndex]);
   }
   payload.WithArray("Words", std::move(wordsJsonList));

  }

  if(m_vocabularyFilterFileUriHasBeenSet)
  {
   payload.WithString("VocabularyFilterFileUri", m_vocabularyFilterFileUri);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateVocabularyFilterRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Transcribe.UpdateVocabularyFilter"));
  return headers;

}




