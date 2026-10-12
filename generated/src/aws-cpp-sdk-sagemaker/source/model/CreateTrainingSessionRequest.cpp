/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/CreateTrainingSessionRequest.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateTrainingSessionRequest::SerializePayload() const {
  JsonValue payload;

  if (m_trainingSessionNameHasBeenSet) {
    payload.WithString("TrainingSessionName", m_trainingSessionName);
  }

  if (m_modelPackageGroupArnHasBeenSet) {
    payload.WithString("ModelPackageGroupArn", m_modelPackageGroupArn);
  }

  if (m_loraConfigHasBeenSet) {
    payload.WithObject("LoraConfig", m_loraConfig.Jsonize());
  }

  if (m_roleArnHasBeenSet) {
    payload.WithString("RoleArn", m_roleArn);
  }

  if (m_vpcConfigHasBeenSet) {
    payload.WithObject("VpcConfig", m_vpcConfig.Jsonize());
  }

  if (m_modelConfigHasBeenSet) {
    payload.WithObject("ModelConfig", m_modelConfig.Jsonize());
  }

  if (m_outputConfigHasBeenSet) {
    payload.WithObject("OutputConfig", m_outputConfig.Jsonize());
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

Aws::Http::HeaderValueCollection CreateTrainingSessionRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.CreateTrainingSession"));
  return headers;
}
