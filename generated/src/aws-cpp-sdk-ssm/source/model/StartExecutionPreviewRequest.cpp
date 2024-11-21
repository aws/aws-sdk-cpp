﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/StartExecutionPreviewRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartExecutionPreviewRequest::StartExecutionPreviewRequest() : 
    m_documentNameHasBeenSet(false),
    m_documentVersionHasBeenSet(false),
    m_executionInputsHasBeenSet(false)
{
}

Aws::String StartExecutionPreviewRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_documentNameHasBeenSet)
  {
   payload.WithString("DocumentName", m_documentName);

  }

  if(m_documentVersionHasBeenSet)
  {
   payload.WithString("DocumentVersion", m_documentVersion);

  }

  if(m_executionInputsHasBeenSet)
  {
   payload.WithObject("ExecutionInputs", m_executionInputs.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StartExecutionPreviewRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonSSM.StartExecutionPreview"));
  return headers;

}




