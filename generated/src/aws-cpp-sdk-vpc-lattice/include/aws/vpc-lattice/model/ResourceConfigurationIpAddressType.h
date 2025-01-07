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
  enum class ResourceConfigurationIpAddressType
  {
    NOT_SET,
    IPV4,
    IPV6,
    DUALSTACK
  };

namespace ResourceConfigurationIpAddressTypeMapper
{
AWS_VPCLATTICE_API ResourceConfigurationIpAddressType GetResourceConfigurationIpAddressTypeForName(const Aws::String& name);

AWS_VPCLATTICE_API Aws::String GetNameForResourceConfigurationIpAddressType(ResourceConfigurationIpAddressType value);
} // namespace ResourceConfigurationIpAddressTypeMapper
} // namespace Model
} // namespace VPCLattice
} // namespace Aws
