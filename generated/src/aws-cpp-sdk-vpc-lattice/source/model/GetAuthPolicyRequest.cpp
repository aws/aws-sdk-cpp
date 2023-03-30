/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/vpc-lattice/model/GetAuthPolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::VPCLattice::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetAuthPolicyRequest::GetAuthPolicyRequest() : 
    m_resourceIdentifierHasBeenSet(false)
{
}

Aws::String GetAuthPolicyRequest::SerializePayload() const
{
  return {};
}




