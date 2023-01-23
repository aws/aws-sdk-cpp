/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/translate/model/TranslateTextRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Translate::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

TranslateTextRequest::TranslateTextRequest() : 
    m_textHasBeenSet(false),
    m_terminologyNamesHasBeenSet(false),
    m_sourceLanguageCodeHasBeenSet(false),
    m_targetLanguageCodeHasBeenSet(false),
    m_settingsHasBeenSet(false)
{
}

Aws::String TranslateTextRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_textHasBeenSet)
  {
   payload.WithString("Text", m_text);

  }

  if(m_terminologyNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> terminologyNamesJsonList(m_terminologyNames.size());
   for(unsigned terminologyNamesIndex = 0; terminologyNamesIndex < terminologyNamesJsonList.GetLength(); ++terminologyNamesIndex)
   {
     terminologyNamesJsonList[terminologyNamesIndex].AsString(m_terminologyNames[terminologyNamesIndex]);
   }
   payload.WithArray("TerminologyNames", std::move(terminologyNamesJsonList));

  }

  if(m_sourceLanguageCodeHasBeenSet)
  {
   payload.WithString("SourceLanguageCode", m_sourceLanguageCode);

  }

  if(m_targetLanguageCodeHasBeenSet)
  {
   payload.WithString("TargetLanguageCode", m_targetLanguageCode);

  }

  if(m_settingsHasBeenSet)
  {
   payload.WithObject("Settings", m_settings.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection TranslateTextRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSShineFrontendService_20170701.TranslateText"));
  return headers;

}




