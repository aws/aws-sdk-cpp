/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift-serverless/model/CreateUsageLimitRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::RedshiftServerless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateUsageLimitRequest::CreateUsageLimitRequest() : 
    m_amount(0),
    m_amountHasBeenSet(false),
    m_breachAction(UsageLimitBreachAction::NOT_SET),
    m_breachActionHasBeenSet(false),
    m_period(UsageLimitPeriod::NOT_SET),
    m_periodHasBeenSet(false),
    m_resourceArnHasBeenSet(false),
    m_usageType(UsageLimitUsageType::NOT_SET),
    m_usageTypeHasBeenSet(false)
{
}

Aws::String CreateUsageLimitRequest::SerializePayload() const
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

  if(m_periodHasBeenSet)
  {
   payload.WithString("period", UsageLimitPeriodMapper::GetNameForUsageLimitPeriod(m_period));
  }

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("resourceArn", m_resourceArn);

  }

  if(m_usageTypeHasBeenSet)
  {
   payload.WithString("usageType", UsageLimitUsageTypeMapper::GetNameForUsageLimitUsageType(m_usageType));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateUsageLimitRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "RedshiftServerless.CreateUsageLimit"));
  return headers;

}




