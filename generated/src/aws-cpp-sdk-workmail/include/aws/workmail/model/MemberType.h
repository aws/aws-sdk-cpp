/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WorkMail
{
namespace Model
{
  enum class MemberType
  {
    NOT_SET,
    GROUP,
    USER
  };

namespace MemberTypeMapper
{
AWS_WORKMAIL_API MemberType GetMemberTypeForName(const Aws::String& name);

AWS_WORKMAIL_API Aws::String GetNameForMemberType(MemberType value);
} // namespace MemberTypeMapper
} // namespace Model
} // namespace WorkMail
} // namespace Aws
