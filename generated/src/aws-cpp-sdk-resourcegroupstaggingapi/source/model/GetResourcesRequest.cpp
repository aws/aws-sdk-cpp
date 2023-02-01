/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resourcegroupstaggingapi/model/GetResourcesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ResourceGroupsTaggingAPI::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetResourcesRequest::GetResourcesRequest() : 
    m_paginationTokenHasBeenSet(false),
    m_tagFiltersHasBeenSet(false),
    m_resourcesPerPage(0),
    m_resourcesPerPageHasBeenSet(false),
    m_tagsPerPage(0),
    m_tagsPerPageHasBeenSet(false),
    m_resourceTypeFiltersHasBeenSet(false),
    m_includeComplianceDetails(false),
    m_includeComplianceDetailsHasBeenSet(false),
    m_excludeCompliantResources(false),
    m_excludeCompliantResourcesHasBeenSet(false),
    m_resourceARNListHasBeenSet(false)
{
}

Aws::String GetResourcesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_paginationTokenHasBeenSet)
  {
   payload.WithString("PaginationToken", m_paginationToken);

  }

  if(m_tagFiltersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagFiltersJsonList(m_tagFilters.size());
   for(unsigned tagFiltersIndex = 0; tagFiltersIndex < tagFiltersJsonList.GetLength(); ++tagFiltersIndex)
   {
     tagFiltersJsonList[tagFiltersIndex].AsObject(m_tagFilters[tagFiltersIndex].Jsonize());
   }
   payload.WithArray("TagFilters", std::move(tagFiltersJsonList));

  }

  if(m_resourcesPerPageHasBeenSet)
  {
   payload.WithInteger("ResourcesPerPage", m_resourcesPerPage);

  }

  if(m_tagsPerPageHasBeenSet)
  {
   payload.WithInteger("TagsPerPage", m_tagsPerPage);

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

  if(m_includeComplianceDetailsHasBeenSet)
  {
   payload.WithBool("IncludeComplianceDetails", m_includeComplianceDetails);

  }

  if(m_excludeCompliantResourcesHasBeenSet)
  {
   payload.WithBool("ExcludeCompliantResources", m_excludeCompliantResources);

  }

  if(m_resourceARNListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceARNListJsonList(m_resourceARNList.size());
   for(unsigned resourceARNListIndex = 0; resourceARNListIndex < resourceARNListJsonList.GetLength(); ++resourceARNListIndex)
   {
     resourceARNListJsonList[resourceARNListIndex].AsString(m_resourceARNList[resourceARNListIndex]);
   }
   payload.WithArray("ResourceARNList", std::move(resourceARNListJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetResourcesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "ResourceGroupsTaggingAPI_20170126.GetResources"));
  return headers;

}




