/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/DeleteClusterExtensionRequest.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DeleteClusterExtensionRequest::SerializePayload() const {
  JsonValue payload;

  if (m_clusterArnHasBeenSet) {
    payload.WithString("ClusterArn", m_clusterArn);
  }

  if (m_extensionArnHasBeenSet) {
    payload.WithString("ExtensionArn", m_extensionArn);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteClusterExtensionRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.DeleteClusterExtension"));
  return headers;
}
