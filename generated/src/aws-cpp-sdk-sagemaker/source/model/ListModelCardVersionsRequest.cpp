/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ListModelCardVersionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListModelCardVersionsRequest::ListModelCardVersionsRequest() : 
    m_creationTimeAfterHasBeenSet(false),
    m_creationTimeBeforeHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_modelCardNameHasBeenSet(false),
    m_modelCardStatus(ModelCardStatus::NOT_SET),
    m_modelCardStatusHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_sortBy(ModelCardVersionSortBy::NOT_SET),
    m_sortByHasBeenSet(false),
    m_sortOrder(ModelCardSortOrder::NOT_SET),
    m_sortOrderHasBeenSet(false)
{
}

Aws::String ListModelCardVersionsRequest::SerializePayload() const
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

  if(m_modelCardNameHasBeenSet)
  {
   payload.WithString("ModelCardName", m_modelCardName);

  }

  if(m_modelCardStatusHasBeenSet)
  {
   payload.WithString("ModelCardStatus", ModelCardStatusMapper::GetNameForModelCardStatus(m_modelCardStatus));
  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_sortByHasBeenSet)
  {
   payload.WithString("SortBy", ModelCardVersionSortByMapper::GetNameForModelCardVersionSortBy(m_sortBy));
  }

  if(m_sortOrderHasBeenSet)
  {
   payload.WithString("SortOrder", ModelCardSortOrderMapper::GetNameForModelCardSortOrder(m_sortOrder));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListModelCardVersionsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.ListModelCardVersions"));
  return headers;

}




