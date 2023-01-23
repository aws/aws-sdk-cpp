/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift-serverless/model/UpdateUsageLimitRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::RedshiftServerless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateUsageLimitRequest::UpdateUsageLimitRequest() : 
    m_amount(0),
    m_amountHasBeenSet(false),
    m_breachAction(UsageLimitBreachAction::NOT_SET),
    m_breachActionHasBeenSet(false),
    m_usageLimitIdHasBeenSet(false)
{
}

Aws::String UpdateUsageLimitRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_amountHasBeenSet)
  {
   payload.WithInt64("amount", m_amount);

  }

  if(m_breachActionHasBeenSet)
  {
   payload.WithString("breachAction", UsageLimitBreachActionMapper::GetNameForUsageLimitBreachAction(m_breachAction));
  }

  if(m_usageLimitIdHasBeenSet)
  {
   payload.WithString("usageLimitId", m_usageLimitId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateUsageLimitRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "RedshiftServerless.UpdateUsageLimit"));
  return headers;

}




