﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/notifications/model/GetManagedNotificationConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Notifications::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetManagedNotificationConfigurationRequest::GetManagedNotificationConfigurationRequest() : 
    m_arnHasBeenSet(false)
{
}

Aws::String GetManagedNotificationConfigurationRequest::SerializePayload() const
{
  return {};
}




