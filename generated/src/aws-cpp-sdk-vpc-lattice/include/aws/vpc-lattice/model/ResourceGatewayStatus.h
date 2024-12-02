/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace VPCLattice
{
namespace Model
{
  enum class ResourceGatewayStatus
  {
    NOT_SET,
    ACTIVE,
    CREATE_IN_PROGRESS,
    UPDATE_IN_PROGRESS,
    DELETE_IN_PROGRESS,
    CREATE_FAILED,
    UPDATE_FAILED,
    DELETE_FAILED
  };

namespace ResourceGatewayStatusMapper
{
AWS_VPCLATTICE_API ResourceGatewayStatus GetResourceGatewayStatusForName(const Aws::String& name);

AWS_VPCLATTICE_API Aws::String GetNameForResourceGatewayStatus(ResourceGatewayStatus value);
} // namespace ResourceGatewayStatusMapper
} // namespace Model
} // namespace VPCLattice
} // namespace Aws
