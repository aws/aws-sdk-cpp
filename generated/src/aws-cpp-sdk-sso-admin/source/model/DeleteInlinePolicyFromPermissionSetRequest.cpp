/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-admin/model/DeleteInlinePolicyFromPermissionSetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSOAdmin::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteInlinePolicyFromPermissionSetRequest::DeleteInlinePolicyFromPermissionSetRequest() : 
    m_instanceArnHasBeenSet(false),
    m_permissionSetArnHasBeenSet(false)
{
}

Aws::String DeleteInlinePolicyFromPermissionSetRequest::SerializePayload() const
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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteInlinePolicyFromPermissionSetRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SWBExternalService.DeleteInlinePolicyFromPermissionSet"));
  return headers;

}




