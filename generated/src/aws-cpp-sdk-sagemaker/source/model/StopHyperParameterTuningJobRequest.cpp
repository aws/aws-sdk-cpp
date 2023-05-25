/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/StopHyperParameterTuningJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StopHyperParameterTuningJobRequest::StopHyperParameterTuningJobRequest() : 
    m_hyperParameterTuningJobNameHasBeenSet(false)
{
}

Aws::String StopHyperParameterTuningJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_hyperParameterTuningJobNameHasBeenSet)
  {
   payload.WithString("HyperParameterTuningJobName", m_hyperParameterTuningJobName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StopHyperParameterTuningJobRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.StopHyperParameterTuningJob"));
  return headers;

}




