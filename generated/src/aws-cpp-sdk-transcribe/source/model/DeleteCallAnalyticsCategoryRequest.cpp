/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribe/model/DeleteCallAnalyticsCategoryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::TranscribeService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteCallAnalyticsCategoryRequest::DeleteCallAnalyticsCategoryRequest() : 
    m_categoryNameHasBeenSet(false)
{
}

Aws::String DeleteCallAnalyticsCategoryRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_categoryNameHasBeenSet)
  {
   payload.WithString("CategoryName", m_categoryName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteCallAnalyticsCategoryRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Transcribe.DeleteCallAnalyticsCategory"));
  return headers;

}




