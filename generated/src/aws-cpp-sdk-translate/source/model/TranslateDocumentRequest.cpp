/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/translate/model/TranslateDocumentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Translate::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

TranslateDocumentRequest::TranslateDocumentRequest() : 
    m_documentHasBeenSet(false),
    m_terminologyNamesHasBeenSet(false),
    m_sourceLanguageCodeHasBeenSet(false),
    m_targetLanguageCodeHasBeenSet(false),
    m_settingsHasBeenSet(false)
{
}

Aws::String TranslateDocumentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_documentHasBeenSet)
  {
   payload.WithObject("Document", m_document.Jsonize());

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

Aws::Http::HeaderValueCollection TranslateDocumentRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSShineFrontendService_20170701.TranslateDocument"));
  return headers;

}




