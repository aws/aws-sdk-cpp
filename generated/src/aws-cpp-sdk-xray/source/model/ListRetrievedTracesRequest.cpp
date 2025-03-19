/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/xray/model/ListRetrievedTracesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::XRay::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListRetrievedTracesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_retrievalTokenHasBeenSet)
  {
   payload.WithString("RetrievalToken", m_retrievalToken);

  }

  if(m_traceFormatHasBeenSet)
  {
   payload.WithString("TraceFormat", TraceFormatTypeMapper::GetNameForTraceFormatType(m_traceFormat));
  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}




