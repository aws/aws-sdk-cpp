/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribe/model/DeleteCallAnalyticsJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::TranscribeService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteCallAnalyticsJobRequest::DeleteCallAnalyticsJobRequest() : 
    m_callAnalyticsJobNameHasBeenSet(false)
{
}

Aws::String DeleteCallAnalyticsJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_callAnalyticsJobNameHasBeenSet)
  {
   payload.WithString("CallAnalyticsJobName", m_callAnalyticsJobName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteCallAnalyticsJobRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Transcribe.DeleteCallAnalyticsJob"));
  return headers;

}




