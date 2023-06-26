﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securitylake/model/DeleteSubscriberNotificationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SecurityLake::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteSubscriberNotificationRequest::DeleteSubscriberNotificationRequest() : 
    m_subscriberIdHasBeenSet(false)
{
}

Aws::String DeleteSubscriberNotificationRequest::SerializePayload() const
{
  return {};
}




