/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/CreateClusterExtensionRequest.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateClusterExtensionRequest::SerializePayload() const {
  JsonValue payload;

  if (m_clusterArnHasBeenSet) {
    payload.WithString("ClusterArn", m_clusterArn);
  }

  if (m_extensionNameHasBeenSet) {
    payload.WithString("ExtensionName", m_extensionName);
  }

  if (m_extensionVersionHasBeenSet) {
    payload.WithString("ExtensionVersion", m_extensionVersion);
  }

  if (m_configurationValuesHasBeenSet) {
    payload.WithString("ConfigurationValues", m_configurationValues);
  }

  if (m_tagsHasBeenSet) {
    Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
    for (unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex) {
      tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
    }
    payload.WithArray("Tags", std::move(tagsJsonList));
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("ClientToken", m_clientToken);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateClusterExtensionRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.CreateClusterExtension"));
  return headers;
}
