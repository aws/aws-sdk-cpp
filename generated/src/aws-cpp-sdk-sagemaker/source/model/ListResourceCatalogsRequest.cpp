/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ListResourceCatalogsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListResourceCatalogsRequest::ListResourceCatalogsRequest() : 
    m_nameContainsHasBeenSet(false),
    m_creationTimeAfterHasBeenSet(false),
    m_creationTimeBeforeHasBeenSet(false),
    m_sortOrder(ResourceCatalogSortOrder::NOT_SET),
    m_sortOrderHasBeenSet(false),
    m_sortBy(ResourceCatalogSortBy::NOT_SET),
    m_sortByHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String ListResourceCatalogsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameContainsHasBeenSet)
  {
   payload.WithString("NameContains", m_nameContains);

  }

  if(m_creationTimeAfterHasBeenSet)
  {
   payload.WithDouble("CreationTimeAfter", m_creationTimeAfter.SecondsWithMSPrecision());
  }

  if(m_creationTimeBeforeHasBeenSet)
  {
   payload.WithDouble("CreationTimeBefore", m_creationTimeBefore.SecondsWithMSPrecision());
  }

  if(m_sortOrderHasBeenSet)
  {
   payload.WithString("SortOrder", ResourceCatalogSortOrderMapper::GetNameForResourceCatalogSortOrder(m_sortOrder));
  }

  if(m_sortByHasBeenSet)
  {
   payload.WithString("SortBy", ResourceCatalogSortByMapper::GetNameForResourceCatalogSortBy(m_sortBy));
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

Aws::Http::HeaderValueCollection ListResourceCatalogsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.ListResourceCatalogs"));
  return headers;

}




