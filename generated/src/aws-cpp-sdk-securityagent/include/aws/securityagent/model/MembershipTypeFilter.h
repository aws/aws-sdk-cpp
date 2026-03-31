/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>

namespace Aws {
namespace SecurityAgent {
namespace Model {
enum class MembershipTypeFilter { NOT_SET, USER, ALL };

namespace MembershipTypeFilterMapper {
AWS_SECURITYAGENT_API MembershipTypeFilter GetMembershipTypeFilterForName(const Aws::String& name);

AWS_SECURITYAGENT_API Aws::String GetNameForMembershipTypeFilter(MembershipTypeFilter value);
}  // namespace MembershipTypeFilterMapper
}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
