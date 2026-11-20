/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/MoveClusterNodesRequest.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String MoveClusterNodesRequest::SerializePayload() const {
  JsonValue payload;

  if (m_sourceClusterArnHasBeenSet) {
    payload.WithString("SourceClusterArn", m_sourceClusterArn);
  }

  if (m_sourceInstanceGroupNameHasBeenSet) {
    payload.WithString("SourceInstanceGroupName", m_sourceInstanceGroupName);
  }

  if (m_targetClusterArnHasBeenSet) {
    payload.WithString("TargetClusterArn", m_targetClusterArn);
  }

  if (m_targetInstanceGroupNameHasBeenSet) {
    payload.WithString("TargetInstanceGroupName", m_targetInstanceGroupName);
  }

  if (m_instanceCountHasBeenSet) {
    payload.WithInteger("InstanceCount", m_instanceCount);
  }

  if (m_nodeIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> nodeIdsJsonList(m_nodeIds.size());
    for (unsigned nodeIdsIndex = 0; nodeIdsIndex < nodeIdsJsonList.GetLength(); ++nodeIdsIndex) {
      nodeIdsJsonList[nodeIdsIndex].AsString(m_nodeIds[nodeIdsIndex]);
    }
    payload.WithArray("NodeIds", std::move(nodeIdsJsonList));
  }

  if (m_nodeLogicalIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> nodeLogicalIdsJsonList(m_nodeLogicalIds.size());
    for (unsigned nodeLogicalIdsIndex = 0; nodeLogicalIdsIndex < nodeLogicalIdsJsonList.GetLength(); ++nodeLogicalIdsIndex) {
      nodeLogicalIdsJsonList[nodeLogicalIdsIndex].AsString(m_nodeLogicalIds[nodeLogicalIdsIndex]);
    }
    payload.WithArray("NodeLogicalIds", std::move(nodeLogicalIdsJsonList));
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("ClientToken", m_clientToken);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection MoveClusterNodesRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.MoveClusterNodes"));
  return headers;
}
