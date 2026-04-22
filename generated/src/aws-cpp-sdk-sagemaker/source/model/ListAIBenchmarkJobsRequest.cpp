/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/ListAIBenchmarkJobsRequest.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListAIBenchmarkJobsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_maxResultsHasBeenSet) {
    payload.WithInteger("MaxResults", m_maxResults);
  }

  if (m_nextTokenHasBeenSet) {
    payload.WithString("NextToken", m_nextToken);
  }

  if (m_nameContainsHasBeenSet) {
    payload.WithString("NameContains", m_nameContains);
  }

  if (m_statusEqualsHasBeenSet) {
    payload.WithString("StatusEquals", AIBenchmarkJobStatusMapper::GetNameForAIBenchmarkJobStatus(m_statusEquals));
  }

  if (m_creationTimeAfterHasBeenSet) {
    payload.WithDouble("CreationTimeAfter", m_creationTimeAfter.SecondsWithMSPrecision());
  }

  if (m_creationTimeBeforeHasBeenSet) {
    payload.WithDouble("CreationTimeBefore", m_creationTimeBefore.SecondsWithMSPrecision());
  }

  if (m_sortByHasBeenSet) {
    payload.WithString("SortBy", ListAIBenchmarkJobsSortByMapper::GetNameForListAIBenchmarkJobsSortBy(m_sortBy));
  }

  if (m_sortOrderHasBeenSet) {
    payload.WithString("SortOrder", SortOrderMapper::GetNameForSortOrder(m_sortOrder));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListAIBenchmarkJobsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.ListAIBenchmarkJobs"));
  return headers;
}
