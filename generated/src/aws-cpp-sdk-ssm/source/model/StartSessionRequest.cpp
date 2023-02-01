/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/StartSessionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartSessionRequest::StartSessionRequest() : 
    m_targetHasBeenSet(false),
    m_documentNameHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_parametersHasBeenSet(false)
{
}

Aws::String StartSessionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_targetHasBeenSet)
  {
   payload.WithString("Target", m_target);

  }

  if(m_documentNameHasBeenSet)
  {
   payload.WithString("DocumentName", m_documentName);

  }

  if(m_reasonHasBeenSet)
  {
   payload.WithString("Reason", m_reason);

  }

  if(m_parametersHasBeenSet)
  {
   JsonValue parametersJsonMap;
   for(auto& parametersItem : m_parameters)
   {
     Aws::Utils::Array<JsonValue> sessionManagerParameterValueListJsonList(parametersItem.second.size());
     for(unsigned sessionManagerParameterValueListIndex = 0; sessionManagerParameterValueListIndex < sessionManagerParameterValueListJsonList.GetLength(); ++sessionManagerParameterValueListIndex)
     {
       sessionManagerParameterValueListJsonList[sessionManagerParameterValueListIndex].AsString(parametersItem.second[sessionManagerParameterValueListIndex]);
     }
     parametersJsonMap.WithArray(parametersItem.first, std::move(sessionManagerParameterValueListJsonList));
   }
   payload.WithObject("Parameters", std::move(parametersJsonMap));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StartSessionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonSSM.StartSession"));
  return headers;

}




