/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/ListClusterExtensionsRequest.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListClusterExtensionsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_clusterArnHasBeenSet) {
    payload.WithString("ClusterArn", m_clusterArn);
  }

  if (m_maxResultsHasBeenSet) {
    payload.WithInteger("MaxResults", m_maxResults);
  }

  if (m_nextTokenHasBeenSet) {
    payload.WithString("NextToken", m_nextToken);
  }

  if (m_creationTimeAfterHasBeenSet) {
    payload.WithDouble("CreationTimeAfter", m_creationTimeAfter.SecondsWithMSPrecision());
  }

  if (m_creationTimeBeforeHasBeenSet) {
    payload.WithDouble("CreationTimeBefore", m_creationTimeBefore.SecondsWithMSPrecision());
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListClusterExtensionsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.ListClusterExtensions"));
  return headers;
}
