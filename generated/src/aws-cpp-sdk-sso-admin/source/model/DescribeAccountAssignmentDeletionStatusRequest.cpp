/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-admin/model/DescribeAccountAssignmentDeletionStatusRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSOAdmin::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeAccountAssignmentDeletionStatusRequest::DescribeAccountAssignmentDeletionStatusRequest() : 
    m_instanceArnHasBeenSet(false),
    m_accountAssignmentDeletionRequestIdHasBeenSet(false)
{
}

Aws::String DescribeAccountAssignmentDeletionStatusRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_instanceArnHasBeenSet)
  {
   payload.WithString("InstanceArn", m_instanceArn);

  }

  if(m_accountAssignmentDeletionRequestIdHasBeenSet)
  {
   payload.WithString("AccountAssignmentDeletionRequestId", m_accountAssignmentDeletionRequestId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeAccountAssignmentDeletionStatusRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SWBExternalService.DescribeAccountAssignmentDeletionStatus"));
  return headers;

}




