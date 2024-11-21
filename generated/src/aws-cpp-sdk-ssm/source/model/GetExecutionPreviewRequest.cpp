﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/GetExecutionPreviewRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetExecutionPreviewRequest::GetExecutionPreviewRequest() : 
    m_executionPreviewIdHasBeenSet(false)
{
}

Aws::String GetExecutionPreviewRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_executionPreviewIdHasBeenSet)
  {
   payload.WithString("ExecutionPreviewId", m_executionPreviewId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetExecutionPreviewRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonSSM.GetExecutionPreview"));
  return headers;

}




