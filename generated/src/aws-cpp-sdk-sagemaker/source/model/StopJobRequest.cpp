/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/StopJobRequest.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StopJobRequest::SerializePayload() const {
  JsonValue payload;

  if (m_jobNameHasBeenSet) {
    payload.WithString("JobName", m_jobName);
  }

  if (m_jobCategoryHasBeenSet) {
    payload.WithString("JobCategory", JobCategoryMapper::GetNameForJobCategory(m_jobCategory));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StopJobRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.StopJob"));
  return headers;
}
