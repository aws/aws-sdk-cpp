/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ListAutoMLJobsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListAutoMLJobsRequest::ListAutoMLJobsRequest() : 
    m_creationTimeAfterHasBeenSet(false),
    m_creationTimeBeforeHasBeenSet(false),
    m_lastModifiedTimeAfterHasBeenSet(false),
    m_lastModifiedTimeBeforeHasBeenSet(false),
    m_nameContainsHasBeenSet(false),
    m_statusEquals(AutoMLJobStatus::NOT_SET),
    m_statusEqualsHasBeenSet(false),
    m_sortOrder(AutoMLSortOrder::NOT_SET),
    m_sortOrderHasBeenSet(false),
    m_sortBy(AutoMLSortBy::NOT_SET),
    m_sortByHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String ListAutoMLJobsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_creationTimeAfterHasBeenSet)
  {
   payload.WithDouble("CreationTimeAfter", m_creationTimeAfter.SecondsWithMSPrecision());
  }

  if(m_creationTimeBeforeHasBeenSet)
  {
   payload.WithDouble("CreationTimeBefore", m_creationTimeBefore.SecondsWithMSPrecision());
  }

  if(m_lastModifiedTimeAfterHasBeenSet)
  {
   payload.WithDouble("LastModifiedTimeAfter", m_lastModifiedTimeAfter.SecondsWithMSPrecision());
  }

  if(m_lastModifiedTimeBeforeHasBeenSet)
  {
   payload.WithDouble("LastModifiedTimeBefore", m_lastModifiedTimeBefore.SecondsWithMSPrecision());
  }

  if(m_nameContainsHasBeenSet)
  {
   payload.WithString("NameContains", m_nameContains);

  }

  if(m_statusEqualsHasBeenSet)
  {
   payload.WithString("StatusEquals", AutoMLJobStatusMapper::GetNameForAutoMLJobStatus(m_statusEquals));
  }

  if(m_sortOrderHasBeenSet)
  {
   payload.WithString("SortOrder", AutoMLSortOrderMapper::GetNameForAutoMLSortOrder(m_sortOrder));
  }

  if(m_sortByHasBeenSet)
  {
   payload.WithString("SortBy", AutoMLSortByMapper::GetNameForAutoMLSortBy(m_sortBy));
  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListAutoMLJobsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.ListAutoMLJobs"));
  return headers;

}




