/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-admin/model/DescribePermissionSetProvisioningStatusRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSOAdmin::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribePermissionSetProvisioningStatusRequest::DescribePermissionSetProvisioningStatusRequest() : 
    m_instanceArnHasBeenSet(false),
    m_provisionPermissionSetRequestIdHasBeenSet(false)
{
}

Aws::String DescribePermissionSetProvisioningStatusRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_instanceArnHasBeenSet)
  {
   payload.WithString("InstanceArn", m_instanceArn);

  }

  if(m_provisionPermissionSetRequestIdHasBeenSet)
  {
   payload.WithString("ProvisionPermissionSetRequestId", m_provisionPermissionSetRequestId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribePermissionSetProvisioningStatusRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SWBExternalService.DescribePermissionSetProvisioningStatus"));
  return headers;

}




