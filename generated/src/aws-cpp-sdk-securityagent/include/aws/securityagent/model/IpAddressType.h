/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>

namespace Aws {
namespace SecurityAgent {
namespace Model {
enum class IpAddressType { NOT_SET, IPV4, IPV6, DUAL_STACK };

namespace IpAddressTypeMapper {
AWS_SECURITYAGENT_API IpAddressType GetIpAddressTypeForName(const Aws::String& name);

AWS_SECURITYAGENT_API Aws::String GetNameForIpAddressType(IpAddressType value);
}  // namespace IpAddressTypeMapper
}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
