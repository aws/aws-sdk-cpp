/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/SearchRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String SearchRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resourceHasBeenSet)
  {
   payload.WithString("Resource", ResourceTypeMapper::GetNameForResourceType(m_resource));
  }

  if(m_searchExpressionHasBeenSet)
  {
   payload.WithObject("SearchExpression", m_searchExpression.Jsonize());

  }

  if(m_sortByHasBeenSet)
  {
   payload.WithString("SortBy", m_sortBy);

  }

  if(m_sortOrderHasBeenSet)
  {
   payload.WithString("SortOrder", SearchSortOrderMapper::GetNameForSearchSortOrder(m_sortOrder));
  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_crossAccountFilterOptionHasBeenSet)
  {
   payload.WithString("CrossAccountFilterOption", CrossAccountFilterOptionMapper::GetNameForCrossAccountFilterOption(m_crossAccountFilterOption));
  }

  if(m_visibilityConditionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> visibilityConditionsJsonList(m_visibilityConditions.size());
   for(unsigned visibilityConditionsIndex = 0; visibilityConditionsIndex < visibilityConditionsJsonList.GetLength(); ++visibilityConditionsIndex)
   {
     visibilityConditionsJsonList[visibilityConditionsIndex].AsObject(m_visibilityConditions[visibilityConditionsIndex].Jsonize());
   }
   payload.WithArray("VisibilityConditions", std::move(visibilityConditionsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection SearchRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.Search"));
  return headers;

}




