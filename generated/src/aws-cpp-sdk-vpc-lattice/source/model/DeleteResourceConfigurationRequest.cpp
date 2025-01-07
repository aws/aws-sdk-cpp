﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/vpc-lattice/model/DeleteResourceConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::VPCLattice::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteResourceConfigurationRequest::DeleteResourceConfigurationRequest() : 
    m_resourceConfigurationIdentifierHasBeenSet(false)
{
}

Aws::String DeleteResourceConfigurationRequest::SerializePayload() const
{
  return {};
}




