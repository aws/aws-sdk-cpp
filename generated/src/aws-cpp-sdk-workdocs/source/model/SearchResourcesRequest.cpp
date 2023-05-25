/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workdocs/model/SearchResourcesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::WorkDocs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SearchResourcesRequest::SearchResourcesRequest() : 
    m_authenticationTokenHasBeenSet(false),
    m_queryTextHasBeenSet(false),
    m_queryScopesHasBeenSet(false),
    m_organizationIdHasBeenSet(false),
    m_additionalResponseFieldsHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_orderByHasBeenSet(false),
    m_limit(0),
    m_limitHasBeenSet(false),
    m_markerHasBeenSet(false)
{
}

Aws::String SearchResourcesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_queryTextHasBeenSet)
  {
   payload.WithString("QueryText", m_queryText);

  }

  if(m_queryScopesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> queryScopesJsonList(m_queryScopes.size());
   for(unsigned queryScopesIndex = 0; queryScopesIndex < queryScopesJsonList.GetLength(); ++queryScopesIndex)
   {
     queryScopesJsonList[queryScopesIndex].AsString(SearchQueryScopeTypeMapper::GetNameForSearchQueryScopeType(m_queryScopes[queryScopesIndex]));
   }
   payload.WithArray("QueryScopes", std::move(queryScopesJsonList));

  }

  if(m_organizationIdHasBeenSet)
  {
   payload.WithString("OrganizationId", m_organizationId);

  }

  if(m_additionalResponseFieldsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> additionalResponseFieldsJsonList(m_additionalResponseFields.size());
   for(unsigned additionalResponseFieldsIndex = 0; additionalResponseFieldsIndex < additionalResponseFieldsJsonList.GetLength(); ++additionalResponseFieldsIndex)
   {
     additionalResponseFieldsJsonList[additionalResponseFieldsIndex].AsString(AdditionalResponseFieldTypeMapper::GetNameForAdditionalResponseFieldType(m_additionalResponseFields[additionalResponseFieldsIndex]));
   }
   payload.WithArray("AdditionalResponseFields", std::move(additionalResponseFieldsJsonList));

  }

  if(m_filtersHasBeenSet)
  {
   payload.WithObject("Filters", m_filters.Jsonize());

  }

  if(m_orderByHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> orderByJsonList(m_orderBy.size());
   for(unsigned orderByIndex = 0; orderByIndex < orderByJsonList.GetLength(); ++orderByIndex)
   {
     orderByJsonList[orderByIndex].AsObject(m_orderBy[orderByIndex].Jsonize());
   }
   payload.WithArray("OrderBy", std::move(orderByJsonList));

  }

  if(m_limitHasBeenSet)
  {
   payload.WithInteger("Limit", m_limit);

  }

  if(m_markerHasBeenSet)
  {
   payload.WithString("Marker", m_marker);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection SearchResourcesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_authenticationTokenHasBeenSet)
  {
    ss << m_authenticationToken;
    headers.emplace("authentication",  ss.str());
    ss.str("");
  }

  return headers;

}




