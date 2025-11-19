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
enum class SubscriptionStatus { NOT_SET, NOT_SUBSCRIBED, SUBSCRIBED };

namespace SubscriptionStatusMapper {
AWS_NETWORKFIREWALL_API SubscriptionStatus GetSubscriptionStatusForName(const Aws::String& name);

AWS_NETWORKFIREWALL_API Aws::String GetNameForSubscriptionStatus(SubscriptionStatus value);
}  // namespace SubscriptionStatusMapper
}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
