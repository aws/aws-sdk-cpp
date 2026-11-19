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
enum class SubscriptionType { NOT_SET, MARKETPLACE, PRIVATE_, AWS_BUILT_IN };

namespace SubscriptionTypeMapper {
AWS_RTBFABRIC_API SubscriptionType GetSubscriptionTypeForName(const Aws::String& name);

AWS_RTBFABRIC_API Aws::String GetNameForSubscriptionType(SubscriptionType value);
}  // namespace SubscriptionTypeMapper
}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
