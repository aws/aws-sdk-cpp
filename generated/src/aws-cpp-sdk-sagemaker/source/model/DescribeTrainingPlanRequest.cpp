/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DescribeTrainingPlanRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DescribeTrainingPlanRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_trainingPlanNameHasBeenSet)
  {
   payload.WithString("TrainingPlanName", m_trainingPlanName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeTrainingPlanRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.DescribeTrainingPlan"));
  return headers;

}




