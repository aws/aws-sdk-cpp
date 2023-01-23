/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/xray/model/DeleteResourcePolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::XRay::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteResourcePolicyRequest::DeleteResourcePolicyRequest() : 
    m_policyNameHasBeenSet(false),
    m_policyRevisionIdHasBeenSet(false)
{
}

Aws::String DeleteResourcePolicyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_policyNameHasBeenSet)
  {
   payload.WithString("PolicyName", m_policyName);

  }

  if(m_policyRevisionIdHasBeenSet)
  {
   payload.WithString("PolicyRevisionId", m_policyRevisionId);

  }

  return payload.View().WriteReadable();
}




