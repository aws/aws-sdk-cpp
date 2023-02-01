/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-web/model/CreateBrowserSettingsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkSpacesWeb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateBrowserSettingsRequest::CreateBrowserSettingsRequest() : 
    m_additionalEncryptionContextHasBeenSet(false),
    m_browserPolicyHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_customerManagedKeyHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateBrowserSettingsRequest::SerializePayload() const
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

  if(m_browserPolicyHasBeenSet)
  {
   payload.WithString("browserPolicy", m_browserPolicy);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_customerManagedKeyHasBeenSet)
  {
   payload.WithString("customerManagedKey", m_customerManagedKey);

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




