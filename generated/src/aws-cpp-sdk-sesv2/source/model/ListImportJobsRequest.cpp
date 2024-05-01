/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/ListImportJobsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SESV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListImportJobsRequest::ListImportJobsRequest() : 
    m_importDestinationType(ImportDestinationType::NOT_SET),
    m_importDestinationTypeHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_pageSize(0),
    m_pageSizeHasBeenSet(false)
{
}

Aws::String ListImportJobsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_importDestinationTypeHasBeenSet)
  {
   payload.WithString("ImportDestinationType", ImportDestinationTypeMapper::GetNameForImportDestinationType(m_importDestinationType));
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




