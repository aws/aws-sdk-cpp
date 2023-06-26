/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/CreateTLSInspectionConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::NetworkFirewall::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateTLSInspectionConfigurationRequest::CreateTLSInspectionConfigurationRequest() : 
    m_tLSInspectionConfigurationNameHasBeenSet(false),
    m_tLSInspectionConfigurationHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_encryptionConfigurationHasBeenSet(false)
{
}

Aws::String CreateTLSInspectionConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_tLSInspectionConfigurationNameHasBeenSet)
  {
   payload.WithString("TLSInspectionConfigurationName", m_tLSInspectionConfigurationName);

  }

  if(m_tLSInspectionConfigurationHasBeenSet)
  {
   payload.WithObject("TLSInspectionConfiguration", m_tLSInspectionConfiguration.Jsonize());

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  if(m_encryptionConfigurationHasBeenSet)
  {
   payload.WithObject("EncryptionConfiguration", m_encryptionConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateTLSInspectionConfigurationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "NetworkFirewall_20201112.CreateTLSInspectionConfiguration"));
  return headers;

}




