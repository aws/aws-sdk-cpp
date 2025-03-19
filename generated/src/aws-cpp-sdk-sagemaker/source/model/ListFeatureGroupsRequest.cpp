/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ListFeatureGroupsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListFeatureGroupsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameContainsHasBeenSet)
  {
   payload.WithString("NameContains", m_nameContains);

  }

  if(m_featureGroupStatusEqualsHasBeenSet)
  {
   payload.WithString("FeatureGroupStatusEquals", FeatureGroupStatusMapper::GetNameForFeatureGroupStatus(m_featureGroupStatusEquals));
  }

  if(m_offlineStoreStatusEqualsHasBeenSet)
  {
   payload.WithString("OfflineStoreStatusEquals", OfflineStoreStatusValueMapper::GetNameForOfflineStoreStatusValue(m_offlineStoreStatusEquals));
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
   payload.WithString("SortOrder", FeatureGroupSortOrderMapper::GetNameForFeatureGroupSortOrder(m_sortOrder));
  }

  if(m_sortByHasBeenSet)
  {
   payload.WithString("SortBy", FeatureGroupSortByMapper::GetNameForFeatureGroupSortBy(m_sortBy));
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

Aws::Http::HeaderValueCollection ListFeatureGroupsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.ListFeatureGroups"));
  return headers;

}




