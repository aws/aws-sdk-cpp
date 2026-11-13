/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/ListClusterOperationsRequest.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListClusterOperationsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_clusterNameHasBeenSet) {
    payload.WithString("ClusterName", m_clusterName);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("Status", ClusterOperationStatusMapper::GetNameForClusterOperationStatus(m_status));
  }

  if (m_typeHasBeenSet) {
    payload.WithString("Type", ClusterOperationTypeMapper::GetNameForClusterOperationType(m_type));
  }

  if (m_creationTimeAfterHasBeenSet) {
    payload.WithDouble("CreationTimeAfter", m_creationTimeAfter.SecondsWithMSPrecision());
  }

  if (m_creationTimeBeforeHasBeenSet) {
    payload.WithDouble("CreationTimeBefore", m_creationTimeBefore.SecondsWithMSPrecision());
  }

  if (m_sortByHasBeenSet) {
    payload.WithString("SortBy", ClusterOperationSortByMapper::GetNameForClusterOperationSortBy(m_sortBy));
  }

  if (m_sortOrderHasBeenSet) {
    payload.WithString("SortOrder", SortOrderMapper::GetNameForSortOrder(m_sortOrder));
  }

  if (m_maxResultsHasBeenSet) {
    payload.WithInteger("MaxResults", m_maxResults);
  }

  if (m_nextTokenHasBeenSet) {
    payload.WithString("NextToken", m_nextToken);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListClusterOperationsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.ListClusterOperations"));
  return headers;
}
