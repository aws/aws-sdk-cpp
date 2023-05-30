/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securitylake/model/UpdateSubscriberNotificationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SecurityLake::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateSubscriberNotificationRequest::UpdateSubscriberNotificationRequest() : 
    m_configurationHasBeenSet(false),
    m_subscriberIdHasBeenSet(false)
{
}

Aws::String UpdateSubscriberNotificationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_configurationHasBeenSet)
  {
   payload.WithObject("configuration", m_configuration.Jsonize());

  }

  return payload.View().WriteReadable();
}




