/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/DescribeJobSchemaVersionRequest.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DescribeJobSchemaVersionRequest::SerializePayload() const {
  JsonValue payload;

  if (m_jobCategoryHasBeenSet) {
    payload.WithString("JobCategory", JobCategoryMapper::GetNameForJobCategory(m_jobCategory));
  }

  if (m_jobConfigSchemaVersionHasBeenSet) {
    payload.WithString("JobConfigSchemaVersion", m_jobConfigSchemaVersion);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeJobSchemaVersionRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.DescribeJobSchemaVersion"));
  return headers;
}
