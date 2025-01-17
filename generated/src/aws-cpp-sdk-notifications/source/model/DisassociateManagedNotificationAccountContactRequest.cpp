/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/notifications/model/DisassociateManagedNotificationAccountContactRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Notifications::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DisassociateManagedNotificationAccountContactRequest::DisassociateManagedNotificationAccountContactRequest() : 
    m_contactIdentifier(AccountContactType::NOT_SET),
    m_contactIdentifierHasBeenSet(false),
    m_managedNotificationConfigurationArnHasBeenSet(false)
{
}

Aws::String DisassociateManagedNotificationAccountContactRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_managedNotificationConfigurationArnHasBeenSet)
  {
   payload.WithString("managedNotificationConfigurationArn", m_managedNotificationConfigurationArn);

  }

  return payload.View().WriteReadable();
}




