/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-admin/model/ProvisionPermissionSetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSOAdmin::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ProvisionPermissionSetRequest::ProvisionPermissionSetRequest() : 
    m_instanceArnHasBeenSet(false),
    m_permissionSetArnHasBeenSet(false),
    m_targetIdHasBeenSet(false),
    m_targetType(ProvisionTargetType::NOT_SET),
    m_targetTypeHasBeenSet(false)
{
}

Aws::String ProvisionPermissionSetRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_instanceArnHasBeenSet)
  {
   payload.WithString("InstanceArn", m_instanceArn);

  }

  if(m_permissionSetArnHasBeenSet)
  {
   payload.WithString("PermissionSetArn", m_permissionSetArn);

  }

  if(m_targetIdHasBeenSet)
  {
   payload.WithString("TargetId", m_targetId);

  }

  if(m_targetTypeHasBeenSet)
  {
   payload.WithString("TargetType", ProvisionTargetTypeMapper::GetNameForProvisionTargetType(m_targetType));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ProvisionPermissionSetRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SWBExternalService.ProvisionPermissionSet"));
  return headers;

}




