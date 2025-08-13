/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-selling/model/ListSolutionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PartnerCentralSelling::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListSolutionsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_catalogHasBeenSet)
  {
   payload.WithString("Catalog", m_catalog);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_sortHasBeenSet)
  {
   payload.WithObject("Sort", m_sort.Jsonize());

  }

  if(m_statusHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> statusJsonList(m_status.size());
   for(unsigned statusIndex = 0; statusIndex < statusJsonList.GetLength(); ++statusIndex)
   {
     statusJsonList[statusIndex].AsString(SolutionStatusMapper::GetNameForSolutionStatus(m_status[statusIndex]));
   }
   payload.WithArray("Status", std::move(statusJsonList));

  }

  if(m_identifierHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> identifierJsonList(m_identifier.size());
   for(unsigned identifierIndex = 0; identifierIndex < identifierJsonList.GetLength(); ++identifierIndex)
   {
     identifierJsonList[identifierIndex].AsString(m_identifier[identifierIndex]);
   }
   payload.WithArray("Identifier", std::move(identifierJsonList));

  }

  if(m_categoryHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> categoryJsonList(m_category.size());
   for(unsigned categoryIndex = 0; categoryIndex < categoryJsonList.GetLength(); ++categoryIndex)
   {
     categoryJsonList[categoryIndex].AsString(m_category[categoryIndex]);
   }
   payload.WithArray("Category", std::move(categoryJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListSolutionsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSPartnerCentralSelling.ListSolutions"));
  return headers;

}




