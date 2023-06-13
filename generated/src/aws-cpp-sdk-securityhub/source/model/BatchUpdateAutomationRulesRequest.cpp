/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/BatchUpdateAutomationRulesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SecurityHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchUpdateAutomationRulesRequest::BatchUpdateAutomationRulesRequest() : 
    m_updateAutomationRulesRequestItemsHasBeenSet(false)
{
}

Aws::String BatchUpdateAutomationRulesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_updateAutomationRulesRequestItemsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> updateAutomationRulesRequestItemsJsonList(m_updateAutomationRulesRequestItems.size());
   for(unsigned updateAutomationRulesRequestItemsIndex = 0; updateAutomationRulesRequestItemsIndex < updateAutomationRulesRequestItemsJsonList.GetLength(); ++updateAutomationRulesRequestItemsIndex)
   {
     updateAutomationRulesRequestItemsJsonList[updateAutomationRulesRequestItemsIndex].AsObject(m_updateAutomationRulesRequestItems[updateAutomationRulesRequestItemsIndex].Jsonize());
   }
   payload.WithArray("UpdateAutomationRulesRequestItems", std::move(updateAutomationRulesRequestItemsJsonList));

  }

  return payload.View().WriteReadable();
}




