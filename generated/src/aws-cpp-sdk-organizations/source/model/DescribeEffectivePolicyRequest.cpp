/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/organizations/model/DescribeEffectivePolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Organizations::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeEffectivePolicyRequest::DescribeEffectivePolicyRequest() : 
    m_policyType(EffectivePolicyType::NOT_SET),
    m_policyTypeHasBeenSet(false),
    m_targetIdHasBeenSet(false)
{
}

Aws::String DescribeEffectivePolicyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_policyTypeHasBeenSet)
  {
   payload.WithString("PolicyType", EffectivePolicyTypeMapper::GetNameForEffectivePolicyType(m_policyType));
  }

  if(m_targetIdHasBeenSet)
  {
   payload.WithString("TargetId", m_targetId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeEffectivePolicyRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSOrganizationsV20161128.DescribeEffectivePolicy"));
  return headers;

}




