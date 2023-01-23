/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/UpdateManagedInstanceRoleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateManagedInstanceRoleRequest::UpdateManagedInstanceRoleRequest() : 
    m_instanceIdHasBeenSet(false),
    m_iamRoleHasBeenSet(false)
{
}

Aws::String UpdateManagedInstanceRoleRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_instanceIdHasBeenSet)
  {
   payload.WithString("InstanceId", m_instanceId);

  }

  if(m_iamRoleHasBeenSet)
  {
   payload.WithString("IamRole", m_iamRole);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateManagedInstanceRoleRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonSSM.UpdateManagedInstanceRole"));
  return headers;

}




