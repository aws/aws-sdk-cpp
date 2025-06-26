/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/CreateDataAccessorRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateDataAccessorRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_principalHasBeenSet)
  {
   payload.WithString("principal", m_principal);

  }

  if(m_actionConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> actionConfigurationsJsonList(m_actionConfigurations.size());
   for(unsigned actionConfigurationsIndex = 0; actionConfigurationsIndex < actionConfigurationsJsonList.GetLength(); ++actionConfigurationsIndex)
   {
     actionConfigurationsJsonList[actionConfigurationsIndex].AsObject(m_actionConfigurations[actionConfigurationsIndex].Jsonize());
   }
   payload.WithArray("actionConfigurations", std::move(actionConfigurationsJsonList));

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("displayName", m_displayName);

  }

  if(m_authenticationDetailHasBeenSet)
  {
   payload.WithObject("authenticationDetail", m_authenticationDetail.Jsonize());

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




