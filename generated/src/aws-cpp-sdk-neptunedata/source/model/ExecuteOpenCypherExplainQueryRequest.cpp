/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptunedata/model/ExecuteOpenCypherExplainQueryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::neptunedata::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ExecuteOpenCypherExplainQueryRequest::ExecuteOpenCypherExplainQueryRequest() : 
    m_openCypherQueryHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_explainMode(OpenCypherExplainMode::NOT_SET),
    m_explainModeHasBeenSet(false)
{
}

Aws::String ExecuteOpenCypherExplainQueryRequest::SerializePayload() const
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

  if(m_explainModeHasBeenSet)
  {
   payload.WithString("explain", OpenCypherExplainModeMapper::GetNameForOpenCypherExplainMode(m_explainMode));
  }

  return payload.View().WriteReadable();
}




