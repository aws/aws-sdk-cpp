/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rtbfabric/RTBFabric_EXPORTS.h>

namespace Aws {
namespace RTBFabric {
namespace Model {
enum class SubscriptionStatus { NOT_SET, ACTIVE, EXPIRED };

namespace SubscriptionStatusMapper {
AWS_RTBFABRIC_API SubscriptionStatus GetSubscriptionStatusForName(const Aws::String& name);

AWS_RTBFABRIC_API Aws::String GetNameForSubscriptionStatus(SubscriptionStatus value);
}  // namespace SubscriptionStatusMapper
}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
