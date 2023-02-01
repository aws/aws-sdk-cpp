/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/xray/model/PutTraceSegmentsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::XRay::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutTraceSegmentsRequest::PutTraceSegmentsRequest() : 
    m_traceSegmentDocumentsHasBeenSet(false)
{
}

Aws::String PutTraceSegmentsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_traceSegmentDocumentsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> traceSegmentDocumentsJsonList(m_traceSegmentDocuments.size());
   for(unsigned traceSegmentDocumentsIndex = 0; traceSegmentDocumentsIndex < traceSegmentDocumentsJsonList.GetLength(); ++traceSegmentDocumentsIndex)
   {
     traceSegmentDocumentsJsonList[traceSegmentDocumentsIndex].AsString(m_traceSegmentDocuments[traceSegmentDocumentsIndex]);
   }
   payload.WithArray("TraceSegmentDocuments", std::move(traceSegmentDocumentsJsonList));

  }

  return payload.View().WriteReadable();
}




