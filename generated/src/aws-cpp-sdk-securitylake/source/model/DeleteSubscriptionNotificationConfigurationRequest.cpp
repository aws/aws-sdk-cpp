/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securitylake/model/DeleteSubscriptionNotificationConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SecurityLake::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteSubscriptionNotificationConfigurationRequest::DeleteSubscriptionNotificationConfigurationRequest() : 
    m_subscriptionIdHasBeenSet(false)
{
}

Aws::String DeleteSubscriptionNotificationConfigurationRequest::SerializePayload() const
{
  return {};
}




