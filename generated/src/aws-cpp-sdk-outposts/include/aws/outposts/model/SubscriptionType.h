/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/outposts/Outposts_EXPORTS.h>

namespace Aws {
namespace Outposts {
namespace Model {
enum class SubscriptionType { NOT_SET, ORIGINAL, RENEWAL, CAPACITY_INCREASE };

namespace SubscriptionTypeMapper {
AWS_OUTPOSTS_API SubscriptionType GetSubscriptionTypeForName(const Aws::String& name);

AWS_OUTPOSTS_API Aws::String GetNameForSubscriptionType(SubscriptionType value);
}  // namespace SubscriptionTypeMapper
}  // namespace Model
}  // namespace Outposts
}  // namespace Aws
