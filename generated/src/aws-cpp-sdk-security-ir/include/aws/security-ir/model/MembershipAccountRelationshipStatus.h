/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/security-ir/SecurityIR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SecurityIR
{
namespace Model
{
  enum class MembershipAccountRelationshipStatus
  {
    NOT_SET,
    Associated,
    Disassociated,
    Unassociated
  };

namespace MembershipAccountRelationshipStatusMapper
{
AWS_SECURITYIR_API MembershipAccountRelationshipStatus GetMembershipAccountRelationshipStatusForName(const Aws::String& name);

AWS_SECURITYIR_API Aws::String GetNameForMembershipAccountRelationshipStatus(MembershipAccountRelationshipStatus value);
} // namespace MembershipAccountRelationshipStatusMapper
} // namespace Model
} // namespace SecurityIR
} // namespace Aws
