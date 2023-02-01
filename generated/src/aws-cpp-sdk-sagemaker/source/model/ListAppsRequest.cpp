/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ListAppsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListAppsRequest::ListAppsRequest() : 
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_sortOrder(SortOrder::NOT_SET),
    m_sortOrderHasBeenSet(false),
    m_sortBy(AppSortKey::NOT_SET),
    m_sortByHasBeenSet(false),
    m_domainIdEqualsHasBeenSet(false),
    m_userProfileNameEqualsHasBeenSet(false),
    m_spaceNameEqualsHasBeenSet(false)
{
}

Aws::String ListAppsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_sortOrderHasBeenSet)
  {
   payload.WithString("SortOrder", SortOrderMapper::GetNameForSortOrder(m_sortOrder));
  }

  if(m_sortByHasBeenSet)
  {
   payload.WithString("SortBy", AppSortKeyMapper::GetNameForAppSortKey(m_sortBy));
  }

  if(m_domainIdEqualsHasBeenSet)
  {
   payload.WithString("DomainIdEquals", m_domainIdEquals);

  }

  if(m_userProfileNameEqualsHasBeenSet)
  {
   payload.WithString("UserProfileNameEquals", m_userProfileNameEquals);

  }

  if(m_spaceNameEqualsHasBeenSet)
  {
   payload.WithString("SpaceNameEquals", m_spaceNameEquals);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListAppsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.ListApps"));
  return headers;

}




