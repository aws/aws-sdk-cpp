/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/organizations/model/DisablePolicyTypeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Organizations::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DisablePolicyTypeRequest::DisablePolicyTypeRequest() : 
    m_rootIdHasBeenSet(false),
    m_policyType(PolicyType::NOT_SET),
    m_policyTypeHasBeenSet(false)
{
}

Aws::String DisablePolicyTypeRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_rootIdHasBeenSet)
  {
   payload.WithString("RootId", m_rootId);

  }

  if(m_policyTypeHasBeenSet)
  {
   payload.WithString("PolicyType", PolicyTypeMapper::GetNameForPolicyType(m_policyType));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DisablePolicyTypeRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSOrganizationsV20161128.DisablePolicyType"));
  return headers;

}




