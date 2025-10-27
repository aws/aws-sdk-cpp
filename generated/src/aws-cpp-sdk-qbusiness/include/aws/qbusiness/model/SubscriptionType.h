/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/QBusiness_EXPORTS.h>

namespace Aws {
namespace QBusiness {
namespace Model {
enum class SubscriptionType { NOT_SET, Q_LITE, Q_BUSINESS };

namespace SubscriptionTypeMapper {
AWS_QBUSINESS_API SubscriptionType GetSubscriptionTypeForName(const Aws::String& name);

AWS_QBUSINESS_API Aws::String GetNameForSubscriptionType(SubscriptionType value);
}  // namespace SubscriptionTypeMapper
}  // namespace Model
}  // namespace QBusiness
}  // namespace Aws
