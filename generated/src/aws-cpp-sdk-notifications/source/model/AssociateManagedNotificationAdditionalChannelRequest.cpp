﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/notifications/model/AssociateManagedNotificationAdditionalChannelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Notifications::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AssociateManagedNotificationAdditionalChannelRequest::AssociateManagedNotificationAdditionalChannelRequest() : 
    m_channelArnHasBeenSet(false),
    m_managedNotificationConfigurationArnHasBeenSet(false)
{
}

Aws::String AssociateManagedNotificationAdditionalChannelRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_managedNotificationConfigurationArnHasBeenSet)
  {
   payload.WithString("managedNotificationConfigurationArn", m_managedNotificationConfigurationArn);

  }

  return payload.View().WriteReadable();
}




