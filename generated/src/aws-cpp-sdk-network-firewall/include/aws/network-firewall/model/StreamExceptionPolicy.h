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
enum class StreamExceptionPolicy { NOT_SET, DROP, CONTINUE, REJECT };

namespace StreamExceptionPolicyMapper {
AWS_NETWORKFIREWALL_API StreamExceptionPolicy GetStreamExceptionPolicyForName(const Aws::String& name);

AWS_NETWORKFIREWALL_API Aws::String GetNameForStreamExceptionPolicy(StreamExceptionPolicy value);
}  // namespace StreamExceptionPolicyMapper
}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
