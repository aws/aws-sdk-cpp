/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/notifications/model/DisassociateManagedNotificationAdditionalChannelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Notifications::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DisassociateManagedNotificationAdditionalChannelRequest::DisassociateManagedNotificationAdditionalChannelRequest() : 
    m_channelArnHasBeenSet(false),
    m_managedNotificationConfigurationArnHasBeenSet(false)
{
}

Aws::String DisassociateManagedNotificationAdditionalChannelRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_managedNotificationConfigurationArnHasBeenSet)
  {
   payload.WithString("managedNotificationConfigurationArn", m_managedNotificationConfigurationArn);

  }

  return payload.View().WriteReadable();
}




