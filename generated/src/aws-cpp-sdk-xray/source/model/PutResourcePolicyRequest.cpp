/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/xray/model/PutResourcePolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::XRay::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutResourcePolicyRequest::PutResourcePolicyRequest() : 
    m_policyNameHasBeenSet(false),
    m_policyDocumentHasBeenSet(false),
    m_policyRevisionIdHasBeenSet(false),
    m_bypassPolicyLockoutCheck(false),
    m_bypassPolicyLockoutCheckHasBeenSet(false)
{
}

Aws::String PutResourcePolicyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_policyNameHasBeenSet)
  {
   payload.WithString("PolicyName", m_policyName);

  }

  if(m_policyDocumentHasBeenSet)
  {
   payload.WithString("PolicyDocument", m_policyDocument);

  }

  if(m_policyRevisionIdHasBeenSet)
  {
   payload.WithString("PolicyRevisionId", m_policyRevisionId);

  }

  if(m_bypassPolicyLockoutCheckHasBeenSet)
  {
   payload.WithBool("BypassPolicyLockoutCheck", m_bypassPolicyLockoutCheck);

  }

  return payload.View().WriteReadable();
}




