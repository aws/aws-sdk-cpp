/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securitylake/model/UpdateDatalakeExceptionsSubscriptionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SecurityLake::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateDatalakeExceptionsSubscriptionRequest::UpdateDatalakeExceptionsSubscriptionRequest() : 
    m_notificationEndpointHasBeenSet(false),
    m_subscriptionProtocol(SubscriptionProtocolType::NOT_SET),
    m_subscriptionProtocolHasBeenSet(false)
{
}

Aws::String UpdateDatalakeExceptionsSubscriptionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_notificationEndpointHasBeenSet)
  {
   payload.WithString("notificationEndpoint", m_notificationEndpoint);

  }

  if(m_subscriptionProtocolHasBeenSet)
  {
   payload.WithString("subscriptionProtocol", SubscriptionProtocolTypeMapper::GetNameForSubscriptionProtocolType(m_subscriptionProtocol));
  }

  return payload.View().WriteReadable();
}




