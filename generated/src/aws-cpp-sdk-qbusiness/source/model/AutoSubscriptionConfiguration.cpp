/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/AutoSubscriptionConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QBusiness
{
namespace Model
{

AutoSubscriptionConfiguration::AutoSubscriptionConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

AutoSubscriptionConfiguration& AutoSubscriptionConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("autoSubscribe"))
  {
    m_autoSubscribe = AutoSubscriptionStatusMapper::GetAutoSubscriptionStatusForName(jsonValue.GetString("autoSubscribe"));
    m_autoSubscribeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("defaultSubscriptionType"))
  {
    m_defaultSubscriptionType = SubscriptionTypeMapper::GetSubscriptionTypeForName(jsonValue.GetString("defaultSubscriptionType"));
    m_defaultSubscriptionTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue AutoSubscriptionConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_autoSubscribeHasBeenSet)
  {
   payload.WithString("autoSubscribe", AutoSubscriptionStatusMapper::GetNameForAutoSubscriptionStatus(m_autoSubscribe));
  }

  if(m_defaultSubscriptionTypeHasBeenSet)
  {
   payload.WithString("defaultSubscriptionType", SubscriptionTypeMapper::GetNameForSubscriptionType(m_defaultSubscriptionType));
  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
