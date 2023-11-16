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
  enum class ApplicationStatus
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace ApplicationStatusMapper
{
AWS_SSOADMIN_API ApplicationStatus GetApplicationStatusForName(const Aws::String& name);

AWS_SSOADMIN_API Aws::String GetNameForApplicationStatus(ApplicationStatus value);
} // namespace ApplicationStatusMapper
} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
