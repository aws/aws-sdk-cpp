/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/vpc-lattice/model/GetResourcePolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::VPCLattice::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetResourcePolicyRequest::GetResourcePolicyRequest() : 
    m_resourceArnHasBeenSet(false)
{
}

Aws::String GetResourcePolicyRequest::SerializePayload() const
{
  return {};
}




