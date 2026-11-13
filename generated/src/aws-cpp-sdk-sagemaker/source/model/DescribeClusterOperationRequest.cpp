/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/DescribeClusterOperationRequest.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DescribeClusterOperationRequest::SerializePayload() const {
  JsonValue payload;

  if (m_clusterNameHasBeenSet) {
    payload.WithString("ClusterName", m_clusterName);
  }

  if (m_operationIdHasBeenSet) {
    payload.WithString("OperationId", m_operationId);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeClusterOperationRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.DescribeClusterOperation"));
  return headers;
}
