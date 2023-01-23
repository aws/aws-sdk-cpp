/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DescribeTrialRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeTrialRequest::DescribeTrialRequest() : 
    m_trialNameHasBeenSet(false)
{
}

Aws::String DescribeTrialRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_trialNameHasBeenSet)
  {
   payload.WithString("TrialName", m_trialName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeTrialRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.DescribeTrial"));
  return headers;

}




