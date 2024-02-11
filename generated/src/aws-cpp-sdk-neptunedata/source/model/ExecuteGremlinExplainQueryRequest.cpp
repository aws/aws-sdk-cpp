/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptunedata/model/ExecuteGremlinExplainQueryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::neptunedata::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ExecuteGremlinExplainQueryRequest::ExecuteGremlinExplainQueryRequest() : 
    m_gremlinQueryHasBeenSet(false)
{
}

Aws::String ExecuteGremlinExplainQueryRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_gremlinQueryHasBeenSet)
  {
   payload.WithString("gremlin", m_gremlinQuery);

  }

  return payload.View().WriteReadable();
}




