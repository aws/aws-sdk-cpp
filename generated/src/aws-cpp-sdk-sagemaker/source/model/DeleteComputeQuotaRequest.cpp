/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DeleteComputeQuotaRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DeleteComputeQuotaRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_computeQuotaIdHasBeenSet)
  {
   payload.WithString("ComputeQuotaId", m_computeQuotaId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteComputeQuotaRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.DeleteComputeQuota"));
  return headers;

}




