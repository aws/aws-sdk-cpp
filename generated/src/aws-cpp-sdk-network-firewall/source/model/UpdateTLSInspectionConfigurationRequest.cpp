/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/UpdateTLSInspectionConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::NetworkFirewall::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateTLSInspectionConfigurationRequest::UpdateTLSInspectionConfigurationRequest() : 
    m_tLSInspectionConfigurationArnHasBeenSet(false),
    m_tLSInspectionConfigurationNameHasBeenSet(false),
    m_tLSInspectionConfigurationHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_encryptionConfigurationHasBeenSet(false),
    m_updateTokenHasBeenSet(false)
{
}

Aws::String UpdateTLSInspectionConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_tLSInspectionConfigurationArnHasBeenSet)
  {
   payload.WithString("TLSInspectionConfigurationArn", m_tLSInspectionConfigurationArn);

  }

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

  if(m_encryptionConfigurationHasBeenSet)
  {
   payload.WithObject("EncryptionConfiguration", m_encryptionConfiguration.Jsonize());

  }

  if(m_updateTokenHasBeenSet)
  {
   payload.WithString("UpdateToken", m_updateToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateTLSInspectionConfigurationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "NetworkFirewall_20201112.UpdateTLSInspectionConfiguration"));
  return headers;

}




