/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resourcegroupstaggingapi/model/GetComplianceSummaryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ResourceGroupsTaggingAPI::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetComplianceSummaryRequest::GetComplianceSummaryRequest() : 
    m_targetIdFiltersHasBeenSet(false),
    m_regionFiltersHasBeenSet(false),
    m_resourceTypeFiltersHasBeenSet(false),
    m_tagKeyFiltersHasBeenSet(false),
    m_groupByHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_paginationTokenHasBeenSet(false)
{
}

Aws::String GetComplianceSummaryRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_targetIdFiltersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> targetIdFiltersJsonList(m_targetIdFilters.size());
   for(unsigned targetIdFiltersIndex = 0; targetIdFiltersIndex < targetIdFiltersJsonList.GetLength(); ++targetIdFiltersIndex)
   {
     targetIdFiltersJsonList[targetIdFiltersIndex].AsString(m_targetIdFilters[targetIdFiltersIndex]);
   }
   payload.WithArray("TargetIdFilters", std::move(targetIdFiltersJsonList));

  }

  if(m_regionFiltersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> regionFiltersJsonList(m_regionFilters.size());
   for(unsigned regionFiltersIndex = 0; regionFiltersIndex < regionFiltersJsonList.GetLength(); ++regionFiltersIndex)
   {
     regionFiltersJsonList[regionFiltersIndex].AsString(m_regionFilters[regionFiltersIndex]);
   }
   payload.WithArray("RegionFilters", std::move(regionFiltersJsonList));

  }

  if(m_resourceTypeFiltersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceTypeFiltersJsonList(m_resourceTypeFilters.size());
   for(unsigned resourceTypeFiltersIndex = 0; resourceTypeFiltersIndex < resourceTypeFiltersJsonList.GetLength(); ++resourceTypeFiltersIndex)
   {
     resourceTypeFiltersJsonList[resourceTypeFiltersIndex].AsString(m_resourceTypeFilters[resourceTypeFiltersIndex]);
   }
   payload.WithArray("ResourceTypeFilters", std::move(resourceTypeFiltersJsonList));

  }

  if(m_tagKeyFiltersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagKeyFiltersJsonList(m_tagKeyFilters.size());
   for(unsigned tagKeyFiltersIndex = 0; tagKeyFiltersIndex < tagKeyFiltersJsonList.GetLength(); ++tagKeyFiltersIndex)
   {
     tagKeyFiltersJsonList[tagKeyFiltersIndex].AsString(m_tagKeyFilters[tagKeyFiltersIndex]);
   }
   payload.WithArray("TagKeyFilters", std::move(tagKeyFiltersJsonList));

  }

  if(m_groupByHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> groupByJsonList(m_groupBy.size());
   for(unsigned groupByIndex = 0; groupByIndex < groupByJsonList.GetLength(); ++groupByIndex)
   {
     groupByJsonList[groupByIndex].AsString(GroupByAttributeMapper::GetNameForGroupByAttribute(m_groupBy[groupByIndex]));
   }
   payload.WithArray("GroupBy", std::move(groupByJsonList));

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_paginationTokenHasBeenSet)
  {
   payload.WithString("PaginationToken", m_paginationToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetComplianceSummaryRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "ResourceGroupsTaggingAPI_20170126.GetComplianceSummary"));
  return headers;

}




