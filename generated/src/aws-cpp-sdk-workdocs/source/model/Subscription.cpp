/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workdocs/model/Subscription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkDocs
{
namespace Model
{

Subscription::Subscription() : 
    m_subscriptionIdHasBeenSet(false),
    m_endPointHasBeenSet(false),
    m_protocol(SubscriptionProtocolType::NOT_SET),
    m_protocolHasBeenSet(false)
{
}

Subscription::Subscription(JsonView jsonValue) : 
    m_subscriptionIdHasBeenSet(false),
    m_endPointHasBeenSet(false),
    m_protocol(SubscriptionProtocolType::NOT_SET),
    m_protocolHasBeenSet(false)
{
  *this = jsonValue;
}

Subscription& Subscription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SubscriptionId"))
  {
    m_subscriptionId = jsonValue.GetString("SubscriptionId");

    m_subscriptionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndPoint"))
  {
    m_endPoint = jsonValue.GetString("EndPoint");

    m_endPointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Protocol"))
  {
    m_protocol = SubscriptionProtocolTypeMapper::GetSubscriptionProtocolTypeForName(jsonValue.GetString("Protocol"));

    m_protocolHasBeenSet = true;
  }

  return *this;
}

JsonValue Subscription::Jsonize() const
{
  JsonValue payload;

  if(m_subscriptionIdHasBeenSet)
  {
   payload.WithString("SubscriptionId", m_subscriptionId);

  }

  if(m_endPointHasBeenSet)
  {
   payload.WithString("EndPoint", m_endPoint);

  }

  if(m_protocolHasBeenSet)
  {
   payload.WithString("Protocol", SubscriptionProtocolTypeMapper::GetNameForSubscriptionProtocolType(m_protocol));
  }

  return payload;
}

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
