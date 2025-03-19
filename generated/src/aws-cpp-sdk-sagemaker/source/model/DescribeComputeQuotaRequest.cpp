/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DescribeComputeQuotaRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DescribeComputeQuotaRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_computeQuotaIdHasBeenSet)
  {
   payload.WithString("ComputeQuotaId", m_computeQuotaId);

  }

  if(m_computeQuotaVersionHasBeenSet)
  {
   payload.WithInteger("ComputeQuotaVersion", m_computeQuotaVersion);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeComputeQuotaRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.DescribeComputeQuota"));
  return headers;

}




