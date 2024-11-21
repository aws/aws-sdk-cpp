/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-web/model/UpdateDataProtectionSettingsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkSpacesWeb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateDataProtectionSettingsRequest::UpdateDataProtectionSettingsRequest() : 
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_dataProtectionSettingsArnHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_inlineRedactionConfigurationHasBeenSet(false)
{
}

Aws::String UpdateDataProtectionSettingsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("displayName", m_displayName);

  }

  if(m_inlineRedactionConfigurationHasBeenSet)
  {
   payload.WithObject("inlineRedactionConfiguration", m_inlineRedactionConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}




