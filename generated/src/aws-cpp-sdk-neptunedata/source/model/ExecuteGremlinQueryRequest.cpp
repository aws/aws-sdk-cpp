/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptunedata/model/ExecuteGremlinQueryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::neptunedata::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ExecuteGremlinQueryRequest::ExecuteGremlinQueryRequest() : 
    m_gremlinQueryHasBeenSet(false),
    m_serializerHasBeenSet(false)
{
}

Aws::String ExecuteGremlinQueryRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_gremlinQueryHasBeenSet)
  {
   payload.WithString("gremlin", m_gremlinQuery);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ExecuteGremlinQueryRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_serializerHasBeenSet)
  {
    ss << m_serializer;
    headers.emplace("accept",  ss.str());
    ss.str("");
  }

  return headers;

}




