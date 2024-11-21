/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/notifications/model/DeregisterNotificationHubRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Notifications::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeregisterNotificationHubRequest::DeregisterNotificationHubRequest() : 
    m_notificationHubRegionHasBeenSet(false)
{
}

Aws::String DeregisterNotificationHubRequest::SerializePayload() const
{
  return {};
}




