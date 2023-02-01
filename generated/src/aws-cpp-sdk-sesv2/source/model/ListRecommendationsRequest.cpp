/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/ListRecommendationsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SESV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListRecommendationsRequest::ListRecommendationsRequest() : 
    m_filterHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_pageSize(0),
    m_pageSizeHasBeenSet(false)
{
}

Aws::String ListRecommendationsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_filterHasBeenSet)
  {
   JsonValue filterJsonMap;
   for(auto& filterItem : m_filter)
   {
     filterJsonMap.WithString(ListRecommendationsFilterKeyMapper::GetNameForListRecommendationsFilterKey(filterItem.first), filterItem.second);
   }
   payload.WithObject("Filter", std::move(filterJsonMap));

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_pageSizeHasBeenSet)
  {
   payload.WithInteger("PageSize", m_pageSize);

  }

  return payload.View().WriteReadable();
}




