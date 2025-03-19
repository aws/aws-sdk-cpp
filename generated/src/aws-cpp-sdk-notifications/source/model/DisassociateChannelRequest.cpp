/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/notifications/model/DisassociateChannelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Notifications::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DisassociateChannelRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_notificationConfigurationArnHasBeenSet)
  {
   payload.WithString("notificationConfigurationArn", m_notificationConfigurationArn);

  }

  return payload.View().WriteReadable();
}




