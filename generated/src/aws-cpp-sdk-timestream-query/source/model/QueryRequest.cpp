/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-query/model/QueryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::TimestreamQuery::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

QueryRequest::QueryRequest() : 
    m_queryStringHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_nextTokenHasBeenSet(false),
    m_maxRows(0),
    m_maxRowsHasBeenSet(false)
{
}

Aws::String QueryRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_queryStringHasBeenSet)
  {
   payload.WithString("QueryString", m_queryString);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_maxRowsHasBeenSet)
  {
   payload.WithInteger("MaxRows", m_maxRows);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection QueryRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Timestream_20181101.Query"));
  return headers;

}




