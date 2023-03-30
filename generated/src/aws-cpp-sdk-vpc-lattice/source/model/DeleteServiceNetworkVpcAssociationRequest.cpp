/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/vpc-lattice/model/DeleteServiceNetworkVpcAssociationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::VPCLattice::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteServiceNetworkVpcAssociationRequest::DeleteServiceNetworkVpcAssociationRequest() : 
    m_serviceNetworkVpcAssociationIdentifierHasBeenSet(false)
{
}

Aws::String DeleteServiceNetworkVpcAssociationRequest::SerializePayload() const
{
  return {};
}




