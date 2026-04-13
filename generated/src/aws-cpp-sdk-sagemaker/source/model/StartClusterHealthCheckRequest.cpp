/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/StartClusterHealthCheckRequest.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartClusterHealthCheckRequest::SerializePayload() const {
  JsonValue payload;

  if (m_clusterNameHasBeenSet) {
    payload.WithString("ClusterName", m_clusterName);
  }

  if (m_deepHealthCheckConfigurationsHasBeenSet) {
    Aws::Utils::Array<JsonValue> deepHealthCheckConfigurationsJsonList(m_deepHealthCheckConfigurations.size());
    for (unsigned deepHealthCheckConfigurationsIndex = 0;
         deepHealthCheckConfigurationsIndex < deepHealthCheckConfigurationsJsonList.GetLength(); ++deepHealthCheckConfigurationsIndex) {
      deepHealthCheckConfigurationsJsonList[deepHealthCheckConfigurationsIndex].AsObject(
          m_deepHealthCheckConfigurations[deepHealthCheckConfigurationsIndex].Jsonize());
    }
    payload.WithArray("DeepHealthCheckConfigurations", std::move(deepHealthCheckConfigurationsJsonList));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StartClusterHealthCheckRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.StartClusterHealthCheck"));
  return headers;
}
