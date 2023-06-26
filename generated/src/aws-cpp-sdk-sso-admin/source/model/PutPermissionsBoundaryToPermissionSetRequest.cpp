/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-admin/model/PutPermissionsBoundaryToPermissionSetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSOAdmin::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutPermissionsBoundaryToPermissionSetRequest::PutPermissionsBoundaryToPermissionSetRequest() : 
    m_instanceArnHasBeenSet(false),
    m_permissionSetArnHasBeenSet(false),
    m_permissionsBoundaryHasBeenSet(false)
{
}

Aws::String PutPermissionsBoundaryToPermissionSetRequest::SerializePayload() const
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

  if(m_permissionsBoundaryHasBeenSet)
  {
   payload.WithObject("PermissionsBoundary", m_permissionsBoundary.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutPermissionsBoundaryToPermissionSetRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SWBExternalService.PutPermissionsBoundaryToPermissionSet"));
  return headers;

}




