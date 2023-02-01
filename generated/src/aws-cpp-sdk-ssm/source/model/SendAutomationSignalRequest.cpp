/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/SendAutomationSignalRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SendAutomationSignalRequest::SendAutomationSignalRequest() : 
    m_automationExecutionIdHasBeenSet(false),
    m_signalType(SignalType::NOT_SET),
    m_signalTypeHasBeenSet(false),
    m_payloadHasBeenSet(false)
{
}

Aws::String SendAutomationSignalRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_automationExecutionIdHasBeenSet)
  {
   payload.WithString("AutomationExecutionId", m_automationExecutionId);

  }

  if(m_signalTypeHasBeenSet)
  {
   payload.WithString("SignalType", SignalTypeMapper::GetNameForSignalType(m_signalType));
  }

  if(m_payloadHasBeenSet)
  {
   JsonValue payloadJsonMap;
   for(auto& payloadItem : m_payload)
   {
     Aws::Utils::Array<JsonValue> automationParameterValueListJsonList(payloadItem.second.size());
     for(unsigned automationParameterValueListIndex = 0; automationParameterValueListIndex < automationParameterValueListJsonList.GetLength(); ++automationParameterValueListIndex)
     {
       automationParameterValueListJsonList[automationParameterValueListIndex].AsString(payloadItem.second[automationParameterValueListIndex]);
     }
     payloadJsonMap.WithArray(payloadItem.first, std::move(automationParameterValueListJsonList));
   }
   payload.WithObject("Payload", std::move(payloadJsonMap));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection SendAutomationSignalRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonSSM.SendAutomationSignal"));
  return headers;

}




