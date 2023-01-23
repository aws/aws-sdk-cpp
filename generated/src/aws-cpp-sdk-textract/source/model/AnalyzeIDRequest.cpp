/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/textract/model/AnalyzeIDRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Textract::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AnalyzeIDRequest::AnalyzeIDRequest() : 
    m_documentPagesHasBeenSet(false)
{
}

Aws::String AnalyzeIDRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_documentPagesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> documentPagesJsonList(m_documentPages.size());
   for(unsigned documentPagesIndex = 0; documentPagesIndex < documentPagesJsonList.GetLength(); ++documentPagesIndex)
   {
     documentPagesJsonList[documentPagesIndex].AsObject(m_documentPages[documentPagesIndex].Jsonize());
   }
   payload.WithArray("DocumentPages", std::move(documentPagesJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection AnalyzeIDRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Textract.AnalyzeID"));
  return headers;

}




