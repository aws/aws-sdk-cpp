/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/notifications/model/RegisterNotificationHubRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Notifications::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String RegisterNotificationHubRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_notificationHubRegionHasBeenSet)
  {
   payload.WithString("notificationHubRegion", m_notificationHubRegion);

  }

  return payload.View().WriteReadable();
}




