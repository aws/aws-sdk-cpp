/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/PutResourcePolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutResourcePolicyRequest::PutResourcePolicyRequest() : 
    m_resourceArnHasBeenSet(false),
    m_policyHasBeenSet(false),
    m_policyIdHasBeenSet(false),
    m_policyHashHasBeenSet(false)
{
}

Aws::String PutResourcePolicyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("ResourceArn", m_resourceArn);

  }

  if(m_policyHasBeenSet)
  {
   payload.WithString("Policy", m_policy);

  }

  if(m_policyIdHasBeenSet)
  {
   payload.WithString("PolicyId", m_policyId);

  }

  if(m_policyHashHasBeenSet)
  {
   payload.WithString("PolicyHash", m_policyHash);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutResourcePolicyRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonSSM.PutResourcePolicy"));
  return headers;

}




