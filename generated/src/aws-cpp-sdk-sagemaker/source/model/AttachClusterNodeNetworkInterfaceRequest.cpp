/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/AttachClusterNodeNetworkInterfaceRequest.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String AttachClusterNodeNetworkInterfaceRequest::SerializePayload() const {
  JsonValue payload;

  if (m_clusterNameHasBeenSet) {
    payload.WithString("ClusterName", m_clusterName);
  }

  if (m_nodeIdHasBeenSet) {
    payload.WithString("NodeId", m_nodeId);
  }

  if (m_networkInterfaceIdHasBeenSet) {
    payload.WithString("NetworkInterfaceId", m_networkInterfaceId);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection AttachClusterNodeNetworkInterfaceRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.AttachClusterNodeNetworkInterface"));
  return headers;
}
