/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/DescribeTrainingSessionRequest.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DescribeTrainingSessionRequest::SerializePayload() const {
  JsonValue payload;

  if (m_trainingSessionNameHasBeenSet) {
    payload.WithString("TrainingSessionName", m_trainingSessionName);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeTrainingSessionRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.DescribeTrainingSession"));
  return headers;
}
