/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/UpdateChatResponseConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateChatResponseConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("displayName", m_displayName);

  }

  if(m_responseConfigurationsHasBeenSet)
  {
   JsonValue responseConfigurationsJsonMap;
   for(auto& responseConfigurationsItem : m_responseConfigurations)
   {
     responseConfigurationsJsonMap.WithObject(ResponseConfigurationTypeMapper::GetNameForResponseConfigurationType(responseConfigurationsItem.first), responseConfigurationsItem.second.Jsonize());
   }
   payload.WithObject("responseConfigurations", std::move(responseConfigurationsJsonMap));

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}




