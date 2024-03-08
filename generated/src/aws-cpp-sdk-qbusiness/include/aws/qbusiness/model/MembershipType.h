/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace QBusiness
{
namespace Model
{
  enum class MembershipType
  {
    NOT_SET,
    INDEX,
    DATASOURCE
  };

namespace MembershipTypeMapper
{
AWS_QBUSINESS_API MembershipType GetMembershipTypeForName(const Aws::String& name);

AWS_QBUSINESS_API Aws::String GetNameForMembershipType(MembershipType value);
} // namespace MembershipTypeMapper
} // namespace Model
} // namespace QBusiness
} // namespace Aws
