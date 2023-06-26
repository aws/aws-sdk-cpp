﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ListProjectsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListProjectsRequest::ListProjectsRequest() : 
    m_creationTimeAfterHasBeenSet(false),
    m_creationTimeBeforeHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nameContainsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_sortBy(ProjectSortBy::NOT_SET),
    m_sortByHasBeenSet(false),
    m_sortOrder(ProjectSortOrder::NOT_SET),
    m_sortOrderHasBeenSet(false)
{
}

Aws::String ListProjectsRequest::SerializePayload() const
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

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_nameContainsHasBeenSet)
  {
   payload.WithString("NameContains", m_nameContains);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_sortByHasBeenSet)
  {
   payload.WithString("SortBy", ProjectSortByMapper::GetNameForProjectSortBy(m_sortBy));
  }

  if(m_sortOrderHasBeenSet)
  {
   payload.WithString("SortOrder", ProjectSortOrderMapper::GetNameForProjectSortOrder(m_sortOrder));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListProjectsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.ListProjects"));
  return headers;

}




