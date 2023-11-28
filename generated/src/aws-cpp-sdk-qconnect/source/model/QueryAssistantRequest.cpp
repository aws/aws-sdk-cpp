/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/QueryAssistantRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

QueryAssistantRequest::QueryAssistantRequest() : 
    m_assistantIdHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_queryConditionHasBeenSet(false),
    m_queryTextHasBeenSet(false),
    m_sessionIdHasBeenSet(false)
{
}

Aws::String QueryAssistantRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  if(m_queryConditionHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> queryConditionJsonList(m_queryCondition.size());
   for(unsigned queryConditionIndex = 0; queryConditionIndex < queryConditionJsonList.GetLength(); ++queryConditionIndex)
   {
     queryConditionJsonList[queryConditionIndex].AsObject(m_queryCondition[queryConditionIndex].Jsonize());
   }
   payload.WithArray("queryCondition", std::move(queryConditionJsonList));

  }

  if(m_queryTextHasBeenSet)
  {
   payload.WithString("queryText", m_queryText);

  }

  if(m_sessionIdHasBeenSet)
  {
   payload.WithString("sessionId", m_sessionId);

  }

  return payload.View().WriteReadable();
}




