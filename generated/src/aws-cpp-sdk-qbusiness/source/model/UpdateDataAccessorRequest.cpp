/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/UpdateDataAccessorRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateDataAccessorRequest::UpdateDataAccessorRequest() : 
    m_applicationIdHasBeenSet(false),
    m_dataAccessorIdHasBeenSet(false),
    m_actionConfigurationsHasBeenSet(false),
    m_displayNameHasBeenSet(false)
{
}

Aws::String UpdateDataAccessorRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_actionConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> actionConfigurationsJsonList(m_actionConfigurations.size());
   for(unsigned actionConfigurationsIndex = 0; actionConfigurationsIndex < actionConfigurationsJsonList.GetLength(); ++actionConfigurationsIndex)
   {
     actionConfigurationsJsonList[actionConfigurationsIndex].AsObject(m_actionConfigurations[actionConfigurationsIndex].Jsonize());
   }
   payload.WithArray("actionConfigurations", std::move(actionConfigurationsJsonList));

  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("displayName", m_displayName);

  }

  return payload.View().WriteReadable();
}




