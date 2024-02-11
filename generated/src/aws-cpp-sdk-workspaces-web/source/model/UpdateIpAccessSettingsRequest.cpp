/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-web/model/UpdateIpAccessSettingsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkSpacesWeb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateIpAccessSettingsRequest::UpdateIpAccessSettingsRequest() : 
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_descriptionHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_ipAccessSettingsArnHasBeenSet(false),
    m_ipRulesHasBeenSet(false)
{
}

Aws::String UpdateIpAccessSettingsRequest::SerializePayload() const
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

  if(m_ipRulesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ipRulesJsonList(m_ipRules.size());
   for(unsigned ipRulesIndex = 0; ipRulesIndex < ipRulesJsonList.GetLength(); ++ipRulesIndex)
   {
     ipRulesJsonList[ipRulesIndex].AsObject(m_ipRules[ipRulesIndex].Jsonize());
   }
   payload.WithArray("ipRules", std::move(ipRulesJsonList));

  }

  return payload.View().WriteReadable();
}




