/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workdocs/model/DeleteNotificationSubscriptionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkDocs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteNotificationSubscriptionRequest::DeleteNotificationSubscriptionRequest() : 
    m_subscriptionIdHasBeenSet(false),
    m_organizationIdHasBeenSet(false)
{
}

Aws::String DeleteNotificationSubscriptionRequest::SerializePayload() const
{
  return {};
}




