/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/vpc-lattice/model/DeleteResourcePolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::VPCLattice::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteResourcePolicyRequest::DeleteResourcePolicyRequest() : 
    m_resourceArnHasBeenSet(false)
{
}

Aws::String DeleteResourcePolicyRequest::SerializePayload() const
{
  return {};
}




