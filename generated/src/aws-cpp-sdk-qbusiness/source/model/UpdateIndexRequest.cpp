/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/UpdateIndexRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateIndexRequest::UpdateIndexRequest() : 
    m_applicationIdHasBeenSet(false),
    m_capacityConfigurationHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_documentAttributeConfigurationsHasBeenSet(false),
    m_indexIdHasBeenSet(false)
{
}

Aws::String UpdateIndexRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_capacityConfigurationHasBeenSet)
  {
   payload.WithObject("capacityConfiguration", m_capacityConfiguration.Jsonize());

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("displayName", m_displayName);

  }

  if(m_documentAttributeConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> documentAttributeConfigurationsJsonList(m_documentAttributeConfigurations.size());
   for(unsigned documentAttributeConfigurationsIndex = 0; documentAttributeConfigurationsIndex < documentAttributeConfigurationsJsonList.GetLength(); ++documentAttributeConfigurationsIndex)
   {
     documentAttributeConfigurationsJsonList[documentAttributeConfigurationsIndex].AsObject(m_documentAttributeConfigurations[documentAttributeConfigurationsIndex].Jsonize());
   }
   payload.WithArray("documentAttributeConfigurations", std::move(documentAttributeConfigurationsJsonList));

  }

  return payload.View().WriteReadable();
}




