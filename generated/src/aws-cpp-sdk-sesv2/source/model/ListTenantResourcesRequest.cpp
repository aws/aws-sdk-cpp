/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/ListTenantResourcesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SESV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListTenantResourcesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_tenantNameHasBeenSet)
  {
   payload.WithString("TenantName", m_tenantName);

  }

  if(m_filterHasBeenSet)
  {
   JsonValue filterJsonMap;
   for(auto& filterItem : m_filter)
   {
     filterJsonMap.WithString(ListTenantResourcesFilterKeyMapper::GetNameForListTenantResourcesFilterKey(filterItem.first), filterItem.second);
   }
   payload.WithObject("Filter", std::move(filterJsonMap));

  }

  if(m_pageSizeHasBeenSet)
  {
   payload.WithInteger("PageSize", m_pageSize);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}




