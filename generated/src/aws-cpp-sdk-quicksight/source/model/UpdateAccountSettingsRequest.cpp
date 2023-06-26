/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/UpdateAccountSettingsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateAccountSettingsRequest::UpdateAccountSettingsRequest() : 
    m_awsAccountIdHasBeenSet(false),
    m_defaultNamespaceHasBeenSet(false),
    m_notificationEmailHasBeenSet(false),
    m_terminationProtectionEnabled(false),
    m_terminationProtectionEnabledHasBeenSet(false)
{
}

Aws::String UpdateAccountSettingsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_defaultNamespaceHasBeenSet)
  {
   payload.WithString("DefaultNamespace", m_defaultNamespace);

  }

  if(m_notificationEmailHasBeenSet)
  {
   payload.WithString("NotificationEmail", m_notificationEmail);

  }

  if(m_terminationProtectionEnabledHasBeenSet)
  {
   payload.WithBool("TerminationProtectionEnabled", m_terminationProtectionEnabled);

  }

  return payload.View().WriteReadable();
}




