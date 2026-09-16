/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>

namespace Aws {
namespace resiliencehubv2 {
namespace Model {
enum class PolicyEventType { NOT_SET, POLICY_ATTACHED_TO_SERVICE, POLICY_DETACHED_FROM_SERVICE, POLICY_SHARING_REVOKED, POLICY_DELETED };

namespace PolicyEventTypeMapper {
AWS_RESILIENCEHUBV2_API PolicyEventType GetPolicyEventTypeForName(const Aws::String& name);

AWS_RESILIENCEHUBV2_API Aws::String GetNameForPolicyEventType(PolicyEventType value);
}  // namespace PolicyEventTypeMapper
}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
