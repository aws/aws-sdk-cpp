/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/UpdateEmailIdentityPolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SESV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateEmailIdentityPolicyRequest::UpdateEmailIdentityPolicyRequest() : 
    m_emailIdentityHasBeenSet(false),
    m_policyNameHasBeenSet(false),
    m_policyHasBeenSet(false)
{
}

Aws::String UpdateEmailIdentityPolicyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_policyHasBeenSet)
  {
   payload.WithString("Policy", m_policy);

  }

  return payload.View().WriteReadable();
}




