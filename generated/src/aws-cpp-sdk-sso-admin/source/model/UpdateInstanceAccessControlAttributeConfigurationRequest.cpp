/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-admin/model/UpdateInstanceAccessControlAttributeConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSOAdmin::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateInstanceAccessControlAttributeConfigurationRequest::UpdateInstanceAccessControlAttributeConfigurationRequest() : 
    m_instanceArnHasBeenSet(false),
    m_instanceAccessControlAttributeConfigurationHasBeenSet(false)
{
}

Aws::String UpdateInstanceAccessControlAttributeConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_instanceArnHasBeenSet)
  {
   payload.WithString("InstanceArn", m_instanceArn);

  }

  if(m_instanceAccessControlAttributeConfigurationHasBeenSet)
  {
   payload.WithObject("InstanceAccessControlAttributeConfiguration", m_instanceAccessControlAttributeConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateInstanceAccessControlAttributeConfigurationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SWBExternalService.UpdateInstanceAccessControlAttributeConfiguration"));
  return headers;

}




