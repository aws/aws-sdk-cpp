/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/ListMlflowAppsRequest.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListMlflowAppsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_createdAfterHasBeenSet) {
    payload.WithDouble("CreatedAfter", m_createdAfter.SecondsWithMSPrecision());
  }

  if (m_createdBeforeHasBeenSet) {
    payload.WithDouble("CreatedBefore", m_createdBefore.SecondsWithMSPrecision());
  }

  if (m_statusHasBeenSet) {
    payload.WithString("Status", MlflowAppStatusMapper::GetNameForMlflowAppStatus(m_status));
  }

  if (m_mlflowVersionHasBeenSet) {
    payload.WithString("MlflowVersion", m_mlflowVersion);
  }

  if (m_defaultForDomainIdHasBeenSet) {
    payload.WithString("DefaultForDomainId", m_defaultForDomainId);
  }

  if (m_accountDefaultStatusHasBeenSet) {
    payload.WithString("AccountDefaultStatus", AccountDefaultStatusMapper::GetNameForAccountDefaultStatus(m_accountDefaultStatus));
  }

  if (m_sortByHasBeenSet) {
    payload.WithString("SortBy", SortMlflowAppByMapper::GetNameForSortMlflowAppBy(m_sortBy));
  }

  if (m_sortOrderHasBeenSet) {
    payload.WithString("SortOrder", SortOrderMapper::GetNameForSortOrder(m_sortOrder));
  }

  if (m_nextTokenHasBeenSet) {
    payload.WithString("NextToken", m_nextToken);
  }

  if (m_maxResultsHasBeenSet) {
    payload.WithInteger("MaxResults", m_maxResults);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListMlflowAppsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.ListMlflowApps"));
  return headers;
}
