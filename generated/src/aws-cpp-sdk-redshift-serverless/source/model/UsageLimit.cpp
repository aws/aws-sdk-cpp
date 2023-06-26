/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift-serverless/model/UsageLimit.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RedshiftServerless
{
namespace Model
{

UsageLimit::UsageLimit() : 
    m_amount(0),
    m_amountHasBeenSet(false),
    m_breachAction(UsageLimitBreachAction::NOT_SET),
    m_breachActionHasBeenSet(false),
    m_period(UsageLimitPeriod::NOT_SET),
    m_periodHasBeenSet(false),
    m_resourceArnHasBeenSet(false),
    m_usageLimitArnHasBeenSet(false),
    m_usageLimitIdHasBeenSet(false),
    m_usageType(UsageLimitUsageType::NOT_SET),
    m_usageTypeHasBeenSet(false)
{
}

UsageLimit::UsageLimit(JsonView jsonValue) : 
    m_amount(0),
    m_amountHasBeenSet(false),
    m_breachAction(UsageLimitBreachAction::NOT_SET),
    m_breachActionHasBeenSet(false),
    m_period(UsageLimitPeriod::NOT_SET),
    m_periodHasBeenSet(false),
    m_resourceArnHasBeenSet(false),
    m_usageLimitArnHasBeenSet(false),
    m_usageLimitIdHasBeenSet(false),
    m_usageType(UsageLimitUsageType::NOT_SET),
    m_usageTypeHasBeenSet(false)
{
  *this = jsonValue;
}

UsageLimit& UsageLimit::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("amount"))
  {
    m_amount = jsonValue.GetInt64("amount");

    m_amountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("breachAction"))
  {
    m_breachAction = UsageLimitBreachActionMapper::GetUsageLimitBreachActionForName(jsonValue.GetString("breachAction"));

    m_breachActionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("period"))
  {
    m_period = UsageLimitPeriodMapper::GetUsageLimitPeriodForName(jsonValue.GetString("period"));

    m_periodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceArn"))
  {
    m_resourceArn = jsonValue.GetString("resourceArn");

    m_resourceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("usageLimitArn"))
  {
    m_usageLimitArn = jsonValue.GetString("usageLimitArn");

    m_usageLimitArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("usageLimitId"))
  {
    m_usageLimitId = jsonValue.GetString("usageLimitId");

    m_usageLimitIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("usageType"))
  {
    m_usageType = UsageLimitUsageTypeMapper::GetUsageLimitUsageTypeForName(jsonValue.GetString("usageType"));

    m_usageTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue UsageLimit::Jsonize() const
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

  if(m_usageLimitArnHasBeenSet)
  {
   payload.WithString("usageLimitArn", m_usageLimitArn);

  }

  if(m_usageLimitIdHasBeenSet)
  {
   payload.WithString("usageLimitId", m_usageLimitId);

  }

  if(m_usageTypeHasBeenSet)
  {
   payload.WithString("usageType", UsageLimitUsageTypeMapper::GetNameForUsageLimitUsageType(m_usageType));
  }

  return payload;
}

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
