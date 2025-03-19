/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/UpdateComputeQuotaRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateComputeQuotaRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_computeQuotaIdHasBeenSet)
  {
   payload.WithString("ComputeQuotaId", m_computeQuotaId);

  }

  if(m_targetVersionHasBeenSet)
  {
   payload.WithInteger("TargetVersion", m_targetVersion);

  }

  if(m_computeQuotaConfigHasBeenSet)
  {
   payload.WithObject("ComputeQuotaConfig", m_computeQuotaConfig.Jsonize());

  }

  if(m_computeQuotaTargetHasBeenSet)
  {
   payload.WithObject("ComputeQuotaTarget", m_computeQuotaTarget.Jsonize());

  }

  if(m_activationStateHasBeenSet)
  {
   payload.WithString("ActivationState", ActivationStateMapper::GetNameForActivationState(m_activationState));
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateComputeQuotaRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.UpdateComputeQuota"));
  return headers;

}




