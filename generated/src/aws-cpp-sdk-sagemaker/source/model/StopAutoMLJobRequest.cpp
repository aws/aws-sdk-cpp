/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/StopAutoMLJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StopAutoMLJobRequest::StopAutoMLJobRequest() : 
    m_autoMLJobNameHasBeenSet(false)
{
}

Aws::String StopAutoMLJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_autoMLJobNameHasBeenSet)
  {
   payload.WithString("AutoMLJobName", m_autoMLJobName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StopAutoMLJobRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.StopAutoMLJob"));
  return headers;

}




