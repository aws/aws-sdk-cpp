/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DeleteTrialRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteTrialRequest::DeleteTrialRequest() : 
    m_trialNameHasBeenSet(false)
{
}

Aws::String DeleteTrialRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_trialNameHasBeenSet)
  {
   payload.WithString("TrialName", m_trialName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteTrialRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.DeleteTrial"));
  return headers;

}




