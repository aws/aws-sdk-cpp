/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/notifications/model/AssociateManagedNotificationAdditionalChannelRequest.h>

#include <utility>

using namespace Aws::Notifications::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String AssociateManagedNotificationAdditionalChannelRequest::SerializePayload() const {
  JsonValue payload;

  if (m_managedNotificationConfigurationArnHasBeenSet) {
    payload.WithString("managedNotificationConfigurationArn", m_managedNotificationConfigurationArn);
  }

  if (m_isSensitiveEventsSubscribedHasBeenSet) {
    payload.WithBool("isSensitiveEventsSubscribed", m_isSensitiveEventsSubscribed);
  }

  return payload.View().WriteReadable();
}
