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
enum class StatefulAction { NOT_SET, PASS, DROP, ALERT, REJECT };

namespace StatefulActionMapper {
AWS_NETWORKFIREWALL_API StatefulAction GetStatefulActionForName(const Aws::String& name);

AWS_NETWORKFIREWALL_API Aws::String GetNameForStatefulAction(StatefulAction value);
}  // namespace StatefulActionMapper
}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
