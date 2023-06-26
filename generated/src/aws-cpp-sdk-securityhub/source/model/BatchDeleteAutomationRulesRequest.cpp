/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/BatchDeleteAutomationRulesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SecurityHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchDeleteAutomationRulesRequest::BatchDeleteAutomationRulesRequest() : 
    m_automationRulesArnsHasBeenSet(false)
{
}

Aws::String BatchDeleteAutomationRulesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_automationRulesArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> automationRulesArnsJsonList(m_automationRulesArns.size());
   for(unsigned automationRulesArnsIndex = 0; automationRulesArnsIndex < automationRulesArnsJsonList.GetLength(); ++automationRulesArnsIndex)
   {
     automationRulesArnsJsonList[automationRulesArnsIndex].AsString(m_automationRulesArns[automationRulesArnsIndex]);
   }
   payload.WithArray("AutomationRulesArns", std::move(automationRulesArnsJsonList));

  }

  return payload.View().WriteReadable();
}




