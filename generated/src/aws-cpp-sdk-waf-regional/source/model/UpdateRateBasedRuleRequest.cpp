/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf-regional/model/UpdateRateBasedRuleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WAFRegional::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateRateBasedRuleRequest::UpdateRateBasedRuleRequest() : 
    m_ruleIdHasBeenSet(false),
    m_changeTokenHasBeenSet(false),
    m_updatesHasBeenSet(false),
    m_rateLimit(0),
    m_rateLimitHasBeenSet(false)
{
}

Aws::String UpdateRateBasedRuleRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_ruleIdHasBeenSet)
  {
   payload.WithString("RuleId", m_ruleId);

  }

  if(m_changeTokenHasBeenSet)
  {
   payload.WithString("ChangeToken", m_changeToken);

  }

  if(m_updatesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> updatesJsonList(m_updates.size());
   for(unsigned updatesIndex = 0; updatesIndex < updatesJsonList.GetLength(); ++updatesIndex)
   {
     updatesJsonList[updatesIndex].AsObject(m_updates[updatesIndex].Jsonize());
   }
   payload.WithArray("Updates", std::move(updatesJsonList));

  }

  if(m_rateLimitHasBeenSet)
  {
   payload.WithInt64("RateLimit", m_rateLimit);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateRateBasedRuleRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSWAF_Regional_20161128.UpdateRateBasedRule"));
  return headers;

}




