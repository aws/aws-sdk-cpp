/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/ListContactsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SESV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListContactsRequest::ListContactsRequest() : 
    m_contactListNameHasBeenSet(false),
    m_filterHasBeenSet(false),
    m_pageSize(0),
    m_pageSizeHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String ListContactsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_filterHasBeenSet)
  {
   payload.WithObject("Filter", m_filter.Jsonize());

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




