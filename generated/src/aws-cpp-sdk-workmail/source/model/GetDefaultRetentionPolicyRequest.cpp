/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workmail/model/GetDefaultRetentionPolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkMail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetDefaultRetentionPolicyRequest::GetDefaultRetentionPolicyRequest() : 
    m_organizationIdHasBeenSet(false)
{
}

Aws::String GetDefaultRetentionPolicyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_organizationIdHasBeenSet)
  {
   payload.WithString("OrganizationId", m_organizationId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetDefaultRetentionPolicyRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "WorkMailService.GetDefaultRetentionPolicy"));
  return headers;

}




