/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-web/model/UpdateUserSettingsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkSpacesWeb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateUserSettingsRequest::UpdateUserSettingsRequest() : 
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_cookieSynchronizationConfigurationHasBeenSet(false),
    m_copyAllowed(EnabledType::NOT_SET),
    m_copyAllowedHasBeenSet(false),
    m_disconnectTimeoutInMinutes(0),
    m_disconnectTimeoutInMinutesHasBeenSet(false),
    m_downloadAllowed(EnabledType::NOT_SET),
    m_downloadAllowedHasBeenSet(false),
    m_idleDisconnectTimeoutInMinutes(0),
    m_idleDisconnectTimeoutInMinutesHasBeenSet(false),
    m_pasteAllowed(EnabledType::NOT_SET),
    m_pasteAllowedHasBeenSet(false),
    m_printAllowed(EnabledType::NOT_SET),
    m_printAllowedHasBeenSet(false),
    m_uploadAllowed(EnabledType::NOT_SET),
    m_uploadAllowedHasBeenSet(false),
    m_userSettingsArnHasBeenSet(false)
{
}

Aws::String UpdateUserSettingsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_cookieSynchronizationConfigurationHasBeenSet)
  {
   payload.WithObject("cookieSynchronizationConfiguration", m_cookieSynchronizationConfiguration.Jsonize());

  }

  if(m_copyAllowedHasBeenSet)
  {
   payload.WithString("copyAllowed", EnabledTypeMapper::GetNameForEnabledType(m_copyAllowed));
  }

  if(m_disconnectTimeoutInMinutesHasBeenSet)
  {
   payload.WithInteger("disconnectTimeoutInMinutes", m_disconnectTimeoutInMinutes);

  }

  if(m_downloadAllowedHasBeenSet)
  {
   payload.WithString("downloadAllowed", EnabledTypeMapper::GetNameForEnabledType(m_downloadAllowed));
  }

  if(m_idleDisconnectTimeoutInMinutesHasBeenSet)
  {
   payload.WithInteger("idleDisconnectTimeoutInMinutes", m_idleDisconnectTimeoutInMinutes);

  }

  if(m_pasteAllowedHasBeenSet)
  {
   payload.WithString("pasteAllowed", EnabledTypeMapper::GetNameForEnabledType(m_pasteAllowed));
  }

  if(m_printAllowedHasBeenSet)
  {
   payload.WithString("printAllowed", EnabledTypeMapper::GetNameForEnabledType(m_printAllowed));
  }

  if(m_uploadAllowedHasBeenSet)
  {
   payload.WithString("uploadAllowed", EnabledTypeMapper::GetNameForEnabledType(m_uploadAllowed));
  }

  return payload.View().WriteReadable();
}




