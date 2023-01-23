/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workdocs/model/CreateNotificationSubscriptionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkDocs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateNotificationSubscriptionRequest::CreateNotificationSubscriptionRequest() : 
    m_organizationIdHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_protocol(SubscriptionProtocolType::NOT_SET),
    m_protocolHasBeenSet(false),
    m_subscriptionType(SubscriptionType::NOT_SET),
    m_subscriptionTypeHasBeenSet(false)
{
}

Aws::String CreateNotificationSubscriptionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_endpointHasBeenSet)
  {
   payload.WithString("Endpoint", m_endpoint);

  }

  if(m_protocolHasBeenSet)
  {
   payload.WithString("Protocol", SubscriptionProtocolTypeMapper::GetNameForSubscriptionProtocolType(m_protocol));
  }

  if(m_subscriptionTypeHasBeenSet)
  {
   payload.WithString("SubscriptionType", SubscriptionTypeMapper::GetNameForSubscriptionType(m_subscriptionType));
  }

  return payload.View().WriteReadable();
}




