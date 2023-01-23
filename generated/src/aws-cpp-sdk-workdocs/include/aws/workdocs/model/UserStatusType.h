/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WorkDocs
{
namespace Model
{
  enum class UserStatusType
  {
    NOT_SET,
    ACTIVE,
    INACTIVE,
    PENDING
  };

namespace UserStatusTypeMapper
{
AWS_WORKDOCS_API UserStatusType GetUserStatusTypeForName(const Aws::String& name);

AWS_WORKDOCS_API Aws::String GetNameForUserStatusType(UserStatusType value);
} // namespace UserStatusTypeMapper
} // namespace Model
} // namespace WorkDocs
} // namespace Aws
