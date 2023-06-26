/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/vpc-lattice/model/DeleteServiceNetworkServiceAssociationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::VPCLattice::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteServiceNetworkServiceAssociationRequest::DeleteServiceNetworkServiceAssociationRequest() : 
    m_serviceNetworkServiceAssociationIdentifierHasBeenSet(false)
{
}

Aws::String DeleteServiceNetworkServiceAssociationRequest::SerializePayload() const
{
  return {};
}




