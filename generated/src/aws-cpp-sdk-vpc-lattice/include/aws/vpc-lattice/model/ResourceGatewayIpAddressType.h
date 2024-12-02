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
  enum class ResourceGatewayIpAddressType
  {
    NOT_SET,
    IPV4,
    IPV6,
    DUALSTACK
  };

namespace ResourceGatewayIpAddressTypeMapper
{
AWS_VPCLATTICE_API ResourceGatewayIpAddressType GetResourceGatewayIpAddressTypeForName(const Aws::String& name);

AWS_VPCLATTICE_API Aws::String GetNameForResourceGatewayIpAddressType(ResourceGatewayIpAddressType value);
} // namespace ResourceGatewayIpAddressTypeMapper
} // namespace Model
} // namespace VPCLattice
} // namespace Aws
