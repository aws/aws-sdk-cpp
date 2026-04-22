/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/CreateAIWorkloadConfigRequest.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateAIWorkloadConfigRequest::SerializePayload() const {
  JsonValue payload;

  if (m_aIWorkloadConfigNameHasBeenSet) {
    payload.WithString("AIWorkloadConfigName", m_aIWorkloadConfigName);
  }

  if (m_datasetConfigHasBeenSet) {
    payload.WithObject("DatasetConfig", m_datasetConfig.Jsonize());
  }

  if (m_aIWorkloadConfigsHasBeenSet) {
    payload.WithObject("AIWorkloadConfigs", m_aIWorkloadConfigs.Jsonize());
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

Aws::Http::HeaderValueCollection CreateAIWorkloadConfigRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.CreateAIWorkloadConfig"));
  return headers;
}
