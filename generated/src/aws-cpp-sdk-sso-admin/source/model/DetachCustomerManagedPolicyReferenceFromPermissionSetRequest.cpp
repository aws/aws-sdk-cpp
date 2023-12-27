/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-admin/model/DetachCustomerManagedPolicyReferenceFromPermissionSetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSOAdmin::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DetachCustomerManagedPolicyReferenceFromPermissionSetRequest::DetachCustomerManagedPolicyReferenceFromPermissionSetRequest() : 
    m_customerManagedPolicyReferenceHasBeenSet(false),
    m_instanceArnHasBeenSet(false),
    m_permissionSetArnHasBeenSet(false)
{
}

Aws::String DetachCustomerManagedPolicyReferenceFromPermissionSetRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_customerManagedPolicyReferenceHasBeenSet)
  {
   payload.WithObject("CustomerManagedPolicyReference", m_customerManagedPolicyReference.Jsonize());

  }

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

Aws::Http::HeaderValueCollection DetachCustomerManagedPolicyReferenceFromPermissionSetRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SWBExternalService.DetachCustomerManagedPolicyReferenceFromPermissionSet"));
  return headers;

}




