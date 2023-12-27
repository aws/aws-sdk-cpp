/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptunedata/model/ExecuteGremlinProfileQueryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::neptunedata::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ExecuteGremlinProfileQueryRequest::ExecuteGremlinProfileQueryRequest() : 
    m_gremlinQueryHasBeenSet(false),
    m_results(false),
    m_resultsHasBeenSet(false),
    m_chop(0),
    m_chopHasBeenSet(false),
    m_serializerHasBeenSet(false),
    m_indexOps(false),
    m_indexOpsHasBeenSet(false)
{
}

Aws::String ExecuteGremlinProfileQueryRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_gremlinQueryHasBeenSet)
  {
   payload.WithString("gremlin", m_gremlinQuery);

  }

  if(m_resultsHasBeenSet)
  {
   payload.WithBool("profile.results", m_results);

  }

  if(m_chopHasBeenSet)
  {
   payload.WithInteger("profile.chop", m_chop);

  }

  if(m_serializerHasBeenSet)
  {
   payload.WithString("profile.serializer", m_serializer);

  }

  if(m_indexOpsHasBeenSet)
  {
   payload.WithBool("profile.indexOps", m_indexOps);

  }

  return payload.View().WriteReadable();
}




