/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/CreateAIBenchmarkJobRequest.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateAIBenchmarkJobRequest::SerializePayload() const {
  JsonValue payload;

  if (m_aIBenchmarkJobNameHasBeenSet) {
    payload.WithString("AIBenchmarkJobName", m_aIBenchmarkJobName);
  }

  if (m_benchmarkTargetHasBeenSet) {
    payload.WithObject("BenchmarkTarget", m_benchmarkTarget.Jsonize());
  }

  if (m_outputConfigHasBeenSet) {
    payload.WithObject("OutputConfig", m_outputConfig.Jsonize());
  }

  if (m_aIWorkloadConfigIdentifierHasBeenSet) {
    payload.WithString("AIWorkloadConfigIdentifier", m_aIWorkloadConfigIdentifier);
  }

  if (m_roleArnHasBeenSet) {
    payload.WithString("RoleArn", m_roleArn);
  }

  if (m_networkConfigHasBeenSet) {
    payload.WithObject("NetworkConfig", m_networkConfig.Jsonize());
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

Aws::Http::HeaderValueCollection CreateAIBenchmarkJobRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.CreateAIBenchmarkJob"));
  return headers;
}
