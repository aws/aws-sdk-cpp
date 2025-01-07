﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/vpc-lattice/model/DeleteServiceNetworkResourceAssociationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::VPCLattice::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteServiceNetworkResourceAssociationRequest::DeleteServiceNetworkResourceAssociationRequest() : 
    m_serviceNetworkResourceAssociationIdentifierHasBeenSet(false)
{
}

Aws::String DeleteServiceNetworkResourceAssociationRequest::SerializePayload() const
{
  return {};
}




