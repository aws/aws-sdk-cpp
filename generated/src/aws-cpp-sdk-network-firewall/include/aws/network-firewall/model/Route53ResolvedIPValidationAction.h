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
enum class Route53ResolvedIPValidationAction { NOT_SET, REJECT, DROP, ALERT };

namespace Route53ResolvedIPValidationActionMapper {
AWS_NETWORKFIREWALL_API Route53ResolvedIPValidationAction GetRoute53ResolvedIPValidationActionForName(const Aws::String& name);

AWS_NETWORKFIREWALL_API Aws::String GetNameForRoute53ResolvedIPValidationAction(Route53ResolvedIPValidationAction value);
}  // namespace Route53ResolvedIPValidationActionMapper
}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
