/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DescribeLabelingJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeLabelingJobRequest::DescribeLabelingJobRequest() : 
    m_labelingJobNameHasBeenSet(false)
{
}

Aws::String DescribeLabelingJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_labelingJobNameHasBeenSet)
  {
   payload.WithString("LabelingJobName", m_labelingJobName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeLabelingJobRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.DescribeLabelingJob"));
  return headers;

}




