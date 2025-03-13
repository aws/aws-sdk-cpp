/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/CreateApplicationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateApplicationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("displayName", m_displayName);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_identityTypeHasBeenSet)
  {
   payload.WithString("identityType", IdentityTypeMapper::GetNameForIdentityType(m_identityType));
  }

  if(m_iamIdentityProviderArnHasBeenSet)
  {
   payload.WithString("iamIdentityProviderArn", m_iamIdentityProviderArn);

  }

  if(m_identityCenterInstanceArnHasBeenSet)
  {
   payload.WithString("identityCenterInstanceArn", m_identityCenterInstanceArn);

  }

  if(m_clientIdsForOIDCHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> clientIdsForOIDCJsonList(m_clientIdsForOIDC.size());
   for(unsigned clientIdsForOIDCIndex = 0; clientIdsForOIDCIndex < clientIdsForOIDCJsonList.GetLength(); ++clientIdsForOIDCIndex)
   {
     clientIdsForOIDCJsonList[clientIdsForOIDCIndex].AsString(m_clientIdsForOIDC[clientIdsForOIDCIndex]);
   }
   payload.WithArray("clientIdsForOIDC", std::move(clientIdsForOIDCJsonList));

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_encryptionConfigurationHasBeenSet)
  {
   payload.WithObject("encryptionConfiguration", m_encryptionConfiguration.Jsonize());

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

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_attachmentsConfigurationHasBeenSet)
  {
   payload.WithObject("attachmentsConfiguration", m_attachmentsConfiguration.Jsonize());

  }

  if(m_qAppsConfigurationHasBeenSet)
  {
   payload.WithObject("qAppsConfiguration", m_qAppsConfiguration.Jsonize());

  }

  if(m_personalizationConfigurationHasBeenSet)
  {
   payload.WithObject("personalizationConfiguration", m_personalizationConfiguration.Jsonize());

  }

  if(m_quickSightConfigurationHasBeenSet)
  {
   payload.WithObject("quickSightConfiguration", m_quickSightConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}




