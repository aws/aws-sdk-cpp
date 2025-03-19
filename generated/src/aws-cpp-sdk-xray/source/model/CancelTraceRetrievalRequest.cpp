/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/xray/model/CancelTraceRetrievalRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::XRay::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CancelTraceRetrievalRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_retrievalTokenHasBeenSet)
  {
   payload.WithString("RetrievalToken", m_retrievalToken);

  }

  return payload.View().WriteReadable();
}




