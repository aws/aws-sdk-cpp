﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/ListServersRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MigrationHubStrategyRecommendations::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListServersRequest::ListServersRequest() : 
    m_filterValueHasBeenSet(false),
    m_groupIdFilterHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_serverCriteria(ServerCriteria::NOT_SET),
    m_serverCriteriaHasBeenSet(false),
    m_sort(SortOrder::NOT_SET),
    m_sortHasBeenSet(false)
{
}

Aws::String ListServersRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_filterValueHasBeenSet)
  {
   payload.WithString("filterValue", m_filterValue);

  }

  if(m_groupIdFilterHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> groupIdFilterJsonList(m_groupIdFilter.size());
   for(unsigned groupIdFilterIndex = 0; groupIdFilterIndex < groupIdFilterJsonList.GetLength(); ++groupIdFilterIndex)
   {
     groupIdFilterJsonList[groupIdFilterIndex].AsObject(m_groupIdFilter[groupIdFilterIndex].Jsonize());
   }
   payload.WithArray("groupIdFilter", std::move(groupIdFilterJsonList));

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  if(m_serverCriteriaHasBeenSet)
  {
   payload.WithString("serverCriteria", ServerCriteriaMapper::GetNameForServerCriteria(m_serverCriteria));
  }

  if(m_sortHasBeenSet)
  {
   payload.WithString("sort", SortOrderMapper::GetNameForSortOrder(m_sort));
  }

  return payload.View().WriteReadable();
}




