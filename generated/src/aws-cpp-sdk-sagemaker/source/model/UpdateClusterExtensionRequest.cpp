/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/UpdateClusterExtensionRequest.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateClusterExtensionRequest::SerializePayload() const {
  JsonValue payload;

  if (m_clusterArnHasBeenSet) {
    payload.WithString("ClusterArn", m_clusterArn);
  }

  if (m_extensionArnHasBeenSet) {
    payload.WithString("ExtensionArn", m_extensionArn);
  }

  if (m_extensionVersionHasBeenSet) {
    payload.WithString("ExtensionVersion", m_extensionVersion);
  }

  if (m_configurationValuesHasBeenSet) {
    payload.WithString("ConfigurationValues", m_configurationValues);
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("ClientToken", m_clientToken);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateClusterExtensionRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.UpdateClusterExtension"));
  return headers;
}
