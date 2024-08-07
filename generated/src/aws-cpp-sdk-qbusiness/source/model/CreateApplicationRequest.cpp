﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/CreateApplicationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateApplicationRequest::CreateApplicationRequest() : 
    m_displayNameHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_identityCenterInstanceArnHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_encryptionConfigurationHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_attachmentsConfigurationHasBeenSet(false),
    m_qAppsConfigurationHasBeenSet(false),
    m_personalizationConfigurationHasBeenSet(false)
{
}

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

  if(m_identityCenterInstanceArnHasBeenSet)
  {
   payload.WithString("identityCenterInstanceArn", m_identityCenterInstanceArn);

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

  return payload.View().WriteReadable();
}




