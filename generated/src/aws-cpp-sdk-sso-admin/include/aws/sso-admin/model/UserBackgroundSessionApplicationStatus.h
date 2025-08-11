/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SSOAdmin
{
namespace Model
{
  enum class UserBackgroundSessionApplicationStatus
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace UserBackgroundSessionApplicationStatusMapper
{
AWS_SSOADMIN_API UserBackgroundSessionApplicationStatus GetUserBackgroundSessionApplicationStatusForName(const Aws::String& name);

AWS_SSOADMIN_API Aws::String GetNameForUserBackgroundSessionApplicationStatus(UserBackgroundSessionApplicationStatus value);
} // namespace UserBackgroundSessionApplicationStatusMapper
} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
