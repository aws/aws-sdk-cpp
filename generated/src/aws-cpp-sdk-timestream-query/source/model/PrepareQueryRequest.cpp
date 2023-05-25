/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-query/model/PrepareQueryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::TimestreamQuery::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PrepareQueryRequest::PrepareQueryRequest() : 
    m_queryStringHasBeenSet(false),
    m_validateOnly(false),
    m_validateOnlyHasBeenSet(false)
{
}

Aws::String PrepareQueryRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_queryStringHasBeenSet)
  {
   payload.WithString("QueryString", m_queryString);

  }

  if(m_validateOnlyHasBeenSet)
  {
   payload.WithBool("ValidateOnly", m_validateOnly);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PrepareQueryRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Timestream_20181101.PrepareQuery"));
  return headers;

}




