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
enum class MembershipType { NOT_SET, USER };

namespace MembershipTypeMapper {
AWS_SECURITYAGENT_API MembershipType GetMembershipTypeForName(const Aws::String& name);

AWS_SECURITYAGENT_API Aws::String GetNameForMembershipType(MembershipType value);
}  // namespace MembershipTypeMapper
}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
