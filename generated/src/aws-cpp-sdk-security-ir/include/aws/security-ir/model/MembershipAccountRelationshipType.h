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
  enum class MembershipAccountRelationshipType
  {
    NOT_SET,
    Organization,
    Unrelated
  };

namespace MembershipAccountRelationshipTypeMapper
{
AWS_SECURITYIR_API MembershipAccountRelationshipType GetMembershipAccountRelationshipTypeForName(const Aws::String& name);

AWS_SECURITYIR_API Aws::String GetNameForMembershipAccountRelationshipType(MembershipAccountRelationshipType value);
} // namespace MembershipAccountRelationshipTypeMapper
} // namespace Model
} // namespace SecurityIR
} // namespace Aws
