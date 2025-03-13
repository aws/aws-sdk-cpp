/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/Subscription.h>
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

Subscription::Subscription(JsonView jsonValue)
{
  *this = jsonValue;
}

Subscription& Subscription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("subscriptionId"))
  {
    m_subscriptionId = jsonValue.GetString("subscriptionId");
    m_subscriptionIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("subscriptionArn"))
  {
    m_subscriptionArn = jsonValue.GetString("subscriptionArn");
    m_subscriptionArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("principal"))
  {
    m_principal = jsonValue.GetObject("principal");
    m_principalHasBeenSet = true;
  }
  if(jsonValue.ValueExists("currentSubscription"))
  {
    m_currentSubscription = jsonValue.GetObject("currentSubscription");
    m_currentSubscriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nextSubscription"))
  {
    m_nextSubscription = jsonValue.GetObject("nextSubscription");
    m_nextSubscriptionHasBeenSet = true;
  }
  return *this;
}

JsonValue Subscription::Jsonize() const
{
  JsonValue payload;

  if(m_subscriptionIdHasBeenSet)
  {
   payload.WithString("subscriptionId", m_subscriptionId);

  }

  if(m_subscriptionArnHasBeenSet)
  {
   payload.WithString("subscriptionArn", m_subscriptionArn);

  }

  if(m_principalHasBeenSet)
  {
   payload.WithObject("principal", m_principal.Jsonize());

  }

  if(m_currentSubscriptionHasBeenSet)
  {
   payload.WithObject("currentSubscription", m_currentSubscription.Jsonize());

  }

  if(m_nextSubscriptionHasBeenSet)
  {
   payload.WithObject("nextSubscription", m_nextSubscription.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
