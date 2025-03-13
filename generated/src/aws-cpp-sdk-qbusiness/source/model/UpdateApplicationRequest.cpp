/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/UpdateApplicationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateApplicationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_identityCenterInstanceArnHasBeenSet)
  {
   payload.WithString("identityCenterInstanceArn", m_identityCenterInstanceArn);

  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("displayName", m_displayName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

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

  if(m_autoSubscriptionConfigurationHasBeenSet)
  {
   payload.WithObject("autoSubscriptionConfiguration", m_autoSubscriptionConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}




