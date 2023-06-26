/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-web/model/CreateIpAccessSettingsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkSpacesWeb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateIpAccessSettingsRequest::CreateIpAccessSettingsRequest() : 
    m_additionalEncryptionContextHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_customerManagedKeyHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_ipRulesHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateIpAccessSettingsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_additionalEncryptionContextHasBeenSet)
  {
   JsonValue additionalEncryptionContextJsonMap;
   for(auto& additionalEncryptionContextItem : m_additionalEncryptionContext)
   {
     additionalEncryptionContextJsonMap.WithString(additionalEncryptionContextItem.first, additionalEncryptionContextItem.second);
   }
   payload.WithObject("additionalEncryptionContext", std::move(additionalEncryptionContextJsonMap));

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_customerManagedKeyHasBeenSet)
  {
   payload.WithString("customerManagedKey", m_customerManagedKey);

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

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  return payload.View().WriteReadable();
}




