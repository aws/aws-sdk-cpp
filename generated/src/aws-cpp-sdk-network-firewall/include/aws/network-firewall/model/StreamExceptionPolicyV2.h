/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>

namespace Aws {
namespace NetworkFirewall {
namespace Model {
enum class StreamExceptionPolicyV2 { NOT_SET, DROP, REJECT };

namespace StreamExceptionPolicyV2Mapper {
AWS_NETWORKFIREWALL_API StreamExceptionPolicyV2 GetStreamExceptionPolicyV2ForName(const Aws::String& name);

AWS_NETWORKFIREWALL_API Aws::String GetNameForStreamExceptionPolicyV2(StreamExceptionPolicyV2 value);
}  // namespace StreamExceptionPolicyV2Mapper
}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
