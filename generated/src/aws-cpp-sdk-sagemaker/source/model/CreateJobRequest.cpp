/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/CreateJobRequest.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateJobRequest::SerializePayload() const {
  JsonValue payload;

  if (m_jobNameHasBeenSet) {
    payload.WithString("JobName", m_jobName);
  }

  if (m_roleArnHasBeenSet) {
    payload.WithString("RoleArn", m_roleArn);
  }

  if (m_jobCategoryHasBeenSet) {
    payload.WithString("JobCategory", JobCategoryMapper::GetNameForJobCategory(m_jobCategory));
  }

  if (m_jobConfigSchemaVersionHasBeenSet) {
    payload.WithString("JobConfigSchemaVersion", m_jobConfigSchemaVersion);
  }

  if (m_jobConfigDocumentHasBeenSet) {
    payload.WithString("JobConfigDocument", m_jobConfigDocument);
  }

  if (m_tagsHasBeenSet) {
    Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
    for (unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex) {
      tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
    }
    payload.WithArray("Tags", std::move(tagsJsonList));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateJobRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.CreateJob"));
  return headers;
}
