/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/vpc-lattice/model/PutAuthPolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::VPCLattice::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutAuthPolicyRequest::PutAuthPolicyRequest() : 
    m_policyHasBeenSet(false),
    m_resourceIdentifierHasBeenSet(false)
{
}

Aws::String PutAuthPolicyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_policyHasBeenSet)
  {
   payload.WithString("policy", m_policy);

  }

  return payload.View().WriteReadable();
}




