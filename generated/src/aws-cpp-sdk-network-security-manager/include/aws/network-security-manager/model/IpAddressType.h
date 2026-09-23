/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-security-manager/NetworkSecurityManager_EXPORTS.h>

namespace Aws {
namespace NetworkSecurityManager {
namespace Model {
enum class IpAddressType { NOT_SET, ipv4, dualstack, dualstack_without_public_ipv4 };

namespace IpAddressTypeMapper {
AWS_NETWORKSECURITYMANAGER_API IpAddressType GetIpAddressTypeForName(const Aws::String& name);

AWS_NETWORKSECURITYMANAGER_API Aws::String GetNameForIpAddressType(IpAddressType value);
}  // namespace IpAddressTypeMapper
}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
