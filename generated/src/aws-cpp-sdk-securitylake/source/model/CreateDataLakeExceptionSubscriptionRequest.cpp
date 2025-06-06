﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securitylake/model/CreateDataLakeExceptionSubscriptionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SecurityLake::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateDataLakeExceptionSubscriptionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_exceptionTimeToLiveHasBeenSet)
  {
   payload.WithInt64("exceptionTimeToLive", m_exceptionTimeToLive);

  }

  if(m_notificationEndpointHasBeenSet)
  {
   payload.WithString("notificationEndpoint", m_notificationEndpoint);

  }

  if(m_subscriptionProtocolHasBeenSet)
  {
   payload.WithString("subscriptionProtocol", m_subscriptionProtocol);

  }

  return payload.View().WriteReadable();
}




