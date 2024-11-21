/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/notifications/model/DeleteNotificationConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Notifications::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteNotificationConfigurationRequest::DeleteNotificationConfigurationRequest() : 
    m_arnHasBeenSet(false)
{
}

Aws::String DeleteNotificationConfigurationRequest::SerializePayload() const
{
  return {};
}




