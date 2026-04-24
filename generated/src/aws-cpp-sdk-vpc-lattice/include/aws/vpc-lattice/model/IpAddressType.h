/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>

namespace Aws {
namespace VPCLattice {
namespace Model {
enum class IpAddressType { NOT_SET, IPV4, IPV6 };

namespace IpAddressTypeMapper {
AWS_VPCLATTICE_API IpAddressType GetIpAddressTypeForName(const Aws::String& name);

AWS_VPCLATTICE_API Aws::String GetNameForIpAddressType(IpAddressType value);
}  // namespace IpAddressTypeMapper
}  // namespace Model
}  // namespace VPCLattice
}  // namespace Aws
