/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptunedata/model/ExecuteOpenCypherQueryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::neptunedata::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ExecuteOpenCypherQueryRequest::ExecuteOpenCypherQueryRequest() : 
    m_openCypherQueryHasBeenSet(false),
    m_parametersHasBeenSet(false)
{
}

Aws::String ExecuteOpenCypherQueryRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_openCypherQueryHasBeenSet)
  {
   payload.WithString("query", m_openCypherQuery);

  }

  if(m_parametersHasBeenSet)
  {
   payload.WithString("parameters", m_parameters);

  }

  return payload.View().WriteReadable();
}




