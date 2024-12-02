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
  enum class MembershipStatus
  {
    NOT_SET,
    Active,
    Cancelled,
    Terminated
  };

namespace MembershipStatusMapper
{
AWS_SECURITYIR_API MembershipStatus GetMembershipStatusForName(const Aws::String& name);

AWS_SECURITYIR_API Aws::String GetNameForMembershipStatus(MembershipStatus value);
} // namespace MembershipStatusMapper
} // namespace Model
} // namespace SecurityIR
} // namespace Aws
